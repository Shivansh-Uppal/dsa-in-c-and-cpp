#include <stdio.h>
#include<stdlib.h>
struct array{
    int a[20];
    int size;
    int length;
};
    void display(struct array arr)
    {
     int i;
     printf("elements are\n");
     for(i=0;i<arr.length;i++)
     printf("%d ",arr.a[i]);
     printf("\n");
     return;
}
    void append(struct array *arr,int x){
        if(arr->length<arr->size)
        arr->a[arr->length++]=x;
    }
     int delete(struct array *arr,int index){
         int x=0;
         if(index>=0 && index<arr->length)
         x=arr->a[x];
         for(int i=index;i<arr->length-1;i++){
               arr->a[i]=arr->a[i+1];
               
         }
         arr->length--;
         return x;
     }
int main(){
     struct array arr={{2,3,4,5,6},10,5};
     int n;

     
     append(&arr,10);
     display(arr);
     delete(&arr,1);
     display(arr);
return 0;
}