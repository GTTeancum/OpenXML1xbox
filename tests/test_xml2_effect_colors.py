import sys, unittest, xml.etree.ElementTree as ET
from pathlib import Path
sys.path.insert(0, str(Path(__file__).resolve().parents[1]/'scripts'))
from xml2_effect_colors import translate

class Colors(unittest.TestCase):
    def test_authored_points_and_random_endpoints(self):
        node=ET.fromstring('<Sprite startColor1="255" midColor1="65280" endColor1="16711680" startColor2="0" midColor2="8421504" endColor2="16777215" alpha="0 0 1 0 0 1" texture="textures/a.png"/>')
        self.assertEqual(translate(node),1)
        for channel,expected in [('red',[1,0,0]),('green',[0,1,0]),('blue',[0,0,1])]:
            coefficients=list(map(float,node.get(channel).split()))
            for endpoint,values in enumerate([expected,[0,128/255,1]]):
                a,b,c=coefficients[endpoint*3:endpoint*3+3]
                for t,value in zip([0,.5,1],values):
                    self.assertAlmostEqual(a*t*t+b*t+c,value,places=7)
        self.assertEqual(node.get('alpha'),'0 0 1 0 0 1')
        self.assertEqual(node.get('texture'),'textures/a.png')
        before=ET.tostring(node);self.assertEqual(translate(node),0)
        self.assertEqual(ET.tostring(node),before)
    def test_xml1_curves_win(self):
        node=ET.fromstring('<Sprite red="original" startColor1="255"/>')
        before=ET.tostring(node);self.assertEqual(translate(node),0)
        self.assertEqual(ET.tostring(node),before)
    def test_partial_input_rejected(self):
        with self.assertRaises(ValueError):translate(ET.fromstring('<Sprite startColor1="255"/>'))
if __name__=='__main__':unittest.main()
