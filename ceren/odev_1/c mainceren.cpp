


#include<iostream>
#include<unistd.h>
using namespace std;

void print_alphabet(void){
  char harf = 'a';
 
  while(harf <= 'z'){
  write(1,&harf,1);
  
  harf++;
}}
int main(){
  print_alphabet();
  return 0;
}

   





















    
        

    




  
   