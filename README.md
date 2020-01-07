# C++ cookbook

## C++ practice setup on Linux

- IDE: visual studio code with c++ extention (intellisense)
- compilation with debugging:
  - first compile the code with debugging enabled
      ```bash
      cd <example folder>
      g++ -g <main cpp file>
      ```
      the above creates the executable ```a.out``` file.
  - in visual studio code's debug panel, create a gdb debug configuration that launches ```a.out```. Set breakpoints as needed and launch.

  This [help video](https://www.youtube.com/watch?v=X2tM21nmzfk) shows the steps in detail.
