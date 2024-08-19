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
  const int a = 5/9 * (34/.2);
  ```

- To not say `std::` all the time, do this:

  ```
  using namespace std;

  int main(){
      cout << "This is the same thing!" << endl;
  }
  ```

- Use braced variables to make sure that the values are the same as the specified type

  ```
  // results in compiling but removes the extension
  int age = 1.2;

  // results in not compiling
  int age {1.2};

  // results in age being 0
  int age {}
  ```
- `unsigned` makes it so that the number won't accept negative numbers

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
- long
- long long
- short
- float
- long double
- double
- char
- string
- bool
- auto; let the compiler decide

## Number Systems

- Decimal (0 - 9)
    `int a = 255`
- Binary  (0 - 1)
    `int a = 0b11111111;`
- Hexadecimal (0 - 9 - a - f)
    `int a = 0xff;`


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
