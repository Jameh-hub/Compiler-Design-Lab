#include<stdio.h>
#include<string.h>

int main()
{
    char a[250];
    gets(a);
    int l= strlen(a);
    printf("%d",l);
    return 0;

}
