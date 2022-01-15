#include<stdio.h>
int main(){
    int i, arr[5] = {5,10,15,20,25};
    for(i=0;i<5;i++){
        printf("Value of arr[%d] = %d\n",i,*(arr+i));
        printf("Address of arr[%d] = %p\n" , i,arr+i);
    }
}
