#include<stdio.h>

int main() {
    int l,r;
    scanf("%d %d",&l,&r);
    int a, b, i;
    int temp = r-l,arr_size=0, coun=0;

    for(int k=1;k<=temp+1;k++)
    {
        arr_size = arr_size + k;
    }
    int arr[arr_size];
    for(a=l;a<=r;a++)
    {
        for(b=a;b<=r;b++)
        {
            arr[coun]=a^b;
            coun++;
        }
    }

    int max_xor = arr[0];
    for(i=0;i<arr_size;i++)
    {
        if(max_xor<arr[i])
        {
            max_xor = arr[i];
        }
    }
    printf("%d",max_xor);
    return 0;
}
