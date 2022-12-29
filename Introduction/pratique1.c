#include <stdio.h>

int main(){
const float PI = 3.14;
const float R = 15;
float D,P,S;
D = PI * R;
P = D* R;
S = PI * R *R;
printf("Un cercle de rayon %f a pour diamètre %f pour circonférence %f et surface %f \n", R,D, P, S );
// Affichage avec une precision de deux chiffres apres la virgule
//printf("Un cercle de rayon %0.2f a pour diamètre %0.2f pour circonférence %0.2f et surface %0.2f \n", R,D, P, S );
return 0;
}