/*
	written by Pankaj Kumar.
	country:-INDIA
*/
#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,m;
        scanf("%d%d",&n,&m);
        int a[n],i,max=-1,sum=0,j;
        for(i=0;i<n;i++){
            scanf("%d",&a[i]);
            if(max<=a[i]){
                max = a[i];
            }
        }
        for(j=0;j<n;j++){
            sum += (max - a[j]);
        }
        if(sum == m){
            printf("Yes\n");
        }
        else if(sum>m){
            printf("No\n");
        }
        else{
            int rem = m - sum;
            if(rem%n == 0){
                printf("Yes\n");
            }
            else{
                printf("No\n");
            }
        }
    }
    return 0;
}