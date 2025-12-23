# Change Colour Library

A simple and lightweight C library for changing terminal text colors using ANSI escape codes.

## Features

- Change text color (8 standard ANSI colors).
- Set text style (Normal or Bold).
- Reset text formatting.
- Easy to use helper functions for specific colors.

## File Structure

- `change_colour.h`: Header file with function prototypes and enums.
- `change_colour.c`: Implementation of the color changing functions.
- `main.c`: Demo program showcasing how to use the library.
- `Makefile`: Build script for the demo program.

## Usage

Include `change_colour.h` in your C program and link with `change_colour.c`.

### Example

```c
#include <stdio.h>
#include "change_colour.h"

int main() {
    change_colour_to_red();
    printf("This is red!\n");

    change_colour(COLOR_GREEN, STYLE_BOLD);
    printf("This is bold green!\n");

    reset_colour();
    printf("Back to normal.\n");

    return 0;
}
```

## Compilation

To compile the demo program:

```bash
make
```

To run the demo:

```bash
./demo
```

## Cleaning up

To remove compiled files:

```bash
make clean
```
