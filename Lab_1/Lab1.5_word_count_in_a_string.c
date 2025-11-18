#include<stdio.h>
int main()
{
    char a[100];
    gets(a);
    int count=0,word=0;
    for(int i=0; a[i]!='\0';i++)
    {
        if(a[i]==' '||a[i]=='\t'|| a[i]=='\0')
        {
            i++;
            word=0;
        }
        else if (word==0)
        {
            count++;
            word=1;
        }
    }
    printf("%d", count);
    return 0;
}
