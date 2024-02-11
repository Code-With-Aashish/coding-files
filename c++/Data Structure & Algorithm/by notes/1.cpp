#include <iostream>
using namespace std;

int main()
{
    // float total = 0;
    // for (float a = 0; a <= 2; a += 0.01f)
    // {
    //     total += a;
    //     cout << total << endl;
    // }

    // double a = 0.1;
    // double b = 0.2;
    // double c = 0.3;
    // if (a + b == c)
    // {
    //     // This never prints on IEEE754-compliant machines
    //     std::cout << "This Computer is Magic!" << std::endl;
    // }
    // else
    // {
    //     std::cout << "This Computer is pretty normal, all things considered." << std::endl;
    // }

    // int a = 5; // 0101b (0x05)
    // a || 12;
    // cout << a;

    int *ptr = nullptr;
    cout << ptr << endl;
    if (ptr != nullptr)
    {
        // This block will not be executed if the pointer is null
        std::cout << "Value at the memory location: " << *ptr << std::endl;
    }
    else
    {
        std::cout << "Pointer is null." << std::endl;
    }

    return 0;
}

// page 36
