#include<iostream>
#include<unistd.h>
using namespace std;
void print_alphabet(void){
  char harf = 'a';
  char bos = ' ';
  while(harf <= 'z'){
  write(1,&harf,1);
  write(1,&bos,1);
  harf++;
}}
int main(){
  print_alphabet();
  return 0;
}