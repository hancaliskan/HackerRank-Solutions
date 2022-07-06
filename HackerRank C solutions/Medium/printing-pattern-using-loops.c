#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
 
 /*
 4 4 4 4 4 4 4  
 4 3 3 3 3 3 4   
 4 3 2 2 2 3 4   
 4 3 2 1 2 3 4   
 4 3 2 2 2 3 4   
 4 3 3 3 3 3 4   
 4 4 4 4 4 4 4  
 
 '4' sayısı kenarlar,
 '3' sayısı kenarlara 1 birim uzaklıkta, 
 '2' sayısı kenarlara 2 birim uzaklıkta, 
 '1' sayısı kenarlara 3 birim uzaklıkta 
 */
 
int main() 
{

    int n, min;
    scanf("%d", &n);
    int len = n*2 - 1;
    for(int yatay=0; yatay<len; yatay++){
        for(int dusey=0; dusey<len; dusey++){
            if (yatay < dusey) {min = yatay;}
            else {min = dusey;}
            if (min < len-yatay) { min = min;}
            else {min = len-yatay-1;}
            if (min < len-dusey-1) {min = min;}
            else {min = len-dusey-1;}
            
            printf("%d ", n-min);
        }
        printf("\n");
    }
    return 0;
}
