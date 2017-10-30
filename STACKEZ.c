#include <stdio.h>
#define MAX 1000001
int main(){
    int T,n,x,f[MAX],i,b=0;
    scanf("%d",&T);
    for(i=0;i<T;i++){
        scanf("%d",&x);
        if(x==1){
            scanf("%d",&n);
            if(b<MAX){
                b++;
                f[b]=n;
            }
        }
        if(x==2){
            if(b>0){
                b--;
            }
        }
        if(x==3){
            if(b==0){
                printf("Empty!\n");
            }
            else{
                printf("%d\n",f[b]);
            }
        }
    }
    return 0;
}
