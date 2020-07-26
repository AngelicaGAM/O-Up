#include <iostream>
using namespace std;
int main(){
    int xy[5][5], longi[4], res;

    for (int j = 0; j < 4; j++)
    {
        scanf("%d %d", &xy[0][j], &xy[1][j]);
    }
    
    longi[0] = xy[0][0] - xy[0][1];
    longi[1]= xy[0][3] - xy[0][2];
    
    longi[2] = xy[1][0] - xy[1][3];
    longi[3] = xy[1][1] - xy[1][2];

    for (int j = 0; j < 3; j++){ 
        if ( longi[j]  < longi[j + 1] ){
            res = longi[j];
        }
    
    
    }
     printf("res %d  \n", res);
    
   for (int j = 0; j < 4; j++)
    {
        printf("lonji %d \n", longi[j] );
    }

    return 0;
}