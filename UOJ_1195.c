#include <stdio.h>
#include <stdlib.h>

typedef struct{
    struct Ele *esq;
    struct Ele *dir;
    int valor;
}Ele;

void inserir(Ele **Raiz,int num);
void ordem (Ele *Raiz);
void pre (Ele *Raiz);
void pos (Ele *Raiz);

int main(){
    Ele *Raiz;
    int n,c,x,i;
    scanf("%d",&c);
    for(i=0;i<c;i++){
    Raiz=NULL;
    scanf("%d",&n);
    while(n>0){
    	scanf("%d",&x);
    	inserir(&Raiz,x);
    	n--;
    }
    printf("Case %d:",i+1);
    printf("\nPre.:");
    pre(Raiz);
    printf("\nIn..:");
    ordem(Raiz);
    printf("\nPost:");
    pos(Raiz);
    printf("\n\n");
    }
    return 0;
}
void inserir(Ele **Raiz,int num){
    if(*Raiz == NULL){
        Ele *aux;
        aux=(Ele*)malloc(1*sizeof(Ele));
        aux->valor=num;
        aux->dir=NULL;
        aux->esq=NULL;
        *Raiz=aux;
        return;
    }
    if(num < (*Raiz)->valor){
        inserir(&(*Raiz)->esq,num);
        return;
    }
    if(num > (*Raiz)->valor){
        inserir(&(*Raiz)->dir,num);
        return;
    }
}
void ordem (Ele *Raiz){
	if(Raiz==NULL){
		return;
	}
	ordem (Raiz->esq);
	printf(" %d",Raiz->valor);
	ordem(Raiz->dir);
}
void pre (Ele *Raiz){
	if(Raiz==NULL){
		return;
	}
	printf(" %d",Raiz->valor);
	pre (Raiz->esq);
	pre (Raiz->dir);
}
void pos (Ele *Raiz){
	if(Raiz==NULL){
		return;
	}
	pos (Raiz->esq);
	pos (Raiz->dir);
	printf(" %d",Raiz->valor);
}
