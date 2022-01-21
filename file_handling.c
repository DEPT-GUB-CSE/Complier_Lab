#include<stdio.h>

int main()
{
    FILE *ptr = NULL;
    ptr = fopen("textfile.txt","r");
    printf("%s",ptr);
    return 0;

}
