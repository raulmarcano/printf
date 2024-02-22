<h2 align="center">🖨️ Welcome to:</h2>
<h1 align="center">ft_printf - A Replication of the printf Function in C</h1>

<p style="text-align: justify;" align="center">
	This project offers an opportunity to look into the complexities of C programming by re-imagining the well-known <b>printf</b> function. 
</p>

<h3 align="center">Languages and Tools:</h3>
<p align="center">
    <img src="https://raw.githubusercontent.com/devicons/devicon/master/icons/c/c-original.svg" alt="c" width="40" height="40"/>
    <img src="https://www.vectorlogo.zone/logos/git-scm/git-scm-icon.svg" alt="git" width="40" height="40"/>
</p>

## Installation

To use the `ft_printf` function in your project, follow these steps:

1. Clone the repository in the same directory of the file where you want to use printf().
2. Include the header file `ft_printf.h` in your source code.
3. Use the `ft_printf` function in your code as a replacement for the standard `printf`.
4. Compile your code with the additional files provided in the repository.


## Implemented Conversions
To enhance the functionality of ft_printf, we have implemented the following format specifiers:

- %c: Prints a single character.
- %s: Prints a string as defined in C.
- %p: Prints a void pointer (void *) in hexadecimal format.
- %d: Prints a decimal (base 10) number.
- %i: Prints an integer in base 10.
- %u: Prints an unsigned decimal (base 10) number.
- %x: Prints a hexadecimal (base 16) number in lowercase.
- %X: Prints a hexadecimal (base 16) number in uppercase.
- %%: Prints the percentage symbol.

### Example
```bash
#include "ft_printf.h"

int main() 
{
    char c = 'A';
    char *str = "Hello, World!";
    int num = 42;
    void *ptr = (void *)0x12345678;

    ft_printf("Character: %c\n", c);
    ft_printf("String: %s\n", str);
    ft_printf("Decimal: %d\n", num);
    ft_printf("Hexadecimal Pointer: %p\n", ptr);

    return 0;
}
```
