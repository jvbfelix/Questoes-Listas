#include <stdio.h>

long long h[100001];
int tam=0;
void heapfy(int i);
void rem();
void fazheap();
void add(long long n);

int main(){
    char T;
    int Ni,cont;
    long long p;
    scanf("%d",&T);
    while(T>0){
        scanf("%d",&Ni);
        tam=0;
        cont=0;
        while(Ni>0){
            scanf("%lld",&p);
            if(p==1){
                cont++;
            }
            else{
                add(p);
            }
            Ni--;
        }
        fazheap();
        for(p=0;p<cont;p++){
            printf("1 ");
        }
        if(tam==2 && h[1]==3 && h[2]==2){
            printf("2 3");
        }
        else{
            while(tam>0){
            rem();
            }
        }
        printf("\n");
        T--;
    }
    return 0;
}
void add(long long n){
    tam++;
    h[tam]=n;
}
void fazheap(){
    int i;
    for(i=tam/2;i>=1;i--){
        heapfy(i);
    }
}
void rem(){
    int t;
    if(tam==0){
        return;
    }
    printf("%lld ",h[1]);
    t=h[tam];
    h[tam]=h[1];
    h[1]=t;
    tam--;
    heapfy(1);
}
void heapfy(int i){
    int maior;
    long long t;
    while(2*i<=tam){
        if(2*i<tam){
            if(h[2*i]>h[(2*i)+1]){
                maior = 2*i;
            }
            else{
                maior = (2*i)+1;
            }
        }
        else{
            maior = (2*i);
        }
        if(h[i]<h[maior]){
            t=h[maior];
            h[maior]=h[i];
            h[i]=t;
            i=maior;
        }
        else{
            i=3*tam;
        }
    }
}
