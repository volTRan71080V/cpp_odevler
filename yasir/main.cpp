
#include <iostream>
#include <unistd.h>
using namespace std;


void puanHesapla(int sonuc) {

char a;
	if (sonuc > 95) {

		a = 'A';
	}
	else if (sonuc > 80) {
		a = 'B';
}
	else if (sonuc > 65) {
		a = 'C';
	}
	else if (sonuc > 50) {
		a = 'D';
	}
	else {
		a = 'F';
	}
	write(1,&a,1);
}
void alfabe(){

char a='A';
	while(a <= 'Z'){

		write(1,&a,1);
		a++;
	}
}
void ft_putchar(char a){

write(1,&a,1);
}

int main()
{

ft_putchar('g');
alfabe();
puanHesapla(77);

    
    return 0;
}

	




