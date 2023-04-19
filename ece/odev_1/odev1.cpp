#include<iostream>
#include<unistd.h>
using namespace std;
void harf_yaz(char a){
  write(1,&a,1);
}
int main(){
  char a;
  cout << "Harf girin: ";
  cin >> a;
  harf_yaz(a);
  return 0;
}