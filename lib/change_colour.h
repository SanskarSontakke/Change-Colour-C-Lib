#ifndef CHANGE_COLOUR_H
#define CHANGE_COLOUR_H

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @file change_colour.h
 * @brief Simple C library to change terminal text output colors using ANSI escape codes.
 */

/**
 * @enum TextColor
 * @brief Enum representing standard ANSI colors.
 */
typedef enum {
    COLOR_BLACK = 0,
    COLOR_RED = 1,
    COLOR_GREEN = 2,
    COLOR_YELLOW = 3,
    COLOR_BLUE = 4,
    COLOR_PURPLE = 5,
    COLOR_CYAN = 6,
    COLOR_WHITE = 7
} TextColor;

/**
 * @enum TextStyle
 * @brief Enum representing text styles (bold or normal).
 */
typedef enum {
    STYLE_NORMAL = 0,
    STYLE_BOLD = 1
} TextStyle;

/**
 * @brief Changes the terminal text color and style.
 *
 * @param color The color to set (from TextColor enum).
 * @param style The style to set (STYLE_NORMAL or STYLE_BOLD).
 */
void change_colour(TextColor color, TextStyle style);

/**
 * @brief Resets the terminal text color and style to default.
 */
void reset_colour(void);

/** @brief Sets text color to Black. */
void change_colour_to_black(void);

/** @brief Sets text color to Red. */
void change_colour_to_red(void);

/** @brief Sets text color to Green. */
void change_colour_to_green(void);

/** @brief Sets text color to Yellow. */
void change_colour_to_yellow(void);

/** @brief Sets text color to Blue. */
void change_colour_to_blue(void);

/** @brief Sets text color to Purple. */
void change_colour_to_purple(void);

/** @brief Sets text color to Cyan. */
void change_colour_to_cyan(void);

/** @brief Sets text color to White. */
void change_colour_to_white(void);

#ifdef __cplusplus
}
#endif

#endif // CHANGE_COLOUR_H
