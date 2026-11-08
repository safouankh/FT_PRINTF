# FT_PRINTF

A custom implementation of the C `printf` function written in C from scratch.

This project recreates a subset of the standard library's `printf` behavior using variadic arguments and manual formatting logic. It was built as part of a 42-style coding project and compiles into a static library named `libftprintf.a`.

## Features

Supports the following format specifiers:

- `%c` - character
- `%s` - string
- `%p` - pointer address
- `%d` / `%i` - signed integer
- `%u` - unsigned integer
- `%x` / `%X` - hexadecimal number
- `%` - percent sign

## Project structure

- `ft_printf.c` - main formatting logic
- `ft_printf.h` - function prototypes and includes
- `ft_putchar.c` - writes a single character
- `ft_putstr.c` - writes a string
- `ft_putnbr.c` - prints signed integers
- `ft_putunbr.c` - prints unsigned integers
- `ft_puthex.c` - prints hexadecimal values
- `ft_hexhelper.c` - helper functions for hexadecimal conversion
- `makefile` - build rules for the library

## Build

To compile the library:

```bash
make
```

This creates:

```bash
libftprintf.a
```

Useful cleanup targets:

```bash
make clean
make fclean
make re
```

## Usage

Include the header in your C file:

```c
#include "ft_printf.h"
```

Example:

```c
#include "ft_printf.h"

int main(void)
{
    ft_printf("Hello %s!\n", "world");
    ft_printf("Decimal: %d\n", 42);
    ft_printf("Unsigned: %u\n", 255);
    ft_printf("Hex: %x\n", 255);
    ft_printf("Pointer: %p\n", (void *)0x1234);
    return (0);
}
```

Compile it with the library:

```bash
cc main.c -L. -lftprintf
```

## Notes

This project is a simplified version of `printf` focused on core conversion specifiers and standard output behavior. It is intended as a learning exercise in C, variadic functions, memory handling, and formatting logic.

## License

This project is for educational purposes.
