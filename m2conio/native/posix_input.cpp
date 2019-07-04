#include <termios.h>
#include <stdio.h>
#include "posix_input.h"

static struct termios told, tnew;

void initTermios(void) 
{
  tcgetattr(0, &told);
  tnew = told;
  tnew.c_lflag &= ~ICANON;
  tnew.c_lflag &= ~ECHO;
  tcsetattr(0, TCSANOW, &tnew); 
}

void resetTermios(void) 
{
  tcsetattr(0, TCSANOW, &told);
}

int getch(void) 
{
  int ch;
  initTermios();
  ch = getchar();
  resetTermios();
  return ch;
}


int kbhit(void)
{
    int ch;
    initTermios();
    ch = getchar();
    resetTermios();
    if(ch != EOF)
    {
    ungetc(ch, stdin);
    return 1;
    }
    return 0;
}