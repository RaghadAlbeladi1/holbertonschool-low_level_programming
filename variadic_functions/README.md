# 📁 0x10. C - Variadic functions

## 📌 Description

This project covers how to create functions that accept a variable number of arguments using `stdarg.h`. It also explains the use of the `const` keyword.

---

## 🎯 Learning Objectives

- Understand variadic functions
- Use the macros: `va_start`, `va_arg`, `va_end`
- Understand and apply the `const` type qualifier

---

## 📂 Files and Functions

### ✅ 0-sum_them_all.c  
- `int sum_them_all(const unsigned int n, ...);`  
- Returns the sum of all arguments.
- Returns `0` if `n == 0`.

---

### ✅ 1-print_numbers.c  
- `void print_numbers(const char *separator, const unsigned int n, ...);`  
- Prints numbers separated by a string.
- Prints a new line at the end.
- If `separator` is `NULL`, it is not printed.

---

### ✅ 2-print_strings.c  
- `void print_strings(const char *separator, const unsigned int n, ...);`  
- Prints strings separated by a string.
- If a string is `NULL`, prints `(nil)`.
- Prints a new line at the end.

---

### ✅ 3-print_all.c  
- `void print_all(const char * const format, ...);`  
- Prints anything based on the format:
  - `c`: char  
  - `i`: integer  
  - `f`: float  
  - `s`: string (prints `(nil)` if NULL)
- Ignores unknown format characters.
- Prints a new line at the end.

---

## 🧠 Notes

- Used `stdarg.h` for handling variable arguments.
- Applied `const` to protect data from being modified.
- Code follows **Betty** coding style.
