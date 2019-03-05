// and function as an argument to another function
#include<stdio.h>

void crintff(int a,void (pptt)())
{
    pptt(a);
}
void printff(int a)
{
    printf("%d\n",a);
}
int main()
{
    int a=2;
    printff(a);
    crintff(a,printff);

}
