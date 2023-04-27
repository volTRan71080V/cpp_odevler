#include<iostream>
#include<unistd.h>
using namespace std;

 void ft_putchar(char c){
  write(1,&c,1);
}
int main(){
  char c;
  cout << "Harf girin: ";
  cin >> c;
  ft_putchar(c);
  return 0;
}
    


    
    







 




    
