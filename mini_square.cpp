// file: mini_square.cpp

#include "Halide.h"     // Halide API
#include <iostream>     // std::cout

using namespace Halide; // Var, Func, Buffer without prefix


//Prog: Squares 0-9
int main() {
    Var x;              // symbolic index (like 'i' in a loop)
    Func square;        // pure function we'll define on x

    square(x) = x * x;  // ALGORITHM: for each x, compute x^2

    // Run (JIT) for x = 0..9 (10 elements)
    // out - a kind of buffered int array to hold numbers 0-9
    Buffer<int> out = square.realize({10});


    // loop to print out array 
    // out.width()→ returns the size of the first dimension of the Buffer (here = 10)
    for (int i = 0; i < out.width(); i++) {

        // Print the results: 0 1 4 9 16 25 36 49 64 81
        std::cout << out(i) << (i + 1 < out.width() ? ' ' : '\n');
    }
    return 0;
}
