#include "pch.h"
#include <SQLiteCpp/SQLiteCpp.h>
#include <curses.h>
#include <iostream>

int main() {
    initscr();
    start_color();

    try {
        SQLite::Database db("test.db",
            SQLite::OPEN_CREATE | SQLite::OPEN_READWRITE);
        std::cout << "SQLite database file '" << db.getFilename().c_str()
            << "' opened successfully\n";

        // Test if the 'test' table exists
        const bool bExists = db.tableExists("test");
        std::cout << "SQLite table 'test' exists=" << bExists << "\n";

        // Get a single value result with an easy to use shortcut
        const std::string value =
            db.execAndGet("SELECT value FROM test WHERE id=2");
        std::cout << "execAndGet=" << value.c_str() << std::endl;

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
