# Assignment 8: Implementation of Exception Handling in C++

## About the Program

This C++ program demonstrates **exception handling** using the keywords `try`, `throw` and `catch`. An exception is a run time error (like division by zero) that can stop the program. With exception handling, the error is caught and the program continues normally instead of crashing.

| Keyword | Meaning |
|---|---|
| `try` | The code where an error may occur is written here |
| `throw` | Sends (raises) the exception when an error is found |
| `catch` | Receives the exception and handles it |

## Program Flow

1. **Division Example:** Takes two numbers as input. If the second number is 0, the program throws the message "Division by zero is not allowed", which is caught by `catch (const char *msg)`.
2. **Age Check (Multiple Catch):** Takes the age as input. If age is greater than 100, a text message is thrown. If age is less than 18, the age (an `int`) is thrown. The type of the thrown value decides which catch block runs: `catch (int x)` or `catch (const char *msg)`.
3. **Catch All:** A `double` value (1.5) is thrown and caught by `catch (...)`, which can catch any type of exception.
4. The program prints "Program ended normally" at the end, which shows that it did not crash.

## Files

| File | Description |
|---|---|
| `assi8.cpp` | C++ source code |
| `README.md` | Project description |

## How to Compile and Run

Requirement: a C++ compiler (g++) or Visual Studio Code with a C++ setup.

```bash
g++ assi8.cpp -o assi8
./assi8
```

On Windows PowerShell use `.\assi8` to run.

## Sample Input and Output

**Input:**

```
10 0 15
```

**Output:**

```
Enter two numbers: Enter your age: 
--- 1. Division Example ---
Error: Division by zero is not allowed

--- 2. Age Check (Multiple Catch) ---
Error: age 15 is less than 18, not eligible

--- 3. Catch All ---
Some unknown exception caught

Program ended normally
```

## Test Cases

| Test Case | Input | Expected Result |
|---|---|---|
| 1 | `10 2 25` | Result = 5; Age 25 is eligible; Some unknown exception caught; Program ended normally |
| 2 | `10 0 15` | Division by zero error; age 15 is less than 18, not eligible; Some unknown exception caught; Program ended normally |
| 3 | `8 4 150` | Result = 2; Age is not valid; Some unknown exception caught; Program ended normally |

## Important Points

- The type of the thrown value must match the type in the `catch` block.
- One `try` block can have many `catch` blocks.
- `catch (...)` is written at the end because it catches every type.
- If no matching `catch` block is found, the program stops (`terminate()` is called).

## Learning Outcomes

- Write a `try` block and `throw` an exception when an error occurs.
- Handle exceptions with `catch` blocks and show proper error messages.
- Use multiple `catch` blocks for different data types.
- Use `catch (...)` to catch any exception.

## Repository Details

- **Repository:** https://github.com/YOUR_USERNAME/Assignment8
- **Branch:** main
