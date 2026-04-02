# 📘 C Programming - Student Lab Reference

Welcome to the **C-programming-** repository! This is a collection of essential C programs designed for lab practice and reference. Each program includes detailed **comments and hints** to help you understand the underlying logic, not just the syntax.

---

## 🚀 Programs Included

### 1. 📅 Leap Year Checker
* **Logic:** Uses nested conditions and logical operators (`&&`, `||`) to determine if a year is a leap year.
* **Key Concept:** Understanding the Modulo (`%`) operator.

### 2. 💰 Currency Calculator
* **Logic:** A simple arithmetic program that calculates the total value of different denominations of rupee coins.
* **Key Concept:** Variable initialization and basic mathematical expressions.

### 3. 📐 Quadratic Equation Solver
* **Logic:** Uses the Discriminant ($D = b^2 - 4ac$) to find real or complex roots.
* **Key Concept:** Using the `math.h` library and handling complex numbers ($i$).

---

## 💡 Student Hints & Tips

> [!TIP]
> **Double vs. Float:** > Most programs here use `double` for higher precision. If you decide to use `float`, remember to change your format specifiers from `%lf` to `%f`.

* **Header Files:** Always include `<stdio.h>` for input/output and `<math.h>` if you are doing square roots or powers.
* **Variable Naming:** Avoid using hyphens (like `num-1`) in variable names; C will think you are trying to subtract. Use underscores (`num_1`) instead.
* **The '&' Symbol:** Don't forget the `&` in `scanf`! It tells C the memory address where the data should be stored.

---

## 🛠️ How to Run
1.  Clone the repo: 
    ```bash
    git clone [https://github.com/mandar999xxx/C-programming-.git](https://github.com/mandar999xxx/C-programming-.git)
    ```
2.  Navigate to the folder and compile using GCC:
    ```bash
    gcc filename.c -o output
    ```
3.  Run the executable:
    ```bash
    ./output
    ```

---
*Created for reference and learning. Feel free to use the comments as a guide for your lab records!*
