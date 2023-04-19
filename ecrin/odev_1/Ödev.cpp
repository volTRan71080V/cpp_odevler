#include <iostream>

#include <unistd.h>
using namespace std;
void print_alphabet(void) {
    const char* alphabet = "abcdefghijklmnopqrstuvwxyz\n";
    write(1, alphabet, 27);
}
int main() {
    print_alphabet();
    return 0;
}