<h1 align="center">🧠  C - Function Pointers</h1>

<p align="center">
  <b>A Holberton-style low-level programming project</b> <br>
  📌 Focus: <i>Pointers to functions and real-world usage in C</i>
</p>

---

## 📖 Description

This project introduces **function pointers in C** — what they are, how to use them, and how to pass functions as arguments. It also includes a simple calculator program using function pointers and structs.

---

## 🎯 Learning Objectives

By the end of this project, you will be able to:

- ✅ Define and use **function pointers** in C
- 🧠 Explain what a pointer to a function holds
- 🗺️ Understand where function pointers point in virtual memory
- 🔁 Pass functions as arguments to other functions

---

## 🛠️ Project Requirements

| Requirement           | Details |
|-----------------------|---------|
| OS                    | Ubuntu 20.04 LTS |
| Compiler              | `gcc -Wall -Werror -Wextra -pedantic -std=gnu89` |
| Code style            | **Betty** compliant |
| Header file           | `function_pointers.h` (must use include guards) |
| Standard functions    | Only `malloc`, `free`, and `exit` are allowed |
| Max functions/file    | 5 |
| Output                | Use `_putchar` if needed (no `printf`, etc.) |

---

## 📂 File Structure

```text
.
├── 0-print_name.c         # Uses a function pointer to print a name
├── 1-array_iterator.c     # Applies a function to each array element
├── 2-int_index.c          # Searches for an int using a comparison function
├── 3-op_functions.c       # Arithmetic operations (+, -, *, /, %)
├── 3-get_op_func.c        # Selects the correct operation function
├── 3-calc.h               # Structs and function prototypes for calculator
├── 3-main.c               # Main file to run the calculator
└── function_pointers.h    # Header file with all prototypes

