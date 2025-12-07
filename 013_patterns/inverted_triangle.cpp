#include <iostream>
using namespace std;

/*
Inverted right triangle — loop construction guide

General shape (stars):
****
 ***
  **
   *

Loop structure per row `i` (0..n-1):
- Outer (rows): `for (int i = 0; i < n; i++)`
- Inner #1 (leading spaces): `for (int j = 0; j < i; j++)` — prints `i` spaces
- Inner #2 (content): `for (int j = 0; j < n - i; j++)` — prints `n - i` items

Variants below show different content for Inner #2.
*/
// ****
//  ***
//   **
//    *
// int main(){
//     // Pattern: inverted triangle using `*`
//     // Outer: rows 0..n-1
//     // Inner #1: spaces `j < i`
//     // Inner #2: stars `j < n - i`
//     int n;
//     cout << "Enter size of triangle: ";
//     cin >> n;
//     for (int i = 0;i< n; i++){
//         for (int j = 0; j<i;j++){
//             cout << " ";
//         }
//         for (int j = 0; j < n-i; j++){
//             cout << "*";
//         }
//         cout << endl;
//     }
// }

// 1111
//  222
//   33
//    4
int main(){
    // Pattern: inverted triangle with row number repeated
    // Outer: rows `for (int i = 0; i < n; i++)`
    // Inner #1: spaces `for (int j = 0; j < i; j++)`
    // Inner #2: numbers `for (int j = 0; j < n - i; j++)` — print `(i+1)`
    int n;
    cout << "Enter size of triangle: ";
    cin >> n;
    for (int i = 0;i< n; i++){
        for (int j = 0; j<i;j++){
            cout << " ";
        }
        for (int j = 0; j < n-i; j++){
            cout << (i+1);
        }
        cout << endl;
    }
}