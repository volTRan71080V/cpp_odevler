#include <iostream>
#include<unistd.h>
void n(int a){
    char sonuc;
    if (a<101 & a>89){
        sonuc='A';
    }
    else if(a<90 & a>80){
        sonuc='B';
    }
    else if(a<80 & a>69){
        sonuc='C';
    }
    else if(a<70 & a>59){
        sonuc='D';
    }
    else{
        sonuc='F';
    }
    write(1,&sonuc,1);


}
int main() {
    int sayi;
    std::cin>>sayi;
    n(sayi);

    return 0;
}