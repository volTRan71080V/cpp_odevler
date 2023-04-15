#include <unistd.h>
void print_alphabet() {
	char letter = 'A';
	while (letter <= 'Z')
	{
		write(1, &letter, 1);
		letter++;
	}
}
void ft_putchar(char a) {
    write(1, &a, 1);
}
void print_exam(int note) {
	char e;

	if (note >= 90) {
		e = 'A';
	} else if (note >= 80) {
		e = 'B';
	} else if (note >= 70) {
		e = 'C';
	} else if (note >= 60) {
		e = 'D';
	} else {
		e = 'F';
	}

	write(1, &e, 1);
}
int main(){

	print_alphabet();
	ft_putchar('t');
	print_exam(80);
}
