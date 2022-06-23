#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int score_list[10] = {0,0,0,0,0,0,0,0,0,0,0}; //zero, one, two, three, four, five ...
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    
    char *s;
    s = malloc(1024 * sizeof(char));
    scanf("%s", s);
    s = realloc(s, strlen(s) + 1);
    int len = strlen(s), i;
    int arr[10];
    
    for (i = 0; i < strlen(s); i++) {
        if ( 47 < s[i] && s[i] < 58)
        {
            score_list[s[i]-48] += 1;
        }
    }    
    for(int loop = 0; loop < 10; loop++)
      printf("%d ", score_list[loop]);

    return 0;
}

