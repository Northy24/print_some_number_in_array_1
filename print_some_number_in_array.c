#include <stdio.h>

int main(){
    int n[10];
    //input
    printf("Enter your number : ");
    for(int i = 0;i < 10;i++){
        scanf("%d",&n[i]);
    }

    //print number in array
    printf("Data in array : ");
    for(int i = 0;i < 10;i++){
        printf("%d ",n[i]);
    }

    printf("\nresult : ");
    //for i in n
    for(int i = 0; i < 10;i++){
    //print if n[i-1] and n[i+1] are odd
        if(i != 0 && i != 9){
            if(n[i-1] % 2 != 0 && n[i+1] % 2 != 0){
                printf("%d ",n[i]);
            }
        }
    }

    return 0;
}
