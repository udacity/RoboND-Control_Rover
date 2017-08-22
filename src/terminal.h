#include <iostream>
#include <stdio.h>
#include <unistd.h>
#include <termios.h>
using namespace std;

void DisableTerminal()
{

   struct termios old_tio, new_tio;

   /* get the terminal settings for stdin */
   tcgetattr(STDIN_FILENO,&old_tio);

   /* we want to keep the old setting in case we want to restore them a the end */
   new_tio=old_tio;

   /* disable canonical mode (buffered i/o) and local echo */
   new_tio.c_lflag &=(~ICANON & ~ECHO);

   /* set the new settings immediately */
   tcsetattr(STDIN_FILENO,TCSANOW,&new_tio);

}
