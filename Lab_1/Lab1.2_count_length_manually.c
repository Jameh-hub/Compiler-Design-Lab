#include<stdio.h>
int main()
{
    char a[100];
    gets(a);
    int count=0;
    while(a[count]!='\0')
    {
       count++;

    }
    printf("%d",count);
    return 0;
}
