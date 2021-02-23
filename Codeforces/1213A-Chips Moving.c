/*
    written by Pankaj Kumar.
    country:-INDIA
*/
#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main()
{
    int n,min_coin=1000,temp,coin=0,c;
    scanf("%d",&n);
    int *p=(int *)malloc(n*sizeof(int));
    for(int i=0;i<n;i++)
    {
        scanf("%d",(p+i));
    }
    if(n!=1)
    {
           for(int i=0;i<n;i++)
    {
        coin=0;
        for(int j=0;j<n;j++)
        {
            c=(i-*(p+j));
            if(c%2!=0)
                coin++;

        }
        if(min_coin>coin)
        {
            temp=coin;
            coin=min_coin;
            min_coin=temp;
        }
    }
    printf("%d \n",min_coin); 
    }
    else
        printf("0");
    return 0;
}