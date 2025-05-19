# 0x0A. C - malloc, free

## 📌 Project Overview
This project introduces dynamic memory allocation in C using `malloc` and `free`. It emphasizes proper memory management and reinforces how to manipulate memory safely without memory leaks or segmentation faults.

---

## 📚 General Concepts

### 🔄 Automatic vs. Dynamic Allocation
- **Automatic Allocation**: Memory allocated automatically on the stack. Lifetime ends when the function returns.
- **Dynamic Allocation**: Memory manually allocated on the heap using `malloc`. You control its lifetime, and must manually `free` it.

### 📦 malloc & 🧹 free
- **`malloc(size_t size)`**: Allocates `size` bytes of memory on the heap. Returns a pointer to the memory or `NULL` if it fails.
- **`free(ptr)`**: Frees memory previously allocated with `malloc`.

### 💡 When and Why Use malloc
- Use `malloc` when:
  - The required size is only known at runtime.
  - You need data to persist outside the scope of a function.
  - You're working with arrays, strings, or structures whose sizes are dynamic.

### 🛠️ How to Check Memory Leaks
Use **Valgrind**:
```bash
valgrind ./your_program
