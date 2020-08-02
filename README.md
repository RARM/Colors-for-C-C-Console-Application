# Colors for C/C++
This is a easy and quick to use library for console applications in C/C++.

It is limited, but has been tested in Linux and Windows (making it semi-cross-platform). It only supports the colors:
1. White
1. Red
1. Green
1. Blue
1. Yellow

In Windows, it is supposed to work only if the background color of the console is black. If the background color is different, it may turn the background of the text black. However, it has not been tested with a different background color.

Nevertheless, it is a fast and simple to use library.

## How to Use
### Include the Header
Include the header in your source code.
```c
#include "colors.h"
```

### Function
```c
void scrclr(int COLOR)
```

##### Quick explanation
Use the `scrclr` function to change the color of the text that comes after it. For example, call the function `scrclr` to change the color to red; then, al the instances of `printf` will output the text in red.

##### Argument
The functions has one argument: `COLOR`. It receives one of the following symbolic constants:

| Symbolic Constant | Text Color     |
| :---------------- | :------------- |
| CLEAR             | White          |
| RED               | Red            |
| GREEN             | Green          |
| BLUE              | Blue           |
| YELLOW            | Yellow         |

##### Example
```c
#include <stdio.h>
#include "color.h"

int main (void) {
    scrclr(WHITE);
    printf("This text is white.\n");

    scrclr(RED);
    printf("This text is red.\n");

    scrclr(GREEN);
    printf("This text is green.\n");

    scrclr(BLUE);
    printf("This text is blue.\n");

    scrclr(YELLOW);
    printf("This text is yellow.\n");

    scrclr(WHITE);
    printf("This text is white again.\n");

    return 0;
}
```
