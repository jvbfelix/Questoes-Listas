#include <stdio.h>
#define MAX 1100001
void fib(int x,int y);
int f[MAX];
int main(){
    int x,y,i;
    char n;
    f[0]=0;
    f[1]=0;
    f[2]=1;
    for(i=3;i<MAX;i++){
        f[i]=(f[i-1]+f[i-2])%100000;
    }
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d %d",&x,&y);
        printf("Case %d:",i+1);
        fib(x,y);
        if((i+1)!=n){
            printf("\n");
        }
    }
    return 0;
}

void fib(int x,int y){
    y=x+y;
    int i,v[MAX],j=0,k;
    for(i=0;i<MAX;i++){
        v[i]=0;
    }
    for(i=x;i<=y;i++){
        v[f[i]]++;
    }
    k=y;
    if(y>100)
        k=100;
    for(i=0;i<=MAX;i++){
        for(j=0;j<v[i];j++){
            printf(" %d",i);
            k--;
            if(k==0){
                return;
            }
        }


    }
}
