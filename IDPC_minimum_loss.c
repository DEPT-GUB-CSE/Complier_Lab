#include<stdio.h>

int main()
{
    int n,count=0;
    scanf("%d",&n);
    long int price[n];
    int size = (n/2*(1+n))-1;
    int loss[size];
            for(int i=0;i<n;i++)
        {
            scanf("%ld",&price[i]);
        }

        for(int j=0;j<n-1;j++)
        {
            for(int k=j+1;k<n;k++)
            {
                if(price[j] > price[k])
                {
                    loss[count] = price[j]- price[k];
                    count++;
                }
            }
        }

        int min_loss = loss[0];

        for(int l=0;l<count;l++)
        {
            if(min_loss>loss[l]){
                min_loss = loss[l];
            }
        }
        printf("%d\n",min_loss);
    return 0;
}
