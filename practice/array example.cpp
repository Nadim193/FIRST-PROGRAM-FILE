#include <stdio.h>
int main(){

   int n[10]; /* n is an array of 10 integers */
   int i,j;
   for (i=0;i<10;i++){
      n[i]=i+100; /* set element at location i to i + 100 */
   }
   /* output each array element's value */
   for (j=0;j<10;j++){
        cout<<"Element["cout<<j"]="<<n[i];
   }

   return 0;
}

