# Libft — 42 Project a tiny c library

Libft is the classic 42 school project: a compact reimplementation of a subset of the C standard library. The goal is to deepen your understanding of low-level C by implementing commonly used functions (strings, memory, character checks, and more) from scratch and delivering a small, portable static library for use in other projects.

This repository is an implementation of the 42 "libft" project and follows the usual project constraints and evaluation expectations.

Why this project matters
- Hands-on practice with pointers, memory management, and C idioms.
- Learn how common library routines are implemented.
- Produce a tiny, auditable static library you can link into other projects.

Table of contents
- [What you build](#what-you-build)
- [Mandatory functions (overview)](#mandatory-functions-overview)
- [Bonus (linked lists)](#bonus-linked-lists)
- [Rules & evaluation notes](#rules--evaluation-notes)
- [Quick start](#quick-start)
- [Build](#build)
- [Usage example](#usage-example)
- [Project structure](#project-structure)
- [Testing tips](#testing-tips)
- [Contributing & style](#contributing--style)
- [License & author](#license--author)

---

## What you build

A static library named `libft.a` containing reimplementations of many standard functions prefixed with `ft_` (for example, `ft_strlen`, `ft_memcpy`, ...). A single header `libft.h` exposes prototypes and any helper types (for example `t_list` for the bonus).

---

## Mandatory functions (overview)

You will implement a set of core functions generally grouped as:

- Memory: ft_memset, ft_bzero, ft_memcpy, ft_memmove, ft_memchr, ft_memcmp, ft_calloc, ...
- Strings: ft_strlen, ft_strlcpy, ft_strlcat, ft_strchr, ft_strrchr, ft_strncmp, ft_strnstr, ft_strdup, ft_substr, ft_strjoin, ft_strtrim, ft_split, ft_itoa, ft_strmapi, ...
- Character tests & conversions: ft_isalpha, ft_isdigit, ft_isalnum, ft_isascii, ft_isprint, ft_toupper, ft_tolower, ...
- I/O helpers: ft_putchar_fd, ft_putstr_fd, ft_putendl_fd, ft_putnbr_fd, ...
- Utilities: any smaller helpers required by the project rubric (check your subject sheet for the canonical list).

Refer to `libft.h` for the complete function list and exact prototypes implemented in this repository.

---

## Bonus (linked lists)

A typical bonus part requires a simple singly linked list API:

- t_list structure
- ft_lstnew, ft_lstadd_front, ft_lstsize, ft_lstlast, ft_lstadd_back, ft_lstdelone, ft_lstclear, ft_lstiter, ft_lstmap

This repository includes the linked-list bonus implementation (if present). Check `libft.h` for the type definition.

---

## Rules & evaluation notes

- Implementations must be your own. Do not use the forbidden functions from the C standard library to implement mandatory functions.
- Only the standard functions explicitly allowed by the 42 subject may be used (for example: `malloc`, `free`, `write` depending on your campus rules). Check your local subject for exact allowed functions.
- Compile with the project-required flags (commonly `-Wall -Wextra -Werror`) to catch warnings and to meet the norm.
- Keep functions short, well-commented when necessary, and follow the 42 coding style / norm for formatting where required.

---

## Quick start

Clone the repository:

```bash
git clone https://github.com/amwadud/tiny-c-lib.git
cd tiny-c-lib
```

Build the library:

```bash
make
```

This produces:

```
libft.a
```

Common make targets:

```bash
make            # build libft.a
make clean      # remove object files
make fclean     # remove object files and libft.a
make re         # fclean + make
```

---

## Usage example

Include the header and link the static library when compiling your program:

```c
#include "libft.h"
#include <stdio.h>

int main(void)
{
    char *s = ft_strdup("Hello, libft!");
    if (s)
    {
        printf("%zu\n", ft_strlen(s));
        free(s);
    }
    return 0;
}
```

Compile and link:

```bash
gcc -Wall -Wextra -Werror main.c -L. -lft -o example
```

---

## Project structure

```
.
├── Makefile
├── libft.h
├── ft_*.c        # implementation source files
├── *.o           # object files (after build)
└── libft.a       # final static library (after build)
```

---

## Testing tips

- Compile small test programs that exercise each function and run them under valgrind (or equivalent) to check for leaks and invalid memory use:
  - valgrind ./example
- Use edge cases: empty strings, NULL pointers where appropriate (only when contract allows), zero-length copies, overlapping memory zones for memcpy/memmove checks.
- Compare outputs against the system libc behavior to ensure matching semantics.

---

## Contributing & style

This repository is intended as an educational implementation. If you want to contribute:
1. Fork the repo.
2. Create a branch for your change: git checkout -b feat/your-topic
3. Implement and test your changes.
4. Submit a clear pull request describing what you changed and why.

Adhere to the 42 coding norm and keep changes focused and well-documented.

---

## License & Author

Maintained by: amwadud  
Original inspiration: 42 school "libft" project and common community implementations.

If you want a permissive license on this repo, add a LICENSE file (MIT is a common choice for educational repos).
