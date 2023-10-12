#include <stdio.h>
#include <stdlib.h>

int sumTwo(int a, int b) {
   return a + b;
}

int square(int n) {
    return n * n;
}

int get_max (int x, int y) {
    if (x > y)
       return x;
    else
        return y;
}

int main(int argc, char *argv[])
{ 
    int a, b;
    
    a = 3;
    b = 5;
   printf("sumTwo result : %d\n", sumTwo(a, b));
   printf("square result : %d\n", square(a));
   printf("get_max result : %d\n", get_max(a, b));
   
   
  system("PAUSE");
  
  return 0;
}
