#include <iostream>
#include <unistd.h>
#include <stdlib.h>
void print_exam(int note){
    if (note>=90)
    {
        write(1,"a",1);
    }
    else if (note>=80)
    {
        write(1,"b",1);
    }
    else{
        write(1,"c",1);
    }
}

int main(){
    print_exam(79);
}
