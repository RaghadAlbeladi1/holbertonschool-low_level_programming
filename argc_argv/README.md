# 💻 argc_argv - Command Line Arguments in C

[![C](https://img.shields.io/badge/Language-C-blue)](https://en.wikipedia.org/wiki/C_(programming_language)) 
[![Style](https://img.shields.io/badge/Code%20Style-Betty-brightgreen)](https://github.com/holbertonschool/Betty)
[![Ubuntu](https://img.shields.io/badge/Tested%20on-Ubuntu%2020.04-orange)](https://releases.ubuntu.com/20.04/)

## 📚 Overview

This project explores how to use command-line arguments in C using `argc` and `argv`.

### 📘 What I learned:
- Two forms of `main()`:
  - `int main(void)`
  - `int main(int argc, char *argv[])`
- Handling unused parameters with:
  - `(void)` or `__attribute__((unused))`
- Basics of input validation and conversions

---

## 🧪 Tasks

| File              | Description                                 |
|-------------------|---------------------------------------------|
| `0-whatsmyname.c` | Print the program name                      |
| `1-args.c`        | Print number of arguments                   |
| `2-args.c`        | Print all arguments                         |
| `3-mul.c`         | Multiply two numbers                        |
| `4-add.c`         | Add positive numbers                        |

---

## 🛠️ Compilation

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 file.c -o output
