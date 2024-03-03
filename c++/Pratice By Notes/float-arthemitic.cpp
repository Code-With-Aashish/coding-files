#include <iostream>
using namespace std;

int main()
{
    float total = 0;
    // for (float a = 0; a != 2; a += 0.01f) // this is the incorrct way or this sintax is wrong
    // for (float a = 0; a <= 2; a += 0.01f)
    // {
    //     total += a;
    //     cout << total << endl;
    // }

    double a = 0.1;
    double b = 0.2;
    double c = 0.3;
    if (a + b == c)
    {
        // This never prints on IEEE754-compliant machines
        std::cout << "This Computer is Magic!" << std::endl;
    }
    else
    {
        std::cout << "This Computer is pretty normal, all things considered." << std::endl;
    }
    // 64 - bit floats have 53 digits of precision, including the whole - number - part.double a = 0011111110111001100110011001100110011001100110011001100110011010; // imperfect
    // representation of 0.1 double b = 0011111111001001100110011001100110011001100110011001100110011010;                                                            // imperfect
    // representation of 0.2 double c = 0011111111010011001100110011001100110011001100110011001100110011;                                                            // imperfect
    // representation of 0.3 double a + b = 0011111111010011001100110011001100110011001100110011001100110100;                                                        // Note that this
    // is not quite equal to the "canonical" 0.3 !

    return 0;
}