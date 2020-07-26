#include <iostream>
using namespace std;
int main(){
    int longi[4], res=0;

    scanf("%d %d %d %d", &longi[0], &longi[1], &longi[2], &longi[3]);
    

      for (int i = 0; i <=3 ; i++){ 
    
        for (int j = 0; j <=3 ; j++){ 
            if ( longi[i]  < longi[j] ){
                res = longi[j];  
                longi[j] = longi[i]; 
                longi[i] = res; 
                printf("j")      
            }
        }
      }

    printf("%d %d %d %d", longi[0], longi[1], longi[2],longi[3] );
    
    
    return 0;
}