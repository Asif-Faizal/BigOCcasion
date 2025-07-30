#include <iostream>

int main(){
    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;

    int sum = 0;
    for (int i = 1; i <= n; i++){
        sum += i;
    }
    std::cout << "Sum of first " << n << " natural numbers is " << sum << std::endl;
    return 0;
}