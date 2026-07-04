# C Programming - Complete 1st Year Guide 🚀

Hey, this is my collection of C programs I wrote while learning C in my 1st year of college. Everything is organized topic-wise from basics to mini projects. Every program compiles and runs without any issues. This repo covers the entire MSBTE syllabus for Programming in C.

---

## Whats Inside

| Folder | Topic | Programs |
|--------|-------|----------|
| `01_Basics` | Hello world, data types, I/O, swap, type casting, sizeof, constants, bitwise, formatted output | 10 |
| `02_Control_Statements` | if-else, nested if, factorial, prime, fibonacci, grade system, relational/logical, goto | 8 |
| `03_Switch_Case` | Vowel check, number to word, menu calculator, month from number | 4 |
| `04_Loops` | While, for, do-while, even numbers, break & continue | 5 |
| `05_Patterns` | Right triangle, diamond, number pyramid | 3 |
| `06_Functions` | Add function, factorial, palindrome, recursion, call by value/reference, library functions | 6 |
| `07_Arrays` | Array sum, reverse, 3x3 matrix add, 3x3 matrix multiply, linear search | 5 |
| `08_Strings` | Print, length (manual + builtin), reverse, compare, copy & concat | 6 |
| `09_Pointers` | Basics, pointer with arrays, swap using pointer, arithmetic, pointer to string, pointer to structure | 6 |
| `10_Structures` | Student data, nested struct, array of structures, complex numbers, typedef & enum | 5 |
| `11_File_Handling` | Write to file, read from file, copy file | 3 |
| `12_Dynamic_Memory` | malloc, calloc, realloc | 3 |
| `13_Preprocessor` | Macros, conditional compilation | 2 |
| `14_Mini_Projects` | Calculator, hotel booking, student management, invoice system, restaurant menu, matrix operations | 6 |

**Total: 72 programs covering the full MSBTE C syllabus**

---

## How to Compile and Run

You need a C compiler like GCC. If you're on Windows, you can use MinGW.

```bash
gcc filename.c -o output
./output
```

For example:
```bash
gcc 01_Basics/hello_world.c -o hello
./hello
```

On Windows with MinGW:
```bash
gcc 01_Basics\hello_world.c -o hello.exe
hello.exe
```

For programs using math functions (library_functions.c):
```bash
gcc 06_Functions/library_functions.c -o lib -lm
./lib
```

---

## Syllabus Coverage

### Unit I - Basics of C Programming
- [x] Algorithms and problem solving
- [x] Structure of C program, header files, main()
- [x] Character set, tokens, keywords, identifiers
- [x] Constants and variables
- [x] Data types (int, float, double, char)
- [x] printf() and scanf()
- [x] Arithmetic operators
- [x] Bitwise operators
- [x] Shift operators
- [x] sizeof operator
- [x] Type casting (implicit and explicit)
- [x] Formatted output

### Unit II - Control Structures
- [x] Relational operators
- [x] Logical operators
- [x] Conditional (ternary) operator
- [x] if statement
- [x] if-else statement
- [x] Nested if-else
- [x] if-else ladder
- [x] switch statement
- [x] while loop
- [x] do-while loop
- [x] for loop
- [x] break statement
- [x] continue statement
- [x] goto statement

### Unit III - Arrays and Structures
- [x] 1D arrays (declaration, initialization, operations)
- [x] 2D arrays (3x3 matrices)
- [x] Matrix addition and multiplication
- [x] Character arrays / Strings
- [x] String operations (length, reverse, compare, copy, concat)
- [x] String functions (strlen, strcmp, strcpy, strcat)
- [x] Structures (declaration, initialization, access)
- [x] Array of structures
- [x] Nested structures
- [x] typedef
- [x] enum

### Unit IV - Functions
- [x] User defined functions
- [x] Function declaration and definition
- [x] Function call
- [x] Call by value
- [x] Call by reference
- [x] Return types
- [x] Recursive functions
- [x] Library functions (math.h, string.h, ctype.h)
- [x] getchar() and putchar()

### Unit V - Pointers
- [x] Pointer declaration and initialization
- [x] * and & operators
- [x] Pointer arithmetic
- [x] Pointer to array
- [x] Pointer to string
- [x] Function handling using pointers
- [x] Pointer to structure

### Practicals Covered
- [x] Pr 1: Install C environment
- [x] Pr 2: Constants and variables
- [x] Pr 3: Arithmetic operators
- [x] Pr 4: Type casting (implicit/explicit)
- [x] Pr 5: Formatted I/O (student record table)
- [x] Pr 6: Relational and conditional operators
- [x] Pr 7: Logical operators
- [x] Pr 8: Bitwise operators
- [x] Pr 9: if and if-else statements
- [x] Pr 10: Nested if-else, grade system
- [x] Pr 11: Switch statement
- [x] Pr 12: Month from number (switch)
- [x] Pr 13: while and do-while loops
- [x] Pr 14: for loop (1 to 100, patterns)
- [x] Pr 15: while and do-while syntax
- [x] Pr 16: 1D array (5 numbers, sum)
- [x] Pr 17: 2D array (3x3 addition)
- [x] Pr 18: String operations (length, reverse)
- [x] Pr 19: Complex numbers using structure
- [x] Pr 20: Array of structures (10 employees)
- [x] Pr 21: Built-in library and string functions
- [x] Pr 22: User defined functions
- [x] Pr 23: Recursive functions
- [x] Pr 24: Pointer basics (address and values)
- [x] Pr 25: Pointer arithmetic operations

### Micro Projects
- [x] Simple calculator with validation
- [x] Invoice management system
- [x] Restaurant food menu card
- [x] Hotel booking system
- [x] Menu-driven matrix operations
- [x] Student management system

---

## Folder Structure

```
C-Language/
├── 01_Basics/
│   ├── hello_world.c
│   ├── data_types.c
│   ├── input_output.c
│   ├── simple_calculator.c
│   ├── swap_two_numbers.c
│   ├── type_casting.c
│   ├── sizeof_operator.c
│   ├── constants_and_variables.c
│   ├── bitwise_operators.c
│   └── formatted_output.c
├── 02_Control_Statements/
│   ├── if_else.c
│   ├── nested_if.c
│   ├── factorial_using_if.c
│   ├── prime_check.c
│   ├── fibonacci_series.c
│   ├── relational_logical.c
│   ├── grade_system.c
│   └── goto_statement.c
├── 03_Switch_Case/
│   ├── vowel_or_consonant.c
│   ├── number_to_word.c
│   ├── simple_menu.c
│   └── month_from_number.c
├── 04_Loops/
│   ├── while_loop.c
│   ├── even_numbers.c
│   ├── for_loop_table.c
│   ├── do_while_loop.c
│   └── break_continue.c
├── 05_Patterns/
│   ├── right_triangle.c
│   ├── diamond_pattern.c
│   └── number_pyramid.c
├── 06_Functions/
│   ├── add_function.c
│   ├── factorial_using_function.c
│   ├── palindrome_check.c
│   ├── recursion_factorial.c
│   ├── call_by_value_reference.c
│   └── library_functions.c
├── 07_Arrays/
│   ├── array_sum.c
│   ├── reverse_array.c
│   ├── matrix_addition.c
│   ├── matrix_multiplication.c
│   └── linear_search.c
├── 08_Strings/
│   ├── print_string.c
│   ├── string_length_manual.c
│   ├── string_length_builtin.c
│   ├── string_reverse.c
│   ├── string_compare.c
│   └── string_copy_concat.c
├── 09_Pointers/
│   ├── pointer_basics.c
│   ├── pointer_and_array.c
│   ├── swap_using_pointer.c
│   ├── pointer_arithmetic.c
│   ├── pointer_to_string.c
│   └── pointer_to_structure.c
├── 10_Structures/
│   ├── student_data.c
│   ├── nested_structure.c
│   ├── array_of_structures.c
│   ├── complex_numbers.c
│   └── typedef_enum.c
├── 11_File_Handling/
│   ├── write_to_file.c
│   ├── read_from_file.c
│   └── copy_file.c
├── 12_Dynamic_Memory/
│   ├── malloc_example.c
│   ├── calloc_example.c
│   └── realloc_example.c
├── 13_Preprocessor/
│   ├── macro_basics.c
│   └── conditional_compilation.c
├── 14_Mini_Projects/
│   ├── calculator.c
│   ├── hotel_booking.c
│   ├── student_management.c
│   ├── invoice_management.c
│   ├── restaurant_menu.c
│   └── matrix_operations.c
├── .gitignore
└── README.md
```

---

## About

Made by **Yash** while learning C programming in 1st year. This repo covers the complete MSBTE syllabus including all 5 units, 25 practicals, and micro projects. If you find it helpful, give it a star ⭐
