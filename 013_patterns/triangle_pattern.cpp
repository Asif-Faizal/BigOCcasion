#include <iostream>
using namespace std;

/*
Triangle patterns — loop construction guide

General: rows are controlled by an outer loop `for (int i = 0; i < n; i++)`
- `i` is the row index, counting 0 → n-1
- Inner loop size depends on the row: usually `i + 1` items in row i

Example (numbers):
1
12
123
1234
Outer: `for (int i = 0; i < n; i++)`  // rows
Inner: `for (int j = 0; j < i + 1; j++)`  // i+1 items
Printed value: `j + 1`, so each row shows 1..i+1
*/

// right angle triangle
// *
// **
// ***
// ****
/*
Pattern: Right-angle triangle using `*`
Outer loop: `for (int i = 0; i < n; i++)` — iterates rows 0..n-1
Inner loop: `for (int j = 0; j <= i; j++)` — prints `i+1` stars per row
*/
// int main (){
//     int n;
//     cout << "Enter size of triangle: ";
//     cin >> n;
//     for (int i = 0;i< n; i++){
//         for (int j = 0; j <= i; j++){
//             cout << "* ";
//         }
//         cout << endl;
//     }
// }

/*
Pattern: Right-angle triangle using letters per row starting from 'A'
Outer loop: `for (int i = 0; i < n; i++)`
Per-row init: `char ch = 'A';` resets at each row
Inner loop: `for (int j = 0; j <= i; j++)` — prints `A B C ...` until length `i+1`
*/
// int main (){
//     int n;
//     cout << "Enter size of triangle: ";
//     cin >> n;
//     for (int i = 0;i< n; i++){
//     char ch = 'A';
//         for (int j = 0; j <= i; j++){
//             cout << ch << " ";
//             ch++;
//         }
//         cout << endl;
//     }
// }

/*
Pattern: Right-angle triangle using increasing numbers within each row
Outer loop: `for (int i = 0; i < n; i++)`
Per-row init: `int num = 1;` resets at each row
Inner loop: `for (int j = 0; j <= i; j++)` — prints `1 2 3 ...` until length `i+1`
*/
// int main (){
//     int n;
//     cout << "Enter size of triangle: ";
//     cin >> n;
//     for (int i = 0;i< n; i++){
//     int num = 1;
//         for (int j = 0; j <= i; j++){
//             cout << num << " ";
//             num++;
//         }
//         cout << endl;
//     }
// }

/*
Pattern: Right-angle triangle with rows counting backward from `i+1` down to `1`
Outer loop: `for (int i = 0; i < n; i++)`
Inner loop: `for (int j = i+1; j > 0; j--)` — prints `i+1 i ... 1`
*/
// int main (){
//     int n;
//     cout << "Enter size of triangle: "; // backwards => i+1 to the 0
//     cin >> n;
//     for (int i = 0;i< n; i++){
//         for (int j = i+1; j >0; j--){
//             cout << j << " ";
//         }
//         cout << endl;
//     }
// }

// FLOYD'S TRIANGLE
/*
Pattern: Floyd's triangle with increasing numbers across the entire triangle
Outer loop: `for (int i = 0; i < n; i++)`
State: `int num = 1;` persists across all rows
Inner loop: `for (int j = i+1; j > 0; j--)` — prints `i+1` items, each `num++`
*/
// int main (){
//     int n;
//     cout << "Enter size of triangle: ";
//     cin >> n;
//     int num = 1;
//     for (int i = 0;i< n; i++){
//         for (int j = i+1; j >0; j--){
//             cout << num << " ";
//             num++;
//         }
//         cout << endl;
//     }
// }
/*
Pattern: Floyd's triangle with letters across the entire triangle
Outer loop: `for (int i = 0; i < n; i++)`
State: `char ch = 'A';` persists across all rows
Inner loop: `for (int j = i+1; j > 0; j--)` — prints `i+1` letters, each `ch++`
*/
// int main (){
//     int n;
//     cout << "Enter size of triangle: ";
//     cin >> n;
//     char ch = 'A';
//     for (int i = 0;i< n; i++){
//         for (int j = i+1; j >0; j--){
//             cout << ch << " ";
//             ch++;
//         }
//         cout << endl;
//     }
// }