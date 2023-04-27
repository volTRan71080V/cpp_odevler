#include <iostream>
#include <unistd.h>
#include <stdlib.h>
using namespace std;

void ft_putchar(char c) {
    write(1,&c,1);
}
int main() {
    ft_putchar('a');
    return 0;
}
