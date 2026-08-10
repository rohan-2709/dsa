#include<stdio.h>
int low , high , size , mid , target , arr[100];
void binsea(int low , int high){
    do{
    int mid=(low + high)/2;
    
    if(target==arr[mid]){
        printf("The number is found\n");
    }
    else if(target < arr[mid]){
        binsea(low , mid-1);
    }
    else if(target > arr[mid] ){
        binsea(mid+1 , high);
    }
    }
    while(low < high);
{
    printf("The number is not found\n");
    return;
}
}

int main(){
    printf("Enter size of the array\n");
    scanf("%d" , &size);
    
    printf("Enter the elemnts of the array\n");
   for(int i = 0; i < size; i++)
{
    scanf("%d", &arr[i]);
}
    
    printf("Enter the target:");
    scanf("%d" , &target);
    
    binsea(0 , size-1);
}
