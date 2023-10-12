#include <stdio.h>
#include <stdlib.h>

// Factorial calculation function
int factorial (int x) {
    int i;
    int result = 1; 
    
    for (i = 1; i < x + 1; i++)
        result *= i;
            
    return result;
}

// Combination calculation function
int combination(int n, int r) {
    int div1, div2;  // numerator, denominator variables
    
    div1 = factorial(n);
    div2 = factorial(n-r) * factorial(r);
    
    return (div1 / div2);  // combination result
}

int main(int argc, char *argv[])
{ 
    int n, r;
    // Get n and r values
    printf("input n : "); 
    scanf("%d", &n);
    printf("input r : ");
    scanf("%d", &r);
    
    // Print combination result
    printf("Combination result = %d\n", combination(n, r));
   
  system("PAUSE");
  
  return 0;
}
