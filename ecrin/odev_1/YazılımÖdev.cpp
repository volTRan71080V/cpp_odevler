#include <iostream>
#include <unistd.h>

void print_exam(int note) {
    char grade;

    if (note >= 90) {
        grade = 'A';
    } else if (note >= 80) {
        grade = 'B';
    } else if (note >= 70) {
        grade = 'C';
    } else if (note >= 60) {
        grade = 'D';
    } else {
        grade = 'F';
    }

    write(1, &grade, 1); // grade karakterini ekrana yazdır
    write(1, "\n", 1); // yeni satır karakterini ekrana yazdır
}

int main() {
    int note;

    std::cout << "Notunuzu girin: ";
    std::cin >> note;

    print_exam(note);

    return 0;
}
