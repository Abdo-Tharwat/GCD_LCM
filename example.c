#include"GCD_LCM.h"
#include"stdio.h"
#include"stdlib.h"


int main(){
    
    int arr[]={ 12,16,24};
    
    int x = (sizeof(arr)/sizeof(arr[0]));
    
    printf("least common divider is : %d \n" ,LeastCommonMultiplier(arr,x));
    printf("great common divider is : %d \n" ,GreatCommonDivider(arr,x));

    return 0 ;  
}
