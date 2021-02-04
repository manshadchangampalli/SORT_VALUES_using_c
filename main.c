/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
   int values[100];
   int j,i,temp,limit;
   printf("enter the limit ");
   scanf("%d",&limit);
   printf("enter the values ");
   for(i=0;i<limit;i++){
       scanf("%d",&values[i]);
   }
   for(i=0;i<limit-1;i++){
       for(j=i+1;j<limit;j++){
           if(values[i]>values[j]){
               temp=values[i];
               values[i]=values[j];
               values[j]=temp;
               
           }
       }
          
   }printf("the values are \n");
     for(i=0;i<limit;i++){
printf("%d  ",values[i]);}
    return 0;
}
