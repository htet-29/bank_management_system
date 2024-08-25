#include <curses.h>
#include <stdio.h>

int main()
{
    initscr();            // Initialize the window
    printw("Hello, World!"); // Print Hello, World!
    refresh();            // Print it on the real screen
    getch();              // Wait for user input
    endwin();             // End curses mode
    return 0;
}