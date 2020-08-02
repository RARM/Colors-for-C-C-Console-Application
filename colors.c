#include "colors.h"
#if defined (_WIN32) || defined (WIN32)
#include <windows.h>
#endif


void scrclr(int color) {
    switch (color) {
        case CLEAR:
            #if defined (_WIN32) || defined (WIN32)
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
            #else
                printf("\e[0m");
            #endif
            break;
        case RED:
            #if defined (_WIN32) || defined (WIN32)
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
            #else
                printf("\e[31m");
            #endif
            break;
        case GREEN:
            #if defined (_WIN32) || defined (WIN32)
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2);
            #else
                printf("\e[32m");
            #endif
            break;
        case BLUE:
            #if defined (_WIN32) || defined (WIN32)
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9);
            #else
                printf("\e[34m");
            #endif
            break;
        case YELLOW:
            #if defined (_WIN32) || defined (WIN32)
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 6);
            #else
                printf("\e[33m");
            #endif
            break;
    }
}
