# CIS-5 Introduction to C++ Coursework

This repository contains C++ coursework from an introductory programming course, progressing from basic I/O through functions, loops, conditionals, and algorithms.

## Repository Structure

- **Assignment_1 to Assignment_5/**: Sequential homework assignments, each focusing on specific C++ concepts
- **lecture/**: Algorithm demonstrations (sorting, loops, I/O patterns) and teaching examples
- **lab/**: Basic practice exercises with arrays, loops, and templates
- **Midterm/**: Practice problems for midterm preparation
- **Project_1, Project1/**: More complex programs (e.g., Tic-Tac-Toe, game systems)
- **Ch3, MenuAndTruthTable/**: Supplementary topic exploration

## Naming Conventions

### Textbook-Based Problems
Format: `[Textbook]_[Edition]_Ch[Chapter]_Problem#[Number]_[DescriptiveName].cpp`

Examples:
- `Gaddis_9thEd_Ch3_Prob3_Average.cpp`
- `Savitch_9thEd_Ch2_Prob1_DietCoke.cpp`
- `Gaddis_8thEdition_Ch2_Problem#1_SumO2.cpp`

Descriptions use abbreviations: `SumO2`, `SalesTax`, `LandCalc`, `OceanLvls`, `DietCoke`, etc.

## Code Organization & Patterns

### Standard File Header
```cpp
/* 
    Author: Luis Roldan
    Date: [Date]
    Purpose: [Description]
*/

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

// Global Constants
const float PI = 3.14159f;

// Function Prototypes
void function1();
```

### Solution Flow (Declare → Initialize → Map → Display)
1. **Declare**: Variable declarations at the start
2. **Initialize**: Gather input from user
3. **Map**: Computation logic (transforming input to output)
4. **Display**: Output results to user

### Common Libraries & Patterns
- **I/O**: `<iostream>`, `<iomanip>` (setprecision, fixed for formatting)
- **Math**: `<cmath>` for mathematical functions
- **Random numbers**: `<cstdlib>` + `<ctime>`
- **Strings**: `<string>` for string operations
- **Arrays**: Frequent use of array passing by reference to functions
- **Global constants**: Physics/math conversions (e.g., `GAL = 0.264179f`)

### Function Naming
Functions use abbreviated names: `filAray()`, `prntAry()`, `bubSort()`, `selSrt()`

### Menu Programs
Later assignments (4-5) use menu-driven architecture where a single file contains multiple related problems with user selection.

## Assignment Progression

| Assignment | Focus | Examples |
|---|---|---|
| 1-2 | Basic I/O, arithmetic | Simple calculations, sales tax, totals |
| 3 | Conditionals, comparisons | Sorting names, grade determination |
| 4 | Loops, nested loops | Patterns, payment calculations, functions |
| 5 | Advanced functions, recursion | Factorial, prime checking, Collatz sequence |
| Lecture | Algorithms | Bubble Sort, Selection Sort, loop variations |
| Projects | Systems design | Tic-Tac-Toe grids, game logic |

## Best Practices for This Codebase

1. **Maintain consistent naming**: Use descriptive abbreviations matching the pattern
2. **Follow the header structure**: Include Author, Date, Purpose comment block
3. **Use global constants** for repeated values or physics constants
4. **Pass arrays by reference** to functions for efficiency
5. **Organize code flow** following the Declare → Initialize → Map → Display pattern
6. **Add comments** for variable purposes and major logic sections
7. **Use iomanip for formatting** when displaying floating-point results (setprecision, fixed)

## Common Pitfalls to Avoid

- Array indexing: Remember C++ uses 0-based indexing
- Pass-by-reference: Use `&` for arrays and when you need to modify parameters
- Off-by-one errors: Verify loop conditions carefully
- Floating-point precision: Use `iomanip` formatting for currency/scientific output
