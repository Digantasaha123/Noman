#include<stdio.h>
int main()
{
    int array[4],count=0;;
    for(int i=0;i<4;i++)
     {
        scanf("%d",&array[i]);
      if (array[i]>=10)
       count++;
     }
     printf("%d",count);


    return 0;
}