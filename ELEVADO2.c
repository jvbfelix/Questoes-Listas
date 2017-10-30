#include <stdio.h>

int main() {
    int N,C,S,E,P=0;
    scanf("%d %d",&N,&C);
    while (N>0){
        scanf("%d %d",&S,&E);
        P=P-S;
        P=P+E;
        if(P>C){
            printf("S");
            return 0;
        }
        N--;
    }
    printf("N");
    return 0;
}
