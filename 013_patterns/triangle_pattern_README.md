# Triangle Pattern — Outer vs Inner Loops

- Outer loop controls lines: `for (int i = 0; i < n; i++)` (rows 0 → n-1)
- Inner loop controls items in a line; its bound depends on row `i`.

Example (numbers):

```
1
12
123
1234
```

- Outer: `for (int i = 0; i < n; i++)`  // lines
- Inner: `for (int j = 0; j < i + 1; j++)`  // i+1 items in row i
- Printed value: `j + 1` so each row shows `1..i+1`.

## Patterns in `triangle_pattern.cpp`

- Right-angle triangle using `*`
  - Outer: `for (int i = 0; i < n; i++)`
  - Inner: `for (int j = 0; j <= i; j++)`
  - Output:
    ```
    *
    **
    ***
    ****
    ```

- Letters per row starting from `A` (reset each row)
  - Outer: `for (int i = 0; i < n; i++)`
  - Per-row init: `char ch = 'A';`
  - Inner: `for (int j = 0; j <= i; j++)` then `ch++`
  - Output (n=4): `A`, `A B`, `A B C`, `A B C D`

- Numbers per row starting at `1` (reset each row)
  - Outer: `for (int i = 0; i < n; i++)`
  - Per-row init: `int num = 1;`
  - Inner: `for (int j = 0; j <= i; j++)` then `num++`
  - Output (n=4): `1`, `1 2`, `1 2 3`, `1 2 3 4`

- Backward counting per row
  - Outer: `for (int i = 0; i < n; i++)`
  - Inner: `for (int j = i+1; j > 0; j--)`
  - Output (n=4): `1`, `2 1`, `3 2 1`, `4 3 2 1`

- Floyd's triangle (numbers across the whole triangle)
  - Outer: `for (int i = 0; i < n; i++)`
  - State: `int num = 1;` persists across rows
  - Inner: `for (int j = i+1; j > 0; j--)` then `num++`
  - Output (n=4): `1`, `2 3`, `4 5 6`, `7 8 9 10`

- Floyd's triangle (letters across the whole triangle)
  - Outer: `for (int i = 0; i < n; i++)`
  - State: `char ch = 'A';` persists across rows
  - Inner: `for (int j = i+1; j > 0; j--)` then `ch++`
  - Output (n=3): `A`, `B C`, `D E F`