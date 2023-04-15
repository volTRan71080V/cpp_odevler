#include <unistd.h>
#include <iostream>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void print_alphabet()
{
    int i = 65;
    while (i < 91)
    {
        write(1, &i, 1);
        i++;
	}
}

void print_exam(int note)
{
    if(note >= 90)
    {
        write(1, &"A", 1);
    }
    else if(note >= 80)
    {
        write(1, &"B", 1);
    }
    else if(note >= 70)
    {
        write(1, &"C", 1);
    }
    else if(note >= 60)
    {
        write(1, &"D", 1);
    }
    else
    {
        write(1, &"F", 1);
    }
}
int main()
{
    char c;
    std::cout << "Bir karakter giriniz:";
    std::cin >> c;
    ft_putchar(c);
    write(1, &"\n", 1);
    print_alphabet();
    write(1, &"\n", 1);
    int note;
    std::cout << "Notunuzu giriniz:";
    std::cin >> note;
    print_exam(note);
    write(1, &"\n", 1);
}
