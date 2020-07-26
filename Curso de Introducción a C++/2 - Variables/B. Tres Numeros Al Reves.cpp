#include <iostream>

using namespace std;

int main() {
    int nums[3];
  
    for(int i=0; i<=2;i++){
        scanf("%d",&nums[i]);
    }
    for(int j=2; j>=0;j--){
        printf("%d\n",nums[j]);
    }
    
    return 0;

}