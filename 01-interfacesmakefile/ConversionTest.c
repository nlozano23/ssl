#include "Conversion.h"
#include <assert.h>

int main() {
    assert(Celsius(32) == 0);
    assert(Celsius(50) == 10);
    assert(Celsius(212) == 100);

    assert(Fahrenheit(0) == 32);
    assert(Fahrenheit(10) == 50);
    assert(Fahrenheit(100) == 212);

    return 0;
}