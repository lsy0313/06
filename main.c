#include <stdio.h>
#include <stdlib.h>

/*void square(int a) {
     a = a * a;
     }*/
     
int square(int a) {
     return (a * a);
     }

int main(int argc, char *argv[])
{ 
    int a = 2;
    //square(a);
    a = square(a);
    printf("a = %i \n", a);
   
  system("PAUSE");
  
  return 0;
}
