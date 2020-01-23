#include "pch.h"
#include <SQLiteCpp/SQLiteCpp.h>
#include <curses.h>
#include <iostream>

#include "models/Database.h"
#include "views/MainView.h"

int main() {
   /* hotel::Database::set_filename("database.db");*/
    initscr();
    start_color();

    try {
        /*hotel::Database db;*/

        hotel::MainView main_v;
        main_v.display();
    }
    catch(std::exception &e) {
        mvprintw(1, 10, "SQLite exception: ");
        mvprintw(1, 10 + 19, e.what());
        init_pair(1, COLOR_RED, COLOR_WHITE);
        mvchgat(1, 10, -1, A_BLINK, 1, NULL);
    }

    refresh();
    getch();
    endwin();
}
