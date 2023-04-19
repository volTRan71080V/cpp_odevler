
#include<iostream>
#include<unistd.h>
using namespace std;
void sinav_sonucu(int note){
  char a;
  if(note >= 90 && note <= 100 ) {
    a = 'A';
  }
  else if(note >= 80 && note <= 89 ) {
    a = 'B';
  }
  else if(note >= 70 && note <= 79 ) {
    a  = 'C';
  }
  else if(note >= 60 && note <= 69 ) {
    a = 'D';
  }
  else if(note >= 50 && note <= 59 ) {
    a = 'E';
  }
  else if(note >= 0 && note <= 49 ) {
    a = 'F';
  }
  else{
    string b = "Lütfen 0 ile 100 arasında bir not girin";
    write(1,b.c_str(),41);
  }
  if (note >= 0 && note <= 100){
  write(1,&a,1);}
  
}
int main() {
  int note;
  cout << "0 ile 100 arasında bir not girin: ";
  cin >> note;
  sinav_sonucu(note);
  return 0;
}