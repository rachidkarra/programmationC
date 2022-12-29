#include <stdio.h>

int main(){

    double i = 3;
    double *p ;
    p = &i;
    printf("%d \n", &i);
    printf("%d \n",&p); 
}