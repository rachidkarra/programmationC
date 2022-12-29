#include <stdio.h>
#define NVAL 10

int main()
{
    int i, min, max;
    int t[NVAL];
    printf("Donnez les %d valeurs du tableau", NVAL);
    for (i = 0; i < NVAL; i++)
    {
        scanf("%d", &t[i]);   // scanf("%d",t+i)
    }

    min = max = t[0];
    for (i = 1; i < NVAL; i++)
    {
        if (t[i] > max)  // if(*(t+i)> max) 
            max = t[i];   //max = *(t+i);
        if (t[i] < min)
            min = t[i];
    }
    printf("La valeur maximun est %d", max);
    printf("La valeur minimum est %d", min);
    return 0;
}


// t est la table et le pointeur
// line 11 remplace par :   scanf("%d",t+i)
// line 18 if(*(t+i)> max) max = *(t+i);
// de meme pour min