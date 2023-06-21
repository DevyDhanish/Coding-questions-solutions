#include <stdio.h>

int main(){
    int kilo = 0;

    scanf("%i", &kilo);

    (kilo <= 2 || kilo % 2 != 0) ? printf("NO\n"): printf("YES\n");

    return 0;
}