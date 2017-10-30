#include <stdio.h>
#define MAX 1000001
int main(){
    int T,n,x,f[MAX],i,a=0,b=0;
    scanf("%d",&T);
    for(i=0;i<T;i++){
        scanf("%d",&x);
        if(x==1){
            scanf("%d",&n);
            if(b<MAX){
                f[b]=n;
                b++;
            }
        }
        if(x==2){
            if(a<b){
                a++;
            }
        }
        if(x==3){
            if(a==b){
                printf("Empty!\n");
            }
            else{
                printf("%d\n",f[a]);
            }
        }
    }
    return 0;
}
