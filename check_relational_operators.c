#include<stdio.h>
#include<conio.h>


int main()
{

    char arr[30];
    int i, check=0;
    printf("\n Enter any operator:");
    gets(arr);
    for(i=0;i<30;i++)
    {
        if(arr[i]== '>')
        {
            if(arr[i+1]== '=')
            {
                printf("\nGreater than or equal");
                check = 1;
                i++;
            }
            else{
                printf("\nGreater than");
                check = 1;
            }
        }
        else if(arr[i]== '<')
        {
            if(arr[i+1]== '=')
            {
                printf("\nless than or equal");
                check = 1;
                   i++;
            }
            else{
                printf("\nless than");
                check = 1;
            }
        }
         else if(arr[i]== '&' && arr[i+1] == '&')
        {
            printf("\nLogical ADD");
            check = 1;
            i++;
        }
        else if(arr[i]== '|' && arr[i+1] == '|' )
        {
            printf("\nLogical OR");
            check = 1;
            i++;
        }
        else if(arr[i]== '=' && arr[i+1]== '=')
        {
            printf("\nEqual to");
            check = 1;
            i++;
        }
        else if(arr[i]== '!' && arr[i+1]== '=')
        {
            printf("\nNot equal to");
            check = 1;
            i++;
        }
    }
    if(check== 0)
    {
        printf("\nIt's not a Relational Operator!");
    }
    return 0;
}
