#include<iostream>
#include<unistd.h>

using namespace std;
void print_exam(int note){
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
    
    write(1,"geçersiz",8);
  }
 
  
}
int main() {
  int note;
  cout << "0 ile 100 arasında bir not girin: ";
  cin >> note;
  print_exam(55);
  return 0;
}

   





















    
        

    




  
   