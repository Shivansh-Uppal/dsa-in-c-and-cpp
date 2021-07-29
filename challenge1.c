#include <stdio.h>
#include <stdlib.h>
struct array{
    int a[20];
    int size;
    int length;
};
void missing(struct array *arr1){
    int i=arr1->a[0],j=0;
    while(arr1->length !=j){
        if(arr1->a[j]!=i){
          printf("%d ",i);
          i++;
          continue;
        }
        i++;
        j++;
    }
    printf("\n");
    for(int l=0;l<arr1->length;l++){
        printf("%d ",arr1->a[l]);
    }

    }

int main(){
      struct array arr1={{6,21,22,23,24,25,26,27,28,29,30},14,11};
      missing(&arr1);
return 0;
}