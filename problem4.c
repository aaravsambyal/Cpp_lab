#include<stdio.h>

void add(int *a, int *b, int*c){
    *c = *a + *b;
}
 int main() {
    int x = 4;
    int y = 6;
    int sum;

    add(&x, &y, &sum);
 printf(" sum of %d and %d is %d", x, y, sum);
 return 0;

}