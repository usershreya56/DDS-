#include <stdio.h>
#include<stdlib.h>
int main() {
   int n;
   printf("enter the size of array ; \n ");
   scanf("%d",&n);
   int * arr = (int*)malloc(n * sizeof(int));
   
  for(int i=0; i<=n;i++){
      printf("enter the value at arr[%d] index = ",i);
      scanf("%d",&arr[i]);
     
  }
   for(int i=0;i<=n;i++){
       printf("%d \n",arr[i]);
   }
    return 0;
}
