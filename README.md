# STL in C

A from-scratch implementation of core **C++ STL-inspired data structures**, written in pure **C**. This project was built to deepen understanding of pointers, memory management, and the internal mechanics that high-level containers like `std::vector` and `std::list` abstract away.

## Overview

C doesn't ship with a standard template library — there's no built-in dynamic array, linked list, or tree container. This project recreates that functionality manually, using raw pointers and manual memory management (`malloc`/`free`), to understand exactly what C++'s STL is doing under the hood.

## Features

- Generic, reusable data structure implementations in C
- Dynamic array (resizable, similar to `std::vector`)
- Singly/doubly linked list (similar to `std::list`)
- Binary tree implementation (similar to `std::set` / `std::map` internals)
- Manual memory management with explicit allocation and deallocation
- No external dependencies — pure C standard library only

## Tech Stack

| Component | Technology |
|---|---|
| Language | C |
| Memory Management | Manual (`malloc` / `realloc` / `free`) |
| Build | gcc  |
| Platform | Linux (tested on Ubuntu / RHEL) |

## Data Structures Implemented

### Dynamic Array
A resizable array that grows automatically as elements are added, mimicking `std::vector`'s amortized O(1) insertion via capacity doubling.

### Linked List
Node-based linear structure with pointer-based traversal, insertion, and deletion — covering the fundamentals behind `std::list`.

### Tree
A binary tree implementation demonstrating hierarchical pointer relationships, recursive traversal, and node insertion/deletion logic.

## Project Structure

```
stl-in-c/
├── dynamic_array.c   # Dynamic array implementation
├── dynamic_array.h
├── linked_list.c      # Linked list implementation
├── linked_list.h
├── tree.c              # Binary tree implementation
├── tree.h
├── main.c               # Demo / test driver
├── Makefile
└── README.md
```


## Prerequisites

- A Linux/Unix-based environment (or WSL on Windows)
- `gcc` installed
- Basic familiarity with terminal usage

## compile:

```bash
gcc -o stl_demo main.c dynamic_array.c linked_list.c tree.c
```

## Usage

Run the compiled binary:

```bash
./stl_demo
```

The demo driver (`main.c`) exercises each data structure — inserting, traversing, and freeing elements — and prints output to the console so you can verify behavior at each step.

## Concepts Demonstrated

- Pointer arithmetic and indirection
- Manual heap allocation and deallocation (avoiding memory leaks)
- Struct-based generic containers
- Amortized growth strategy for dynamic arrays
- Recursive algorithms (tree traversal/insertion)
- Trade-offs between array-based and pointer-based data structures

## Future Improvements

- [ ] Add generic (`void*`-based) containers to support any data type
- [ ] Implement a hash map / hash table
- [ ] Add unit tests for each data structure
- [ ] Add Valgrind-verified leak-free memory benchmarks
- [ ] Balance the tree implementation (AVL / Red-Black)

## Author

**Hari Prasad Dhaker**
[LinkedIn](https://www.linkedin.com/in/hariprasad-dhaker-16a1a0259) · [GitHub](https://github.com/HariDhaker)
