"""Native CTalentSystem layout, derived from B4090/B4770/B58A0.

Capacity changes move arrays AND their queue counters, bitmaps and values.
Keep a retail golden layout so a formula error cannot silently rewrite code.
"""
def align4(n):
    return (n+3)&~3

def tree_pool(n, stride):
    queue=n*stride+4
    head=queue+4*(n+1)
    bitmap=head+12
    used=bitmap+4*((n+31)//32)
    return dict(queue=queue,head=head,tail=head+4,available=head+8,
                bitmap=bitmap,used=used,size=used+4)

def source_cache(n):
    pool=tree_pool(n,76)
    values=12+pool["size"]
    constructed=values+72*n
    return dict(capacity=n,pool=pool,values=values,refcount=values+68,
                constructed=constructed,size=constructed+4*((n+31)//32))

def layout(n, cache_capacity=3):
    name=tree_pool(n,44)
    ids=tree_pool(n,16)
    words=4*((n+31)//32)
    constructed=84*n
    queue=constructed+words
    head=queue+4*(n+1)
    bitmap=head+12
    used=bitmap+words
    generations=used+4
    mask=generations+4*n
    meta=dict(constructed=constructed,queue=queue,head=head,tail=head+4,
              available=head+8,bitmap=bitmap,used=used,generations=generations,
              mask=mask,shift=mask+4,size=mask+8)
    name_values=12+name['size']
    name_size=align4(name_values+n+1)
    id_values=12+ids['size']
    id_size=id_values+4*(n+1)
    pool=4+name_size
    id_map=pool+meta['size']
    cache=id_map+id_size
    # Parsed XML cache capacity is independent of definition slots; callers
    # select the byte source-ID domain for expanded registries.
    return dict(capacity=n,words=words,name=name,ids=ids,meta=meta,
                name_values=name_values,id_values=id_values,pool=pool,
                id_map=id_map,cache=cache,size=cache+source_cache(cache_capacity)["size"])

def verify_retail():
    r=layout(150)
    assert r['name']==dict(queue=0x19cc,head=0x1c28,tail=0x1c2c,available=0x1c30,
                          bitmap=0x1c34,used=0x1c48,size=0x1c4c)
    assert r['ids']==dict(queue=0x964,head=0xbc0,tail=0xbc4,available=0xbc8,
                         bitmap=0xbcc,used=0xbe0,size=0xbe4)
    assert r['meta']==dict(constructed=0x3138,queue=0x314c,head=0x33a8,
                          tail=0x33ac,available=0x33b0,bitmap=0x33b4,used=0x33c8,
                          generations=0x33cc,mask=0x3624,shift=0x3628,size=0x362c)
    assert [r[k] for k in ('name_values','id_values','pool','id_map','cache','size')]==[
        0x1c58,0xbf0,0x1cf4,0x5320,0x616c,0x6360]
    return r

if __name__=='__main__':
    import json
    verify_retail()
    print(json.dumps(layout(254),indent=2))
