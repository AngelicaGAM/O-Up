#include <iostream>
using namespace std;
int main (){
    int T, B,TL,TB;
    scanf("%d %d", &T, &B);
  
   if (T == 0 ){
         printf("%d", T);
    }
      //impar
    if (T % 2 != 0){
        T  = T / 2;
        TL = T+1;
        B = B-1;
        if ( T % B != 0){
            TB = T % B;
            TL = TL + TB;
            printf("%d", TL);
        }else {
            printf("%d", TL);
        }
    }else {
        printf("%d", T);
    }
    
       
    return 0;
}