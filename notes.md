## iostream

- istream object: cin

- ostream objects: cout, cerr, clog

## Miscellaneous

- Around 95 keywords in c++
- `//` Single Line Comment
- `/* */` Multi Line Comment
- `/` Division by integer returns integer, not float

  ```
  const int x = 10;
  const int y = 3;
  const int z = x / y;

  // Prints 3
  std::cout << z << std::endl;

  ```

  - To fix this,

    ```
    double int x = 10;
    const int y = 3;
    double int z = x / y;

    // Prints 3.33333
    std::cout << z << std::endl;

    ```

- `++` Increment / `--` Decrement order matters
  ```
  const int x = 1;
  const int y = x++; // x = 2, y = 1;
  const int z = ++x; // x = 2, z = 2;
  ```
- C++ follows PEMDAS (sort of)

  ```
  // This is 94. Parentheses, Multiply
  const int a = (34/.2) * 5/9;

  // This is 0. Parentheses, Divide (0 because division with integer returns integer value), Multiply
  const int a = 5/9 * (34/.2)
  ```

## Operators

- `=` - Assignment
- `++` - Increment
- `--` - Decrement
- `<<` - Left shift
- `>>` - Right shift
- `::` - Scope Resolution
- `+` - Addition
- `-` - Subtraction
- `*` - Multiplication
- `/` - Division
- `%` - Modulus

## Hierarchy

- Variables
- Statement
- Objects
- Function
- Classes
- Namespace

## Data Types

- int
- double
- char
- string
- bool

## Variables

- To switch two variables use a third variable:

  ```
  int a = 1;
  int b = 2;
  int c;

  // a is 1, b is 2, c is nothing

  ```

- `game_size` Snake Case
- `GameSize` Pascal Case
- `gameSize` Camel Case
- `iGameSize` Hungarian Case
