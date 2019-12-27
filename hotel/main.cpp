#include "pch.h"
#include <curses.h>
#include <iostream>

int main() {
  initscr();

  mvprintw(2, 20, "HELOWRODKURWA");
  refresh();
  getch();
  endwin();
}
