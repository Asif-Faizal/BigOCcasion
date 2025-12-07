# Square Pattern — Outer vs Inner Loops

- Outer loop controls lines: `for (int i = 0; i < n; i++)`  // rows 0 → n-1
- Inner loop controls columns: `for (int j = 0; j < n; j++)`  // n items per row

This grid structure yields `n × n` cells. The content printed per cell defines the pattern.

## Patterns in `square_pattern.cpp`

- Star square
  - Outer: `for (int i = 0; i < n; i++)`
  - Inner: `for (int j = 0; j < n; j++)` then `cout << "* ";`
  - Output (n=3):
    ```
    * * *
    * * *
    * * *
    ```

- Alphabet grid (A.. up to `n` columns, reset each row)
  - Outer: `for (int i = 0; i < n; i++)`
  - Per-row init: `char ch = 'A';`
  - Inner: `for (int j = 0; j < n; j++)` then `cout << ch; ch++;`
  - Output (n=4):
    ```
    A B C D
    A B C D
    A B C D
    A B C D
    ```