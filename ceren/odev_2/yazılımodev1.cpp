#include<iostream>
#include<unistd.h>

using namespace std;

 void print_numbers(void){
 int number=48;


 while(number<=56){
    write(1,&number,1);
    write(1,", ",2);
    number++;
 }
 write(1,&number,1);
 write(1, ".", 1);
 }

int main(){
    print_numbers();
    return 0;

}
