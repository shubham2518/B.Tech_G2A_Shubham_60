#include <stdio.h>
int main(){
    
    int n, arr[100];
    
    printf("Enter the size of array : ");
    scanf("%d",&n);
    
    int i;
    printf("Enter the n elements:");
    for(i=0; i<n; i++){
      scanf("%d",&arr[i]);
    }
    //Calculate Sum
    int sum = 0;
    for(i=0; i<=n; i++){
        sum = sum + arr[i];
    }
        printf("Sum of array = %d",sum);
    
    return 0;
}
