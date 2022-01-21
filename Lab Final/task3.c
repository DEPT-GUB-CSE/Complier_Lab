#include<stdio.h>
#include<string.h>

int main()
{
    char str[100];
    int check =0, check_a =0;
    printf("Enter a String: ");
    gets(str);
        for(int i=0;i<strlen(str);i++)
        {
            if(str[i] == 'a')
            {
                check_a =1;
                continue;
            }
            else if( check_a ==1 && str[i] == 'b')
            {
                continue;
            }
            else if( check_a ==1 && str[i] == 'c')
            {
                check=1;
                printf("accepted through a+b*c+\n");
                break;
            }
            else{
                check=0;
            }
        }
    if(check ==0){
        printf(" not accepted through a+b*c+\n");
    }
    return 0;
}
