#include <iostream>
#include <iomanip>  // For std::setw (sets width for printing)
#include <string>   // For std::string
#include <limits>   // For std::numeric_limits

int main() {
    // Integer types
    int integerVar = 2147483647;
    short shortVar = 32767;
    long longVar = 9223372036854775807L;
    long long longLongVar = 9223372036854775807LL;
    unsigned int unsignedIntVar = 4294967295U;

    // Floating-point types
    float floatVar = 3.14f;
    double doubleVar = 3.141592653589793;
    long double longDoubleVar = 3.141592653589793238L;

    // Character type
    char charVar = 'A';

    // Boolean type (built-in in C++)
    bool boolVar = true;

    // C++ also has a powerful string type
    std::string stringVar = "Hello, C++!";

    std::cout << "--- C++ Data Types ---" << std::endl << std::endl;

    // Printing values and sizes
    std::cout << std::left; // Left-align the text
    std::cout << "Integer Types:" << std::endl;
    std::cout << std::setw(15) << "  Type" << std::setw(25) << "Value" << "Size (bytes)" << std::endl;
    std::cout << std::setw(15) << "  int:" << std::setw(25) << integerVar << sizeof(integerVar) << std::endl;
    std::cout << std::setw(15) << "  short:" << std::setw(25) << shortVar << sizeof(shortVar) << std::endl;
    std::cout << std::setw(15) << "  long:" << std::setw(25) << longVar << sizeof(longVar) << std::endl;
    std::cout << std::setw(15) << "  long long:" << std::setw(25) << longLongVar << sizeof(longLongVar) << std::endl;
    std::cout << std::setw(15) << "  unsigned int:" << std::setw(25) << unsignedIntVar << sizeof(unsignedIntVar) << std::endl << std::endl;

    std::cout << "Floating-Point Types:" << std::endl;
    std::cout << std::setw(15) << "  Type" << std::setw(25) << "Value" << "Size (bytes)" << std::endl;
    std::cout << std::setw(15) << "  float:" << std::setw(25) << floatVar << sizeof(floatVar) << std::endl;
    std::cout << std::setw(15) << "  double:" << std::setw(25) << doubleVar << sizeof(doubleVar) << std::endl;
    std::cout << std::setw(15) << "  long double:" << std::setw(25) << longDoubleVar << sizeof(longDoubleVar) << std::endl << std::endl;

    std::cout << "Character Type:" << std::endl;
    std::cout << std::setw(15) << "  char:" << std::setw(25) << charVar << sizeof(charVar) << std::endl << std::endl;

    std::cout << "Boolean Type:" << std::endl;
    // std::boolalpha prints "true" or "false" for bools
    std::cout << std::setw(15) << "  bool:" << std::setw(25) << std::boolalpha << boolVar << sizeof(boolVar) << std::endl << std::endl;

    std::cout << "String Type:" << std::endl;
    std::cout << std::setw(15) << "  std::string:" << std::setw(25) << stringVar << sizeof(stringVar) << " (Note: size is complex)" << std::endl;


    return 0;
} 