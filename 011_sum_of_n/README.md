# 11. Sum of First N Natural Numbers

This program calculates the sum of the first N natural numbers (1 + 2 + 3 + ... + N) using a simple iterative approach.

## Algorithm

The program uses a straightforward iterative method:

1. Take input N from the user
2. Initialize sum to 0
3. Iterate from 1 to N, adding each number to the sum
4. Display the final result

## Mathematical Formula

The sum of first N natural numbers can also be calculated using the formula:

```xml
Sum = N * (N + 1) / 2
```

However, this program demonstrates the iterative approach for educational purposes.

## Pseudocode

```xml
BEGIN
    DECLARE n AS INTEGER
    DECLARE sum AS INTEGER = 0
    DECLARE i AS INTEGER
    
    PRINT "Enter a number: "
    INPUT n
    
    FOR i = 1 TO n STEP 1
        sum = sum + i
    END FOR
    
    PRINT "Sum of first " + n + " natural numbers is " + sum
END
```

## Flowchart

```mermaid
graph TD;
    A[Start] --> B[Declare variables: n, sum=0, i]
    B --> C[Print "Enter a number:"]
    C --> D[Input n]
    D --> E[Initialize i = 1]
    E --> F{i <= n?}
    F -- Yes --> G[sum = sum + i]
    G --> H[i = i + 1]
    H --> F
    F -- No --> I[Print "Sum of first n natural numbers is sum"]
    I --> J[End]
```

## Example Output

```xml
Enter a number: 5
Sum of first 5 natural numbers is 15
```

**Explanation**: 1 + 2 + 3 + 4 + 5 = 15

## Time Complexity

- **Time Complexity**: O(n) - Linear time as we iterate through n numbers
- **Space Complexity**: O(1) - Constant space as we only use a few variables

## Alternative Approaches

1. **Mathematical Formula**: `sum = n * (n + 1) / 2` - O(1) time complexity
2. **Recursive Approach**: Using recursion to break down the problem
3. **Functional Programming**: Using reduce/fold operations

The iterative approach shown here is the most straightforward and educational for understanding loops and basic programming concepts.
