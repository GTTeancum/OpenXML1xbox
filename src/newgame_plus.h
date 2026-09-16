#pragma once
/* Returns 1 to queue native newgame, -1 when consumed, 0 for other commands. */
int xml1_newgame_plus_command(unsigned command);
int xml1_newgame_plus_available(void);
extern int xml1_newgame_plus_starting;
void xml1_newgame_plus_finish(void);
