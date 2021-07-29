#include <stdio.h>
#include<stdlib.h>
struct array{
     int a[20];
     int size;
     int length;
};
void merge(struct array *arr1,struct array *arr2){
      struct array *arr3=(struct array *)malloc(sizeof(struct array));
      int i=0,j=0,k=0;
    while(i<arr1->length && j<arr2->length){
        if(arr1->a[i]<arr2->a[j]){
            arr3->a[k++]=arr1->a[i++];
        }
        else{
            arr3->a[k++]=arr2->a[j++];
        }
    }
    arr3->length=arr1->length+arr2->length;
    arr3->size=arr1->length+arr2->length+4;
    for(;i<arr1->length;i++){
        arr3->a[k]=arr1->a[i];
    }
    for(;j<arr2->length;j++){
        arr3->a[k]=arr2->a[j];
    }
    for(int l=0;l<arr3->length;l++){
           printf("%d ",arr3->a[l]);
    }
    free(arr3);
}
int main(){
      struct array arr1={{2,6,10,15,25,26},10,6};
      struct array arr2={{3,4,7,18,20,27},10,6};
     
      merge(&arr1,&arr2);
     
return 0;
}
