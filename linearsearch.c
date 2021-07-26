#include <stdio.h>
struct array{
    int a[20];
    int size;
    int length;
};

void  linearSearch(struct array *arr,int x){
      int i=0;
      
      while(arr->length>=0){
          if(arr->a[i]==x){
             
             printf("found element %d at position %d\n ",arr->a[i],i);
             return;
          }
           if(arr->a[i]!=x && arr->length==0){
              printf("not found\n");
          }
        i++;
        arr->length--;
      }
      
      } 



int main(){
   struct array arr={{2,4,6,6,3},10,5};

   linearSearch(&arr,1);

return 0;
}