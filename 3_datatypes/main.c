#include <stdio.h>
#include <stdbool.h>

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
    
    // Boolean type
    _Bool boolVar = true; // or 1

    printf("--- C Data Types ---\n\n");

    // Printing values and sizes
    printf("Integer Types:\n");
    printf("  int:          Value = %d,       Size = %zu bytes\n", integerVar, sizeof(integerVar));
    printf("  short:        Value = %hd,      Size = %zu bytes\n", shortVar, sizeof(shortVar));
    printf("  long:         Value = %ld,      Size = %zu bytes\n", longVar, sizeof(longVar));
    printf("  long long:    Value = %lld,     Size = %zu bytes\n", longLongVar, sizeof(longLongVar));
    printf("  unsigned int: Value = %u,       Size = %zu bytes\n\n", unsignedIntVar, sizeof(unsignedIntVar));

    printf("Floating-Point Types:\n");
    printf("  float:        Value = %f,       Size = %zu bytes\n", floatVar, sizeof(floatVar));
    printf("  double:       Value = %lf,      Size = %zu bytes\n", doubleVar, sizeof(doubleVar));
    printf("  long double:  Value = %Lf,      Size = %zu bytes\n\n", longDoubleVar, sizeof(longDoubleVar));

    printf("Character Type:\n");
    printf("  char:         Value = %c,        Size = %zu bytes\n\n", charVar, sizeof(charVar));
    
    printf("Boolean Type:\n");
    printf("  _Bool:        Value = %d,        Size = %zu bytes\n\n", boolVar, sizeof(boolVar));

    return 0;
} 