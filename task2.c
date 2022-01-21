#include<stdio.h>
#include<string.h>

int main()
{
    char rela_op[] = "><==!=>=<=";
    char str[100];

    printf("Enter a String: ");
    gets(str);

    for(int i=0;i<strlen(str);i++)
    {
        for(int j=0;j<strlen(rela_op);j++)
        {

            if(str[i] == rela_op[j] && str[i+1] == rela_op[j+1] && j==2)
            {
                printf("'%c%c' is Equal to Relational Operator.\n",str[i],str[i+1]);
                i++;
                break;
            }
            else if(str[i] == rela_op[j] && str[i+1] == rela_op[j+1] && j==4)
            {
                printf("'%c%c' is Not equal to Relational Operator.\n",str[i],str[i+1]);
                i++;
                break;
            }
            else if(str[i] == rela_op[j] && str[i+1] == rela_op[j+1] && j==6)
            {
                printf("'%c%c' is Greater than or equal to Relational Operator.\n",str[i],str[i+1]);
                i++;
                break;
            }
            else if(str[i] == rela_op[j] && str[i+1] == rela_op[j+1] && j==8)
            {
                printf("'%c%c' is Less than or equal to Relational Operator.\n",str[i],str[i+1]);
                i++;
                break;
            }
            else if(str[i] == rela_op[j] && str[i+1] != '=' && j==0)
            {
                    printf("'%c' is Greater than Relational Operator.\n",str[i],str[i+1]);
                    i++;
                    break;
            }
            else if(str[i] == rela_op[j] && str[i+1] != '=' && j==1)
            {
                    printf("'%c' is Less than Relational Operator.\n",str[i],str[i+1]);
                    i++;
                    break;
            }

        }

    }
    return 0;
}
