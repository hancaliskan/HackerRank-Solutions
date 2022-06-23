#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int main() 
{
    int a, b;
    scanf("%d\n%d", &a, &b);
  	// Complete the code.
    char label[9][6] = {"one","two","three","four","five","six","seven","eight","nine"};
    for(int i=a; i < b ;i++){
        if(a == i){printf("%s\n",label[i-1]);}
        if(b == i){printf("%s\n",label[i-1]);}
        
    }
        if (a > 9 || b > 9) {
            printf("nine\n");
            if (a % 2 || b % 2)
                printf("even\n");
            printf("odd\n");
        }
        else if(1 < a && a < 9){
            if (a % 2 == 1)
                printf("even\n");
            printf("odd\n");
        }
        else if(1 < b && b < 9){
            if (b % 2)
                printf("even\n");
            printf("odd\n");
        }
    return 0;
}


