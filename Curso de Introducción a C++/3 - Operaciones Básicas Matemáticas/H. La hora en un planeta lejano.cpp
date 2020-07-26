
//  minutos son de 50 segundos, 
// // las horas de 70 minutos y 
// los días de 12 horas.
// Por ejemplo, para S=3553S=3553 han transcurrido 0 días, 1 hora, 1 minuto y 3 segundos.
//  Escriba un programa para que tu reloj funcione correctamente.
#include <iostream>
// 3553 seg 
// 3553 / 50seg = 71.06 min 
// 71.06 min / 70 min = 1 horas 


int main(){
    double seg, days, hours, min1, min2;
    double sec;
    scanf("%lf",&seg);
   
    min1 =  seg / 50;     
    min2 = min1 / 70;

    sec = min1 % 70;
    printf("div %lf mod %lf", min2, sec );     
    hours = min2 / 70;
    days = hours / 12;
    
 
    // printf("%lf %d %d %d", days, hours, min2 , sec);
    return 0;
}