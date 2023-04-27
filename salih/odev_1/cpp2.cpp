#include <iostream>
#include <unistd.h>
#include <stdlib.h>
void print_alphabet(void){

    write(1,"a b c ç d e f g ğ h ı i j k l m n o ö p r s ş t u ü v y z",64);
};
int main(){
    print_alphabet();

}
