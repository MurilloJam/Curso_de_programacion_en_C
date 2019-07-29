#include <stdio.h>

int main(void)
{
    int base = 10;
    int altura = 15;
    int area;

    area = base * altura / 2;

    printf("El area de un triangulo cuya base es %d y altura %d es:\n%d\n", base, altura, area);
}