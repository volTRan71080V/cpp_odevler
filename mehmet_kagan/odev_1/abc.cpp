#include <iostream>
#include<unistd.h>
#include<list>
using namespace std;
void abc(void){
    list<char> alfabe('a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z');
    list<char>::iterator itr = alfabe.begin();
    int i=1;
    while (i<26){
    char harf=*itr;
    write(1,&harf,1);
    ++itr;
    i++;

}
}
int main() {

abc();


    return 0;
}
