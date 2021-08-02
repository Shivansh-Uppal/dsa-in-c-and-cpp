#include <stdio.h>
#include<iostream>
#include<stdlib.h>
int main(){
    int n,max;
    printf("enter elements u want: ");
    scanf("%d",&n);
    int arr[n];
    printf("enter array elements: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
            }
            max=arr[0];
            for(int i=0;i<n;i++){
                if(max<arr[i]){
                    max=arr[i];
                }
            }

int arr2[max]={0};
for(int i=0;i<n;i++){
    arr2[arr[i]]++;
}
printf("\n");
for(int i=0;i<6;i++){
    if(arr2[i]>1){
        printf("element %d is repeated %d times\n",i,arr2[i]);
    }
}
return 0;
}