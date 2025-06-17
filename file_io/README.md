#  C - File I/O

![C Project](https://img.shields.io/badge/C-File%20I%2FO-blue.svg)

This project focuses on performing file operations in C using **system calls only**: `open`, `read`, `write`, and `close`. The goal is to understand how low-level file manipulation works in Unix-based systems.

---

## Tasks Overview

| #   | File Name                  | Function Name           | Description                                                                 |
|-----|----------------------------|--------------------------|-----------------------------------------------------------------------------|
| 0   | `0-read_textfile.c`        | `read_textfile`          | Reads a specified number of characters from a file and prints them to STDOUT. |
| 1   | `1-create_file.c`          | `create_file`            | Creates a file and writes text to it. Overwrites if the file already exists. |
| 2   | `2-append_text_to_file.c`  | `append_text_to_file`    | Appends text at the end of an existing file without modifying its content. |
| 3   | `3-cp.c`                   | *main program*           | Copies the content of one file to another using a buffer (1024 bytes).     |

---

##  Key Concepts

- `open()`: Open or create a file.
- `read()`: Read from a file descriptor.
- `write()`: Write to a file descriptor.
- `close()`: Close the file descriptor.
- File access flags: `O_RDONLY`, `O_WRONLY`, `O_RDWR`, `O_CREAT`, `O_APPEND`, `O_TRUNC`.
- File descriptor constants: `STDIN_FILENO`, `STDOUT_FILENO`, `STDERR_FILENO`.

---

## ðPermissions

- Files are created with `rw-------` (0600) permissions.
- No use of standard library functions like `printf`; only system calls are allowed.
