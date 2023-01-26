#ifndef SET_COLOR_H
#define SET_COLOR_H

#include <windows.h>

void setcolor(unsigned short color){
  HANDLE hCon = GetStdHandle(STD_OUTPUT_HANDLE);
  SetConsoleTextAttribute(hCon,color);
}

#endif