#include<stdio.h>
int main(){
    int i,arr[10]={1,2,5,12,7,20,34,68,16,9};
    int small,large;
    small=large=arr[0];
    for(i=0;i<10;i++){
        if(arr[i] < small){
            small = arr[i];
        }
        if(arr[i] > large){
            large = arr[i];
        }
    }
    printf("Smallest = %d , Largest = %d",small,large);
}
