# 🚀 Demo: Lambda Functions with STL in Modern C++

This project demonstrates the power and elegance of **lambda functions** combined with the **Standard Template Library (STL)** in C++ to manipulate collections of data efficiently and cleanly. The program manages a list of products and performs various operations such as printing, sorting, searching, filtering, and accumulating values — all using modern C++ idioms.

---

## 📖 Overview

The program defines a simple `Product` struct with four fields: ID, name, price, and category. It then performs several tasks using STL algorithms and lambda expressions:

- Print the original list of products.
- Sort the products by price in ascending order.
- Find the first product belonging to the `"Monitors"` category.
- Filter products priced above $500 (expensive products).
- Filter products priced below $500 (cheap products).
- Calculate the total value of all products in the `"Peripherals"` category.

The goal is to showcase how lambdas simplify and enhance the readability of common operations on containers.

---

## 🛠️ Requirements

- A C++ compiler with support for **C++11** or newer standards (e.g., GCC, Clang, MSVC).
- Basic knowledge of C++ STL containers and algorithms.
- Familiarity with lambda expressions (anonymous functions).

---

## 💻 How to Build and Run

1. Save the code to a file named `main.cpp`.
2. Compile with your preferred C++ compiler using C++11 or higher standard. For example:

```bash
g++ -std=c++11 -o lambda_demo main.cpp
./lambda_demo
```
