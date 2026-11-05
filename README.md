*This project has been created as part of the 42 curriculum by aait-bih.*

# Libft

## Description

**Libft** is the first project of the 42 common core. The goal is to build your own C library, `libft.a`, that re-implements a set of standard C library functions, adds a few useful utility functions, and provides a basic linked-list API. The library is then reused in every later 42 project.

**Overview:**
- Re-implementation of standard `libc` functions (`<ctype.h>`, `<string.h>`, `<stdlib.h>`), with the same behavior as the originals, prefixed with `ft_`.
- Additional utility functions for strings, number conversion and file-descriptor output.
- A singly linked list structure (`t_list`) with its management functions.
- Strict compliance with the 42 Norm, no memory leaks, and no use of forbidden functions.

## Instructions

### Requirements
- A C compiler (`cc`, `gcc` or `clang`)
- `make`
- `ar` (to create the static library)

### Compilation
```bash
git clone <repository-url> libft
cd libft
make          # builds libft.a
```

Makefile rules:

| Rule | Description |
|------|-------------|
| `make` / `make all` | Compiles the library into `libft.a` |
| `make clean` | Removes object files |
| `make fclean` | Removes object files and `libft.a` |
| `make re` | Runs `fclean` then `all` |

Compiler flags: `-Wall -Wextra -Werror`.

### Usage
Include the header in your code and link against the library:

```c
#include "libft.h"

int main(void)
{
    char *s = ft_strjoin("Hello, ", "42!");
    ft_putendl_fd(s, 1);
    free(s);
    return (0);
}
```

```bash
cc -Wall -Wextra -Werror main.c -L. -lft -o test
./test
```

## Library Description

`libft.a` is a static library composed of three groups of functions, all declared in `libft.h`.

### Part 1: Libc functions

Re-implementations of standard functions, behaving like the originals.

| Function | Description |
|----------|-------------|
| `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint` | Character class checks |
| `ft_toupper`, `ft_tolower` | Character case conversion |
| `ft_strlen` | Length of a string |
| `ft_memset`, `ft_bzero` | Fill memory with a byte / zeros |
| `ft_memcpy`, `ft_memmove` | Copy memory (`memmove` handles overlapping areas) |
| `ft_memchr`, `ft_memcmp` | Search / compare memory |
| `ft_strlcpy`, `ft_strlcat` | Size-bounded string copy / concatenation |
| `ft_strchr`, `ft_strrchr` | Find first / last occurrence of a character |
| `ft_strncmp` | Compare up to `n` characters |
| `ft_strnstr` | Find a substring within the first `n` characters |
| `ft_atoi` | Convert a string to an integer |
| `ft_calloc` | Allocate zero-initialized memory |
| `ft_strdup` | Duplicate a string (allocated with `malloc`) |

### Part 2: Additional functions

Functions that are not in libc or are part of it in a different form.

| Function | Description |
|----------|-------------|
| `ft_substr` | Extract a substring from a string |
| `ft_strjoin` | Concatenate two strings into a new one |
| `ft_strtrim` | Trim characters of a set from both ends of a string |
| `ft_split` | Split a string into an array of strings using a delimiter |
| `ft_itoa` | Convert an integer to a string |
| `ft_strmapi` | Apply a function to each character, returning a new string |
| `ft_striteri` | Apply a function to each character (with its index) in place |
| `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd` | Write a char / string / string + newline / number to a file descriptor |

### Part 3: Linked lists

```c
typedef struct s_list
{
    void            *content;
    struct s_list   *next;
}   t_list;
```

| Function | Description |
|----------|-------------|
| `ft_lstnew` | Create a new node |
| `ft_lstadd_front`, `ft_lstadd_back` | Add a node at the beginning / end |
| `ft_lstsize` | Count the nodes |
| `ft_lstlast` | Return the last node |
| `ft_lstdelone` | Delete one node using a `del` function |
| `ft_lstclear` | Delete and free a node and all its successors |
| `ft_lstiter` | Apply a function to the content of each node |
| `ft_lstmap` | Create a new list by applying a function to each node's content |

### Technical choices
- **Static library:** built with `ar rcs`, so it can be linked directly into later projects.
- **Same behavior as libc:** edge cases (NULL-sized buffers, overlapping memory, overflow in `ft_atoi`, etc.) follow the original functions' behavior.
- **Memory safety:** every allocating function checks `malloc` and frees any partial allocations on failure (e.g. `ft_split`, `ft_lstmap`).
- **Relink avoidance:** the Makefile only rebuilds files that changed.

## Resources

### References
- `man 3` pages for each re-implemented function (e.g. `man 3 strlcpy`, `man 3 memmove`)
- [The C Programming Language](https://en.wikipedia.org/wiki/The_C_Programming_Language), Kernighan & Ritchie
- [GNU Make Manual](https://www.gnu.org/software/make/manual/make.html)
- [42 Norm](https://github.com/42School/norminette)
- [GNU C Library documentation](https://www.gnu.org/software/libc/manual/)
- [Beej's Guide to C Programming](https://beej.us/guide/bgc/)

### Use of AI
AI was used as a learning and support tool for the following tasks:
- Explaining concepts such as `memmove` with overlapping memory, static libraries and Makefile behavior.
- Suggesting edge cases to test for the functions.
- Helping structure and proofread this README.

All code in the library was written, understood and tested by the author. AI suggestions were reviewed before being used.