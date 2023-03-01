#include<stdio.h>
//function structure---> return type --void, int char float char[]


//No parameter + No return
void welcome()
{
    printf("hi\n");
}



//parameter + no return 
void printNumber(int x,int y) //a---x, b---y
{
    printf("The numbers are %d and %d\n",x,y);
}



//parameter  + return
int sum(int x, int y)
{
    return x+y;
}

int sub(int x ,int y)
{
    return x-y;
}


float far(float c)
{
    float f=((9*c+5*32)/5);
    return f;
}
char dadu(int joy)
{
  return joy + 32 ;
}

int main()
{
    welcome();
    int a,b;
    float c;
    int z;
    scanf("%d %d",&a,&b);
    scanf("%f",&c);
     scanf("%d",&z);
    printNumber(a,b); 
    int s = sum(a,b);
    printf("%d\n",s);
    int subs=sub(a,b);
    printf("%d\n",subs);
    float farenhite=far(c);
    printf("%f\n",farenhite);
    char asscci = dadu(z);
    printf("%c\n",asscci);
    return 0;
}