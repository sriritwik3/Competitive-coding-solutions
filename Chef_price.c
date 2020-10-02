#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    int b[t];
    for (int i=0;i<t;i++){
        int n,k,sum=0;
        scanf("%d %d",&n,&k);
            int a[n];
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);

    for(int  i=0;i<n;i++){
        if(a[i]>k){
            sum+=a[i]-k;
            //b[i]=sum;
        }
    }
    b[i]=sum;
    }
    for(int i=0;i<t;i++){
        printf("%d\n",b[i]);
    }
}