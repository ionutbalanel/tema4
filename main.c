#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float a, b, c, aria_triunghi, p;

    printf("Introduceti lungimea laturei (a) : ");
    scanf("%f", &a);

    printf("Introduceti lungimea laturei (b) : ");
    scanf("%f", &b);

    printf("Introduceti lungimea laturei (c) : ");
    scanf("%f", &c);

    p = (a + b + c) / 2;

    aria_triunghi = sqrt(p * (p - a) * (p - b) * (p - c));

    printf("Pentru plantarea unui gazon sunt necesare o cantitate de %.2f kg seminte ", aria_triunghi);
    return 0;
}
