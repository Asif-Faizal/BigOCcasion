#include <iostream>
using namespace std;

// int main() {
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