#include <stdio.h>
float SummeDerDreZählen(float a, float b, float c){
    return a + b + c;
}

int main()
{
    float zahl1, zahl2, zahl3;
    printf("Geben Sie drei Zählen ein bitte:\n");
    scanf("%f %f %f",&zahl1, &zahl2, &zahl3);
    printf("%.2f + %.2f + %.2f ist gleich %.2f ",zahl1, zahl2, zahl3, SummeDerDreZählen(zahl1, zahl2, zahl3));

    return 0;
}
