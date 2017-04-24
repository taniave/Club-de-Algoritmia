#include <stdlib.h>

typedef struct nodo{
	int x;
	struct nodo *next;
}tnodo, *ptrNodo;

typedef struct{
	ptrNodo top, tail;
}tcola, *cola;

int isEmpty(cola c){
	return (c->top==NULL);
}

void push(cola c,int num){//ingresar
	ptrNodo new = (ptrNodo) malloc(sizeof(tnodo));
	new->x=num;
	new->next=NULL;

	if(isEmpty(c))
		c->top=c->tail=new;
	else{
		c->tail->next=new;
		c->tail=new;
	}
}

int pop(cola c){//sacar
	int temp = c->top->x;
	ptrNodo aux = c->top;
	c -> top = c -> top -> next;
	free(aux);
	return temp;
}

cola initCola(){
	cola c = (cola) malloc(sizeof(tcola));
	c->top=c->tail=NULL;
	return c;
}