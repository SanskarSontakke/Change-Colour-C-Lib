#include <stdio.h>
#include "change_colour.h"

int main() {
    printf("Demonstrating color changes:\n");

    change_colour_to_red();
    printf("This is red text.\n");

    change_colour_to_green();
    printf("This is green text.\n");

    change_colour_to_blue();
    printf("This is blue text.\n");

    change_colour(COLOR_YELLOW, STYLE_BOLD);
    printf("This is bold yellow text.\n");

    change_colour(COLOR_PURPLE, STYLE_NORMAL);
    printf("This is purple text.\n");

    change_colour(COLOR_CYAN, STYLE_BOLD);
    printf("This is bold cyan text.\n");

    reset_colour();
    printf("This is back to default text.\n");

    return 0;
}
