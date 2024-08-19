# libft

## Overview

`libft` is a custom implementation of a standard C library, created as part of the 42 curriculum. The goal of this project is to recreate many of the functions found in the standard C library, along with some additional utility functions that are often useful in C programming.

## Features

This library includes the following categories of functions:

### 1. **Libc Functions**

These are standard C library functions that have been reimplemented:

- **String Manipulation**: `ft_strlen`, `ft_strcpy`, `ft_strncpy`, `ft_strcat`, `ft_strncat`, `ft_strlcat`, `ft_strdup`, `ft_strchr`, `ft_strrchr`, `ft_strstr`, `ft_strnstr`, `ft_strcmp`, `ft_strncmp`, etc.
- **Memory Functions**: `ft_memset`, `ft_memcpy`, `ft_memccpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`, `ft_bzero`, etc.
- **Character Functions**: `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`, `ft_tolower`, `ft_toupper`.
- **Conversion Functions**: `ft_atoi`, `ft_itoa`.
- **File Descriptors**: `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`.

### 2. **Additional Functions**

These functions provide extra utility and are not part of the standard C library:

- **String Operations**: `ft_substr`, `ft_strjoin`, `ft_strtrim`, `ft_split`, `ft_strmapi`, `ft_striteri`.
- **Memory Allocation**: `ft_calloc`.
- **Linked List Operations**: `ft_lstnew`, `ft_lstadd_front`, `ft_lstadd_back`, `ft_lstdelone`, `ft_lstclear`, `ft_lstiter`, `ft_lstmap`, `ft_lstlast`, `ft_lstsize`.

## Installation

To use the `libft` library in your project:

1. Clone this repository:
   ```bash
   git clone https://github.com/mmachlou/libft.git
   ```

2. Compile the library:
   ```bash
   make
   ```

3. Link the compiled `libft.a` with your project.

## Usage

To use `libft` in your project, include the `libft.h` header in your source files and link against the `libft.a` library:

```c
#include "libft.h"

int main(void) {
    // Your code here
}
```

Compile your project with `libft.a`:

```bash
gcc -Wall -Wextra -Werror -o my_program my_program.c -L. -lft
```

## Testing

Unit tests for `libft` can be run using the provided test framework (if applicable). Ensure that all functions behave as expected.

## Contributing

If you wish to contribute to this project, feel free to fork the repository, create a new branch, and submit a pull request with your changes.

## License

This project is licensed under the MIT License. See the `LICENSE` file for details.
