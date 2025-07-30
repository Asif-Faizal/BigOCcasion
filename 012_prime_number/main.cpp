#include <iostream>

int main(){
    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;

    for (int i = 2; i < n; i++){
        if (n % i == 0){
            std::cout << n << " is not a prime number" << std::endl;
            break;
        }
    }
    std::cout << n << " is a prime number" << std::endl;
    return 0;
}