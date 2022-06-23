#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int onbinler;
int binler;
int yuzler;
int onlar;
int birler;
        
int main() {
	
    int n;
    scanf("%d", &n);
    //Complete the code to calculate the sum of the five digits on n.
    int toplam;
    if(n>=10000 && n<=99999)
    {
      
        birler=(n % 10);
        //printf("\nBirler Basamagindaki deger='%d'",birler);

        onlar=((n % 100)-birler)/10;
        //printf("\n\nOnlar basamagindaki deger='%d'",onlar);

        yuzler=((n % 1000)-(n % 100))/100;
        //printf("\n\nYuzler basamagindaki deger='%d'",yuzler);

        binler=((n % 10000)-(n % 1000))/1000;
        //printf("\n\nBinler basamagindaki deger='%d'",binler);
        
        onbinler= (n-(n % 10000))/10000;
        //printf("\n\nOnbinler basamagindaki deger='%d'",onbinler);
        
        toplam = birler+onlar+yuzler+binler+onbinler;
        printf("%d", toplam);
    }
   
    return 0;
}

