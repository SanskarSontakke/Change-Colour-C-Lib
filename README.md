# Change Colour Library

A simple and lightweight C/C++ library for changing terminal text colors using ANSI escape codes.

<img width="1920" height="1080" alt="image" src="https://github.com/user-attachments/assets/f2d41b74-cfe4-45c4-970e-5ad99f683105" />

## Features

- Usable from both C and C++ projects.
- Change text color (8 standard ANSI colors).
- Set text style (Normal or Bold).
- Reset text formatting.
- Easy to use helper functions for specific colors.
- Builds a static library for easy linking.

## File Structure

- `lib/change_colour.h`: Header file with function prototypes and enums. Includes C++ `extern "C"` wrappers.
- `lib/change_colour.c`: Implementation of the color changing functions.
- `demo.c`: Demo program showcasing how to use the library in C.
- `demo.cpp`: Demo program showcasing how to use the library in C++.
- `Makefile`: Build script to compile the static library and both demo programs.

## Usage

Include `change_colour.h` in your C or C++ program and link with the static library (`libchangecolour.a`).

### Example (C)

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

### Example (C++)

```cpp
#include <iostream>
#include "change_colour.h"

int main() {
    change_colour_to_red();
    std::cout << "This is red!" << std::endl;

    change_colour(COLOR_GREEN, STYLE_BOLD);
    std::cout << "This is bold green!" << std::endl;

    reset_colour();
    std::cout << "Back to normal." << std::endl;

    return 0;
}
```

## Compilation

To compile the library and the demo programs:

```bash
make
```

To run the C demo:

```bash
./demo
```

To run the C++ demo:

```bash
./demo_cpp
```

## Cleaning up

To remove compiled files:

```bash
make clean
```
