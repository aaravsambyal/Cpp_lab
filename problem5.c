#include<stdio.h>

int max(int *a, int *b, int *c){
    if (*a >= *b && *a>=*c){
        return *a;
   } else if (*b >= *a && *b >= *c){
    return *b;
   } else{
    return *c;
   }
}

int main(){
    int x = 36, y = 24, z = 49;
    int *p = &x, *q = &y, *r = &z;
    max(p, q, r);
    printf("%d", max(p, q, r));

    return 0;
    
}