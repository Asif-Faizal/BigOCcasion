#include <iostream>
using namespace std;

/*
Square patterns — loop construction guide

General: a square grid has `n` rows and `n` columns
- Outer loop (rows): `for (int i = 0; i < n; i++)`
- Inner loop (columns): `for (int j = 0; j < n; j++)`

Variants below demonstrate different values printed at each cell.
*/

// int main() {
//     // Pattern: `*` square — prints a star in every cell
//     // Outer: rows 0..n-1; Inner: columns 0..n-1
//     // Body: print `"* "` for each column
//     int n;
//     cout << "Enter size of square: ";
//     cin >> n;

//     for (int i = 0; i < n; i++) {          // rows
//         for (int j = 0; j < n; j++) {      // columns
//             cout << "* ";
//         }
//         cout << endl;
//     }

//     return 0;
// }

int main (){
    // Pattern: alphabet grid — each row prints `A B C ...` up to `n` columns
    // Outer: rows `for (int i = 0; i < n; i++)`
    // Per-row init: `char ch = 'A';` resets at each row
    // Inner: columns `for (int j = 0; j < n; j++)` — print `ch` then `ch++`
    int n;
    cout << "Enter size of square: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        char ch = 'A';
        for (int j = 0; j < n; j++) {
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }
}