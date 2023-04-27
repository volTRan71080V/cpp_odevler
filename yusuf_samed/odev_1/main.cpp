#include <unistd.h>
#include <iostream>


void print_alphabet() {
    char c = 'a';
    while (c <= 'z') {
        ::write(1, &c, 1);
        c++;
    }
}

void ft_putchar(char c) {
    ::write(1, &c, 1);
}

void print_exam(int note){
    char letters[] = "FFFFFFDCBAA";
    if (note <101 and note > -1){
        char grade = letters[(note/10)];
        ::write(1,&grade,1);
    }else{
        write(1,"dalga mi geciyon knk", 21);
    }}

int main(){
    char c;
    int notgiris;
    print_alphabet();
    std::cout <<std::endl<< "Ciktisini almak istediginiz char'i giriniz" << std::endl;
    std::cin >>c;
    ft_putchar(c);
    std::cout << std::endl<<"Harfe cevrilmesizi istediginiz notunuzu giriniz"<< std::endl;
    std::cin >> notgiris;
    print_exam(notgiris);
    return 0;}
