
#include<stdio.h>
#include<string.h>
int main()
{
    char str1[10]="vidya";
    char str2[10]="shree";
    if(strcmp(str1,str2)>0)
        printf("%s %s",str1,str2);
    else
        printf("different");
    return 0;
}
