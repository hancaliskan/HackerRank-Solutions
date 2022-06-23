#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
  //Write your code here.
  int max_and = 0;
  int max_or = 0; 
  int max_xor = 0;
  
  int andValue, orValue, xorValue;
  for(int i = 1; i <= n; i++){
      for (int m = 1; m <= n; m++) {
        if(m == i)break;
        //AND
        andValue = i & m;

        //OR
        orValue = i | m;
    
        //XOR
        xorValue = i ^ m; 
        
        if (max_and < andValue && andValue < k) {
            max_and = andValue;
        }
        if (max_or < orValue && orValue < k) {
            max_or = orValue;
        }
        if (max_xor < xorValue && xorValue < k) {
            max_xor = xorValue;
        }       
      }
      
  }
    printf("%d\n%d\n%d\n", max_and, max_or, max_xor );
  return;
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}


