#include <iostream>
#include <unistd.h>

void ft_putchar(char c) {
    write(1, &c, 1);
}

int main() {
    char c;
    std::cout << "Bir karakter girin: ";
    std::cin >> c;
    ft_putchar(c);
    return 0;
}