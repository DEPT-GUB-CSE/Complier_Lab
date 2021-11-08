#include<stdio.h>
#include<conio.h>

int main()
{
    char com[200];
    char line_num[50];
    int i, j=0, k,check=0,count=0,line=1;
    printf("Enter a multi line Comment( press ';' to end input): \n");
    scanf("%[^;]s", com);
    for(i=0;i<strlen(com);i++){
        if(com[i]== '/' && com[i+1]=='/')
        {
            check=1;
            line_num[j]= line;
            j++;
            i=i+1;
        }
        else if(com[i]== '/' && com[i+1]=='*')
        {
            for(k=i+2;k<strlen(com);k++){
                if(com[k]== '*' && com[k+1]=='/'){
                    line_num[j]= line;
                    j++;
                    check=1;
                    i=k+1;
                }
            }
        }
        if(com[i]=='\n')
            {
                line++;
            }
    }
    if(check==0)
    {
        printf("There is no comment.\n");
    }
    else{
        for(int l=0;l<strlen(line_num);l++)
        {
            printf("Comments are written in line no. %ch\n",line_num[l]);
            count++;
        }
        printf("The total number of line where the comments are written is, %d \n",count);
    }
    return 0;
}

