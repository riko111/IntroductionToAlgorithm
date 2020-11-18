#include <iostream>

void swap(int &, int &);

int main(void)
{
    int a = 10;
    int b = 20;

    swap(a, b);

    std::cout << "a:" << a << " b:" << b << std::endl;

    return 0;
}

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}