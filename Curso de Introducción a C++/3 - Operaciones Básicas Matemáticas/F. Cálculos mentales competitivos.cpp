// Calcular el resultado de R+5R+5.
// Al resultado anterior, elevarlo al cuadrado.
// Al resultado anterior, dividirlo entre un tercio del número original RR.
// Al resultado anterior, elevarlo al cubo.
#include <iostream>
using namespace std;
int main(){
    double R, r1,r2,r3,r4;

    scanf("%lf",&R);
    r1= R + + 5;
    r2 = r1 * r1;
    r3 = r2 /  (R/3);
    r4 = r3 * r3 * r3;
    printf("%lf %lf %lf %lf %lf",R,r1,r2,r3,r4);
    return 0;
}