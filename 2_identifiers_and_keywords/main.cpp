#include <iostream>
#include <iomanip> // Required for std::fixed and std::setprecision

int main() {
    // 'marks' and 'percentage' are identifiers for variables.
    int marks = 85;
    float percentage = 91.5f; // Using 'f' suffix is good practice for float literals

    // 'std', 'cout', 'endl', 'fixed', and 'setprecision' are part of the standard library.
    std::cout << "Marks = " << marks << std::endl;
    std::cout << "Percentage = " << std::fixed << std::setprecision(2) << percentage << "%" << std::endl;

    // 'return' is a keyword.
    return 0;
}
