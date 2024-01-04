#include<stdio.h>
int main(){
    int water=1,qty=0;
    char inp;
    printf("Enter the unit of water you want :");
    scanf("%d",&qty);
    do{
        for(water=1;water<=qty;water++){ 
            printf("taking water unit %d\n",water);
        }
    printf("IF you repeat it press Y :");
    scanf("%c",&inp);
    }while(inp=='Y');
    int toffee=1;
    printf("Enter the unit of toffee you want :");
    scanf("%d",&qty);
    for(toffee=1;toffee<=qty;toffee++){ 
        printf("taking tofee unit %d\n",toffee);
    }
    int drinks=1;
    printf("Enter the unit of drinks you want :");
    scanf("%d",&qty);
    for(drinks=1;drinks<=qty;drinks++){ 
        printf("taking drink unit %d\n",drinks);
    }


    
    return 0;
} 