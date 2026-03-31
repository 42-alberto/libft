# Libft - albrodri - Or how to recreate 43 C library functions

<p align="center">
  <img src="https://img.shields.io/badge/Score-125%2F100-success?style=for-the-badge&logo=42" alt="Score 125/100" />
  <img src="https://img.shields.io/badge/Language-C-blue?style=for-the-badge&logo=c" alt="Language C" />
  <img src="https://img.shields.io/badge/Status-Completed-success?style=for-the-badge" alt="Status Completed" />
</p>

## Overview

**Libft** is the first project of the 42 Common Core. The goal is to create a custom C library by recoding standard C library functions, along with additional utility functions that will be used throughout the entire curriculum.

This project is fundamental for understanding **memory management**, **data structures**, and how low-level functions operate under the hood.

---

## Contents

The library is divided into three main sections:

### 1. Libc Functions
Standard functions from `<ctype.h>`, `<string.h>`, `<stdlib.h>`, and `<stdio.h>`:
* `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`
* `ft_strlen`, `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`
* `ft_strlcpy`, `ft_strlcat`, `ft_toupper`, `ft_tolower`
* `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_memchr`, `ft_memcmp`
* `ft_strnstr`, `ft_atoi`, `ft_calloc`, `ft_strdup`

### 2. Additional Functions
Practical functions not present in the standard library:
* `ft_substr`, `ft_strjoin`, `ft_strtrim`, `ft_split`
* `ft_itoa`, `ft_strmapi`, `ft_striteri`
* `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`

### 3. Bonus Functions (Linked Lists)
Functions to manipulate linked lists using the `t_list` structure:
* `ft_lstnew`, `ft_lstadd_front`, `ft_lstsize`, `ft_lstlast`
* `ft_lstadd_back`, `ft_lstdelone`, `ft_lstclear`, `ft_lstiter`, `ft_lstmap`

---

## How to Use

1. **Clone the repository:**
   ```bash
   git clone https://github.com/42-alberto/libft.git
2. **Compile the library:**
   ```bash
   cd libft
   make        # Compiles mandatory functions
   make bonus  # Compiles mandatory + bonus functions

3. **Usage in your project:**
   Include the header in your C files and link the library during compilation:
   ```c
   #include "libft.h"

4. **Linking the Library:**

  To use Libft in your projects, you must link the static library (libft.a) during compilation. This tells the compiler where to find the definitions of your custom functions.
  ```bash
  cc main.c -L. -lft -o libft
  ```
- **Breakdown:**

    -main.c: Your source file.
  
    -L.: Tells the compiler to look for libraries in the current directory.
  
    -lft: Links the libft.a library (the compiler automatically searches for the lib prefix and .a extension).
  
    -o: Defines the name of your final executable.

---

## Makefile Commands

| Command | Action |
| :--- | :--- |
| `make` | Compiles the library `libft.a`. |
| `make bonus` | Includes linked list functions in the library. |
| `make clean` | Removes object files (`.o`). |
| `make fclean` | Removes object files and the library file. |
| `make re` | Performs a clean re-compilation. |

---

## What I Learned

* **Pointers & Memory:** Manual memory allocation using `malloc` and protection against leaks.
* **Algorithm Logic:** Re-implementing complex functions like `ft_split` or `ft_strnstr`.
* **Static Libraries:** How to create and use `.a` archive files.
* **Data Structures:** Implementation and manipulation of **linked lists**.

---

<p align="center">
  Developed with coffe and love by Alberto (42 Madrid) 
</p>
