/* toolchain */
#include <iostream>

/* internal */
#include "example/sample3.h"

int test1(int a, int b)
{
    return a + b;
}

int main(void)
{
    std::cout << test1(1, 2) << std::endl;

    Sample3::method1();
    Sample3::method2();

    float a = 0.0f;
    for (int i = 0; i < 1000; i++)
    {
        a *= 2.0f;
        a /= 2.0f;
        std::cout << a << std::endl;
    }

    return 0;
}
