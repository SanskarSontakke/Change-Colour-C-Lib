#include <iostream>
#include "change_colour.h"

int main() {
    std::cout << "Demonstrating color changes from C++:" << std::endl;

    change_colour_to_red();
    std::cout << "This is red text." << std::endl;

    change_colour_to_green();
    std::cout << "This is green text." << std::endl;

    change_colour_to_blue();
    std::cout << "This is blue text." << std::endl;

    change_colour(COLOR_YELLOW, STYLE_BOLD);
    std::cout << "This is bold yellow text." << std::endl;

    change_colour(COLOR_PURPLE, STYLE_NORMAL);
    std::cout << "This is purple text." << std::endl;

    change_colour(COLOR_CYAN, STYLE_BOLD);
    std::cout << "This is bold cyan text." << std::endl;

    reset_colour();
    std::cout << "This is back to default text." << std::endl;

    return 0;
}
