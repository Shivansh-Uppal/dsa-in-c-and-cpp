#include <stdio.h>
#include<iostream>
int main(){
int arr[10]={1,3,9,5,4,6,7,10,8,2},max=arr[0];
for(int i=0;i<10;i++){
    if(max<arr[i]){
         max=arr[i];
    }
}
int arr2[max]={0};
/*for(int i=0;i<10;i++){
    for(int j=i+1;j<10;j++){
    if(arr[i]+arr[j]==10){
       printf("%d+%d=10\n",arr[i],arr[j]);
   }
}
}*/
for(int i=0;i<10;i++){
    if(arr2[10-arr[i]!=0]){
        printf("%d+%d=10\n",arr[i],10-arr[i]);
    }
    arr2[arr[i]]++;
}
return 0;
}