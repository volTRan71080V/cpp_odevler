#include<iostream>
#include<unistd.h>
using namespace std;
void ft_putchar(char c){
    write(1,&c,1);
}
int main(){
    char a;
    cout<<"char girin:";
    cin>>a;

    ft_putchar(a);
}