# Inverted Triangle — Outer vs Inner Loops

An inverted right triangle uses two inner loops per row:

- Outer (rows): `for (int i = 0; i < n; i++)`  // row index 0 → n-1
- Inner #1 (leading spaces): `for (int j = 0; j < i; j++)`  // prints `i` spaces
- Inner #2 (content): `for (int j = 0; j < n - i; j++)`  // prints `n - i` items

## Patterns in `inverted_triangle.cpp`

- Star inverted triangle
  - Inner #2 body: `cout << "*";`
  - Output (n=4):
    ```
    ****
     ***
      **
       *
    ```

- Number inverted triangle (row number repeated)
  - Inner #2 body: `cout << (i+1);`
  - Output (n=4):
    ```
    1111
     222
      33
       4
    ```

Loop intuition: the first inner loop indents each row, the second inner loop reduces the count by one per row (`n - i`).