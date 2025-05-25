# 📚 0x0D. C - Structures, typedef

![C Language](https://img.shields.io/badge/C-Programming-blue)
![Holberton](https://img.shields.io/badge/Holberton-Project-red)
![Betty Style](https://img.shields.io/badge/Code%20Style-Betty-ff69b4.svg)

---

## 🧠 Learning Objectives

At the end of this project, you will be able to explain:

- ✅ What are structures and why use them
- ✅ How to define, initialize, and use structs
- ✅ What is `typedef` and how to use it effectively
- ✅ How to handle `NULL` safely in structures
- ✅ How to allocate and free memory for structs

---

## 🛠️ Project Structure

| File            | Description                                                                 |
|-----------------|-----------------------------------------------------------------------------|
| `dog.h`         | Defines `struct dog` and its alias using `typedef`                         |
| `1-init_dog.c`  | Function to initialize a variable of type `struct dog`                     |
| `2-print_dog.c` | Function to safely print the fields of a `struct dog`                      |
| `4-new_dog.c`   | Function to dynamically create a new dog and return a pointer to it        |
| `5-free_dog.c`  | Function to free memory allocated for a `dog_t` created dynamically        |

---

## 🐾 Struct Definition Example

```c
/**
 * struct dog - Struct representing a dog
 * @name: Dog's name
 * @age: Dog's age
 * @owner: Owner's name
 */
struct dog
{
    char *name;
    float age;
    char *owner;
};

typedef struct dog dog_t;
