#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, *arr, i;
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));
    for(i = 0; i < num; i++) {
        scanf("%d", arr + i);
    }
    int *sec_arr;
    sec_arr = (int*) malloc(num * sizeof(int));
    /* Write the logic to reverse the array. */

    for(i = 0; i < num; i++){
        sec_arr[i] = arr[num-1-i]; 
        //printf("%d ", *(arr + i));
        printf("%d ", *(sec_arr+i));
    }
    return 0;
}
