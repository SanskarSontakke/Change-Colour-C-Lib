#include <stdio.h>
#include "change_colour.h"

void change_colour(TextColor color, TextStyle style)
{
    printf("\033[%d;3%dm", style, color);
}

void reset_colour(void)
{
    printf("\033[0m");
}

void change_colour_to_black(void)
{
    change_colour(COLOR_BLACK, STYLE_NORMAL);
}

void change_colour_to_red(void)
{
    change_colour(COLOR_RED, STYLE_NORMAL);
}

void change_colour_to_green(void)
{
    change_colour(COLOR_GREEN, STYLE_NORMAL);
}

void change_colour_to_yellow(void)
{
    change_colour(COLOR_YELLOW, STYLE_NORMAL);
}

void change_colour_to_blue(void)
{
    change_colour(COLOR_BLUE, STYLE_NORMAL);
}

void change_colour_to_purple(void)
{
    change_colour(COLOR_PURPLE, STYLE_NORMAL);
}

void change_colour_to_cyan(void)
{
    change_colour(COLOR_CYAN, STYLE_NORMAL);
}

void change_colour_to_white(void)
{
    change_colour(COLOR_WHITE, STYLE_NORMAL);
}
