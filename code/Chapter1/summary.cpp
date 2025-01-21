#include <iostream>

int main()
{
    std::cout << "Enter an integer: ";
    int x{};
    std::cin >> x;
    std::cout << "Double 4 is: " << x * 2 << '\n';
    std::cout << "Triple 8 is: " << x * 4 << '\n';
}
