#include <iostream>
using namespace std;

int main()
{
    // Example of the bit-wise or operation (|)

    // int a = 5;     // 0101
    // int b = 12;    // 1100
    // int c = a | b; // 1101
    // std::cout << "a = " << a << ", b = " << b << ", c = " << c << std::endl;

    /*
    explanition
    int a = 0 1 0 1
    int b = 1 1 0 0 |
    ----------------
    int c = 1 1 0 1

    true OR true = true
    true OR false = true
    false OR false = false
    */

    // Example of the bit-wise EX-OR operation (^)

    // int a = 5;     // 0101
    // int b = 9;     // 1001
    // int c = a ^ b; // 1100
    // std::cout << "a = " << a << ", b = " << b << ", c = " << c << std::endl;
    /*
    true OR true = false
    true OR false = true
    false OR false = false

    int a = 0 1 0 1
    int b = 1 0 0 1 ^
    ---------------
    int c = 1 1 0 0

    */
    // swap thw values using the bit-wise EX-OR operation

    // int a = 42;
    // int b = 64;
    // // XOR swap
    // a ^= b;
    // b ^= a;
    // a ^= b;
    // std::cout << "a = " << a << ", b = " << b << "\n";

    // Example of the bit-wise And operation (&)
    // int a = 6;     // 0110b (0x06)
    // int b = 10;    // 1010b (0x0A)
    // int c = a & b; // 0010b (0x02)
    // std::cout << "a = " << a << ", b = " << b << ", c = " << c << std::endl;
    /*
    TRUE AND TRUE = TRUE
    TRUE AND FALSE = FALSE
    FALSE AND FALSE = FALSE

    int a = 0 1 1 0
    int b = 1 0 1 0 &
    -----------------
    int c = 0 0 1 0

    */
    // exapmple of the left-shift operation(<<)

    // int a = 1;      // 0001
    // int b = a << 1; // 0010
    // std::cout << "a = " << a << ", b = " << b << std::endl;

    // The left-shift operation is shift the binary number left at one digit
    // The right-shift operation is shift the binary number right at one digit

    return 0;
}