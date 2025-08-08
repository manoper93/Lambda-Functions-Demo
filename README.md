# 🚀 Demo: Lambda Functions with STL in Modern C++17

This project demonstrates the power and expressiveness of **lambda functions** combined with the **Standard Template Library (STL)** in **C++17** to manipulate collections of data efficiently and clearly. The program manages a list of products and performs common operations such as printing, sorting, searching, filtering, and accumulating values using modern C++17 features.

---

## 📖 Overview

The program defines a simple `Product` struct containing an ID, name, price, and category. It then demonstrates several operations using STL algorithms and lambda expressions enhanced by C++17 capabilities:

- Print the original list of products.
- Sort products by price in ascending order.
- Find the first product in the `"Monitors"` category.
- Filter products priced above $500 (expensive products).
- Filter products priced below $500 (cheap products).
- Calculate the total value of all products in the `"Peripherals"` category.

---

## 🆕 C++17 Enhancements Used

- **Structured bindings** for cleaner unpacking (if desired).
- **`if` and `switch` with initializer** (used optionally in searches).
- More concise lambda captures with `auto` parameters (generic lambdas).
- Improved `std::string_view` (not mandatory here but available).

This example mainly focuses on idiomatic STL + lambda usage but can easily integrate C++17 features for cleaner code.

---

## 🛠️ Requirements

- A C++17 compliant compiler (e.g., GCC 7+, Clang 5+, MSVC 2017+).
- Basic knowledge of C++ STL and lambda expressions.

---

## 💻 Build & Run

Save the code in `main.cpp`, then compile with C++17:

```bash
g++ -std=c++17 -o lambda_demo main.cpp
./lambda_demo
```

---

## 🖼️ OUTPUT

<div align="center">
<img width="507" height="530" alt="image" src="https://github.com/user-attachments/assets/e5496531-a58a-4b54-8fe7-7216d6cde286" />
</div>
