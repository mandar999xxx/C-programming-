# 📘 C Programming - Student Lab Reference

Welcome to the **C-programming-** repository! This is a complete, structured collection of essential C programs designed for lab practice and reference, organized by modules according to standard syllabus specifications.

Each program includes detailed **inline comments, explanation of variables, and algorithmic hints** to help you understand the underlying logic, not just the syntax.

### NOTE 
"If you want to make it more robust, you can wrap the input statements with error checks - like making sure the size isn't too big or that the user actually enters numbers. But it's totally up to you; you can leave it simple or add the checks."

---

## 📂 Repository Organization

All programs are prefixed with their corresponding module number:
- **Module 2**: Operators, Expressions, Conditionals, Loops
- **Module 3**: Arrays, Matrices, and String Manipulation
- **Module 4**: Pointers, Functions, and Dynamic Memory
- **Old / Reference files**: Renamed to `Module_X_Old_...` to preserve previous work.

---

## 🚀 Programs Directory

### 📦 Module 2: Branching, Loops & Operators

| File Name | Description | Key Concepts |
| :--- | :--- | :--- |
| [Module_2_Driving_License.c](file:///m:/C/Module_2_Driving_License.c) | Checks eligibility for driving license (age >= 18) | Conditionals (`if-else`) |
| [Module_2_Count_Digits.c](file:///m:/C/Module_2_Count_Digits.c) | Counts digits in an integer using `do-while` | Loops (`do-while`), digit extraction |
| [Module_2_Simple_Calculator.c](file:///m:/C/Module_2_Simple_Calculator.c) | Interactive operator-driven calculator | Branching (`switch-case`) |
| [Module_2_Factorial_For.c](file:///m:/C/Module_2_Factorial_For.c) | Factorial computation using `for` loop | Iterative calculations |
| [Module_2_Pattern_Asterisks.c](file:///m:/C/Module_2_Pattern_Asterisks.c) | Triangle asterisk printing pattern | Nested loops |
| [Module_2_Arithmetic_Operations.c](file:///m:/C/Module_2_Arithmetic_Operations.c) | Performs `+`, `-`, `*`, `/`, `%` with checks | Input validation, division safety |
| [Module_2_Pattern_Numbers_Desc.c](file:///m:/C/Module_2_Pattern_Numbers_Desc.c) | Descending number triangle pattern | Nested loop indexing |
| [Module_2_Fibonacci.c](file:///m:/C/Module_2_Fibonacci.c) | Fibonacci series generation | Loop state variables |
| [Module_2_Factorial_While.c](file:///m:/C/Module_2_Factorial_While.c) | Factorial calculation using `while` loop | Counting down loops |
| [Module_2_Reverse_Palindrome.c](file:///m:/C/Module_2_Reverse_Palindrome.c) | Reverses integer and checks for palindrome | Modulo arithmetic |
| [Module_2_Area_Perimeter_Rectangle.c](file:///m:/C/Module_2_Area_Perimeter_Rectangle.c) | Calculates dimensions of a rectangle | Floating point precision |
| [Module_2_Leap_Year_If_Else.c](file:///m:/C/Module_2_Leap_Year_If_Else.c) | Leap year checker using ladder | Multi-way conditionals |
| [Module_2_Sum_N_Natural_While.c](file:///m:/C/Module_2_Sum_N_Natural_While.c) | Computes sum of first N integers | Loop accumulation |
| [Module_2_Armstrong_Number.c](file:///m:/C/Module_2_Armstrong_Number.c) | Armstrong number identifier (digit cubes sum) | `do-while` loop |
| [Module_2_Pattern_Numbers_Asc.c](file:///m:/C/Module_2_Pattern_Numbers_Asc.c) | Ascending number triangle pattern | Nested loops |
| [Module_2_Temperature_Conversion.c](file:///m:/C/Module_2_Temperature_Conversion.c) | Celsius to Fahrenheit converter | Floating-point division |

---

### 📊 Module 3: Arrays and Strings

| File Name | Description | Key Concepts |
| :--- | :--- | :--- |
| [Module_3_Add_1D_Arrays.c](file:///m:/C/Module_3_Add_1D_Arrays.c) | Element-wise sum of two arrays | 1D Array indexing |
| [Module_3_Sum_Array.c](file:///m:/C/Module_3_Sum_Array.c) | Sum of elements in a 1D array | Array traversal |
| [Module_3_Reverse_Array.c](file:///m:/C/Module_3_Reverse_Array.c) | Reads and prints array in reverse | Backward loops |
| [Module_3_Linear_Search.c](file:///m:/C/Module_3_Linear_Search.c) | Key search in sorted or unsorted array | Sequential search |
| [Module_3_Matrix_Addition.c](file:///m:/C/Module_3_Matrix_Addition.c) | Element-wise sum of two 2D matrices | 2D Arrays, double loops |
| [Module_3_Matrix_Transpose.c](file:///m:/C/Module_3_Matrix_Transpose.c) | Converts rows to columns in 2D array | Matrix coordinates |
| [Module_3_String_Compare_Strcmp.c](file:///m:/C/Module_3_String_Compare_Strcmp.c) | Compares two strings using library `strcmp` | `<string.h>` library |
| [Module_3_String_Concatenate_Manual.c](file:///m:/C/Module_3_String_Concatenate_Manual.c) | Concatenates strings manually character by character | Traverse and copy, null-termination |
| [Module_3_String_Compare_Manual.c](file:///m:/C/Module_3_String_Compare_Manual.c) | Compares strings without using library functions | Parallel loop traversal |
| [Module_3_String_Sort_Asc.c](file:///m:/C/Module_3_String_Sort_Asc.c) | Alphabetically sorts N names alphabetically (A-Z) | Bubble Sort, 2D char arrays |
| [Module_3_String_Sort_Desc.c](file:///m:/C/Module_3_String_Sort_Desc.c) | Alphabetically sorts N names in reverse (Z-A) | Bubble Sort, condition swap |
| [Module_3_String_Palindrome.c](file:///m:/C/Module_3_String_Palindrome.c) | Checks string palindrome by reversing it | String reverse, `strcmp` |
| [Module_3_Binary_Search.c](file:///m:/C/Module_3_Binary_Search.c) | Binary search on sorted array | Divides interval by 2 |
| [Module_3_String_Menu_Switch.c](file:///m:/C/Module_3_String_Menu_Switch.c) | Menu-driven helper: Length, Compare, Copy, Concatenate | Switch-case, string functions |
| [Module_3_String_Length_Strlen.c](file:///m:/C/Module_3_String_Length_Strlen.c) | Evaluates string length using standard function | `strlen()` function |

---

### ⚙️ Module 4: Functions, Pointers, and Dynamic Memory

| File Name | Description | Key Concepts |
| :--- | :--- | :--- |
| [Module_4_Pointer_Arithmetic.c](file:///m:/C/Module_4_Pointer_Arithmetic.c) | Addition and subtraction of integers using pointers | Pointer declaration, indirection `*` |
| [Module_4_Swap_Call_By_Reference.c](file:///m:/C/Module_4_Swap_Call_By_Reference.c) | Swaps integers via pointer reference swapping | Call by reference, scope modifier |
| [Module_4_Dynamic_Memory_SD.c](file:///m:/C/Module_4_Dynamic_Memory_SD.c) | Calculates sum, mean, standard deviation on heap | Dynamic allocation `calloc()`, `free()` |
| [Module_4_Largest_Array_Function.c](file:///m:/C/Module_4_Largest_Array_Function.c) | Finds maximum value in array by passing to function | Parameter passing, array references |
| [Module_4_Bubble_Sort_Function.c](file:///m:/C/Module_4_Bubble_Sort_Function.c) | In-place Bubble Sort using custom function | Modular code architecture |
| [Module_4_Largest_Matrix_Function.c](file:///m:/C/Module_4_Largest_Matrix_Function.c) | Finds matrix maximum value using function | Passing 2D arrays |
| [Module_4_Rectangle_Perimeter_Function.c](file:///m:/C/Module_4_Rectangle_Perimeter_Function.c) | Calculates perimeter of a rectangle using function | Functional abstractions |

---

## 🛠️ How to Compile & Run

### Step 1: Compilation
Use a C compiler such as GCC to compile the files. For example, to compile `Module_2_Driving_License.c`:
```bash
gcc Module_2_Driving_License.c -o driving_license
```

### Step 2: Running the Executable
On Windows:
```cmd
driving_license.exe
```
On Linux/macOS:
```bash
./driving_license
```

---
*Created for reference and learning. Feel free to use the comments as a guide for your lab records!*
