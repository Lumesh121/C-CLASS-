#include<stdio.h>

void main()
{
    float r1,r2,v,current,power,total,product;

    clrscr();

    printf("Enter first resistor value: ");
    scanf("%f",&r1);

    printf("Enter second resistor value: ");
    scanf("%f",&r2);

    printf("Enter voltage: ");
    scanf("%f",&v);

    total = r1 + r2;
    current = v / total;
    power = v * current;
    product = r1 * r2;

    printf("\nTotal Resistance = %.2f",total);
    printf("\nCurrent = %.2f A",current);
    printf("\nPower = %.2f W",power);
    printf("\nProduct of resistor values = %.2f",product);

    getch();
}