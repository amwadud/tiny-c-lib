# Libft

A custom C library reimplementing essential standard functions, along with additional utilities for string handling, memory management, and linked list operations — developed as part of the **42 Network** curriculum.

This project aims to strengthen understanding of low-level programming by recreating key components of the C standard library from scratch.

---

<<<<<<< HEAD
##  Branches
=======
## Branches
>>>>>>> dev

* [**main**](https://github.com/aehabdelouadoud/libft/tree/main) → Stable, production-ready version.
* [**dev**](https://github.com/aehabdelouadoud/libft/tree/dev) → Active development branch for new features and testing.

---
<<<<<<< HEAD

## ⚙ Compilation

To build the library, run:

=======

## Compilation

To build the library, run:

>>>>>>> dev
```bash
make
```

This will generate a static library file:

```
libft.a
```

Cleaning and rebuilding:

```bash
make clean     # Remove object files
make fclean    # Remove object files + libft.a
make re        # Rebuild everything
```

---

<<<<<<< HEAD
##  Usage
=======
## Usage
>>>>>>> dev

You can include **libft** in your C projects by linking the compiled library:

```bash
gcc main.c -L. -lft -o main
```

Include the header file in your source:

```c
#include "libft.h"
```

Example:

```c
#include "libft.h"
#include <stdio.h>

int main(void)
{
    char str[] = "Hello, Libft!";
    printf("Length: %zu\n", ft_strlen(str));
    return 0;
}
```

---

<<<<<<< HEAD
##  Project Structure
=======
## Project Structure
>>>>>>> dev

```
.
├── Makefile
├── libft.h
├── ft_*.c
└── libft.a
```

---

<<<<<<< HEAD
##  Features
=======
## Features
>>>>>>> dev

* **Memory**: `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_calloc`, etc.
* **Strings**: `ft_strlen`, `ft_strdup`, `ft_strjoin`, `ft_split`, etc.
* **Characters**: `ft_isalpha`, `ft_toupper`, etc.
* **Linked Lists**: `ft_lstnew`, `ft_lstadd_front`, `ft_lstmap`, etc.

---

<<<<<<< HEAD
##  Author
=======
## Author
>>>>>>> dev

**AIT-EL-HAJ Abdelouadoud**
📧 [abait-el@student.1337.ma](mailto:abait-el@student.1337.ma)
 [GitHub Repository](https://github.com/aehabdelouadoud/libft)
