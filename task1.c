#include<stdio.h>
#include<conio.h>

int main()
{
    char com[100];
    int i, j, k, check=0, count=0;
    printf("Enter Comment: ");
    gets(com);
    for(i=0;i<strlen(com);i++){
        if(com[i]== '/' && com[i+1]=='/') //sakib
        {
            for(j=i+2;j<strlen(com);j++)
            {
                count++;
            }
            printf("This is a Single line comment.\n");
            printf("%d numbers of letters are in this comment.\n",count);
            check=1;
            break;
        }
        else if(com[i]== '/' && com[i+1]=='*')
        {
            for(k=i+2;k<strlen(com);k++){
                if(com[k]== '*' && com[k+1]=='/'){  /* sakib */ // i=6 i=7 k=8 k=13 <*> k+1=14 k=12
                    count=(k-1)-(i+1);
                    printf("This is a Multi line Comment!\n");
                    printf("%d numbers of letters are in this comment.\n",count);
                    check=1;
                    break;
                }
            }
        }
    }
    if(check==0)
    {
        printf("This is not a comment!\n");
    }
    return 0;
}
