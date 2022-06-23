#include <stdio.h>

int find_max(int x, int y){
    if (x < y)
        return y;
    return x;
}

/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
int max_of_four(int a, int b, int c , int d){
    int gecici1 = find_max(a, b);
    int gecici2 = find_max(c, d);
    
    return find_max(gecici1, gecici2); 
}


int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}

