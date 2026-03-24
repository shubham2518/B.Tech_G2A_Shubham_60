#include <stdio.h>
int main(){
    
    int n, arr[100];
    
    printf("Enter the size of array : ");
    scanf("%d",&n);
    
    int i;
    printf("Enter the marks of students : ");
    for(i=0; i<n; i++){
      scanf("%d",&arr[i]);
    }
    //marks below 35
    printf("The students whose marks are below 35 : ");
    for(i=0; i<n; i++){
        if(arr[i]<35){
            printf("%d ",arr[i]);
        }
    }     
    return 0;
}

// if we want to print roll no.{index} of students whose marks is below 35 write [printf("%d ",i)]
