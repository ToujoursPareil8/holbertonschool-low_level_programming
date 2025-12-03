Bien sûr ! Voici un exemple de **README.md** pour ton projet *Singly Linked Lists* adapté aux standards Holberton et décrivant clairement le projet :

---

# Singly Linked Lists in C

## Description

This project focuses on creating and manipulating **singly linked lists** in C. A singly linked list is a data structure consisting of nodes, where each node contains a string, its length, and a pointer to the next node.

You will implement functions to **print**, **count**, **add**, and **free** nodes, practicing dynamic memory allocation and pointer manipulation.

---

## Data Structure

```c
/**
 * struct list_s - singly linked list node
 * @str: string (malloc'ed)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;
```

---

## Files

| File               | Description                                                            |
| ------------------ | ---------------------------------------------------------------------- |
| `0-print_list.c`   | Prints all elements of a list_t list.                                  |
| `1-list_len.c`     | Returns the number of elements in a list_t list.                       |
| `2-add_node.c`     | Adds a new node at the beginning of a list_t list.                     |
| `3-add_node_end.c` | Adds a new node at the end of a list_t list.                           |
| `4-free_list.c`    | Frees all nodes in a list_t list.                                      |
| `lists.h`          | Header file containing the `list_t` structure and function prototypes. |

---

## Compilation

All files will be compiled on **Ubuntu 20.04 LTS** using `gcc` with the following flags:

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o executable
```

**Note:** `_putchar` is provided separately if needed.

---

## Usage

Example for adding and printing nodes:

```c
#include "lists.h"
#include <stdio.h>

int main(void)
{
    list_t *head;

    head = NULL;
    add_node(&head, "Hello");
    add_node(&head, "World");
    print_list(head);

    return 0;
}
```

**Expected Output:**

```
[5] World
[5] Hello
```

---

## Functions

* **print_list**: Prints all elements of a `list_t` list.
* **list_len**: Returns the number of nodes in the list.
* **add_node**: Adds a new node at the beginning of the list.
* **add_node_end**: Adds a new node at the end of the list.
* **free_list**: Frees all nodes in the list.

---

## Requirements

* Allowed editors: `vi`, `vim`, `emacs`
* No global variables
* No more than 5 functions per file
* Only allowed C standard library functions: `malloc`, `free`, `exit`
* `_putchar` is allowed
* Code must respect **Betty style**

This an AI test

