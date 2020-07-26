#include <stdio.h>
int main(){
    int n, num1, num2;
    scanf("%d",&n);
    int res[n+1];
    for (int i = 0; i < n; i++)
    {
       scanf("%d %d", &num1, &num2);
       res[i] = num1+num2;
    }
       for (int i = 0; i < n; i++)
    {
       printf("%d \n", res[i]);
       
    }
    return 0;
}