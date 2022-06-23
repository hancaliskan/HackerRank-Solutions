#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.

int find_nth_term(int n, int a, int b, int c) {
   //Write your code here.
   int list[n],sayac;
   list[1]=a;
   list[2]=b;
   list[3]=c;
   for(sayac=4;sayac<=n;sayac++)
   {
       list[sayac]=list[sayac-1]+list[sayac-2]+list[sayac-3];
      
   }
   return list[n];

 } 

int main() {
    int n, a, b, c;
  
    scanf("%d %d %d %d", &n, &a, &b, &c);
    int ans = find_nth_term(n, a, b, c);
 
    printf("%d", ans); 
    return 0;
}

