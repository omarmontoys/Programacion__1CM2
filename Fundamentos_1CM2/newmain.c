#include <stdio.h>
#include <stdlib.h>
#include "funciones_part_2.h"

int main()
{
    int a = 3, b = 2, c;
    float area;
    char inicial;

    c = suma (a,b);
    printf("c: %d\n",c);
    c = resta (a,b);
    printf("c: %d\n",c);

    area = area_circulo(2);
    printf("area: %f\n",area);

    inicial = primer_caracter("chelin");
    printf("primer caracter:  %c",inicial);

    return 0;
}
