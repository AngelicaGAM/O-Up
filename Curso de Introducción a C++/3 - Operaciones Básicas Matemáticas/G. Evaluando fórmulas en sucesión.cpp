#include <iostream>
#include <math.h>

using namespace std;

int main() {

    float x,y,z;
  
    scanf("%f",&x);

    y =  x+5;
    y = y/( (2)*(x+1));
    z = (y * y) + x *(x-(2 * y)); 

    z =z / (x* y);
    printf("%f",z);
    
    return 0;
}