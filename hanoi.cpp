#include <iostream>

void hanoi(int num, char from, char to, char buff)
{
    if (num != 0)
    {
        hanoi(num - 1, from, buff, to);
        std::cout << from << " -> " << to << std::endl;
        hanoi(num - 1, buff, to, from);
    }
}
int main() {}
