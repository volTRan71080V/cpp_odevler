#include <iostream>
#include <unistd.h>
using namespace std;

void printChar(char c){

    write(1,&c,1);
}

void printAlphabet(void){
    char alp[] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','r','s','t','u','v','y','z'};

    short int i = 0;

    while (i<23)
    {
        write(1,&alp[i],1);
        i++;
    }
}

void printExam(int note){

    const char a = 'A';
    const char b = 'B';
    const char c = 'C';
    const char d = 'D';
    const char e = 'E';
    const char f = 'F';


    if (note >= 85 && note <= 100)
    {
        write(1,&a,1);
    }
    else if (note >= 70 && note < 85)
    {
        write(1,&b,1);
    }
    else if (note >= 55 && note < 70)
    {
        write(1,&c,1);
    }
    else if (note >= 40 && note < 55)
    {
        write(1,&d,1);
    }
    else if (note >= 25 && note < 40)
    {
        write(1,&e,1);
    }
    else if (note >= 0 && note < 25)
    {
        write(1,&f,1);
    }


}

int main(int argc, char const *argv[])
{

    printChar('e');
    cout << endl;
    printAlphabet();
    cout << endl;
    printExam(78);
    cout << endl;
    return 0;
}
