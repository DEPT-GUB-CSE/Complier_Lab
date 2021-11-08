#include<stdio.h>

int main() {
   char inputString[128];

   printf("Enter a multi line string( press ';' to end input)\n");
   scanf("%[^;]s", inputString);

   //printf("Input String = %s", inputString);
   for(int i=0;i<strlen(inputString);i++)
   {
       printf("%c",inputString[i]);
       if(inputString[i]== '\n')
       {
           break;
       }
   }
   return 0;
}
