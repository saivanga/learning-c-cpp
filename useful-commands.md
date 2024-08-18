Useful commands

- To compile a program
  - `g++-12 hello-world.cpp -o hello-world`
- To specify a specific version of C++
  - `g++-12 hello-world.cpp -std=c++17 -o hello-world`

Shell

- `echo $?` To print the exit status of the last run command.
  ```
  ./hello-world
  echo $?
  ```
- `!!` To run the last command once again.

  ```
  g++ hello-world.cpp -o hello-world
  !!
  ```

- `!$` To get the last argument from the last command
  ````
  g++ hello-world.cpp -o hello-world
  ./!$
  ````
