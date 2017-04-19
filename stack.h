#include <stdlib.h>

typedef struct nodo{
	int num;
	struct nodo *next;
}Tnodo, *ptrNodo;

typedef struct{
	ptrNodo top;
}Tstack, *stack;

void push(stack s, int n){
	ptrNodo new = (ptrNodo) malloc(sizeof(Tnodo));
	new -> num = n;
	new -> next = s -> top;
	s -> top = new;
}

int pop(stack s){
	int valor = s -> top -> num;
	ptrNodo temp = s -> top;
	s -> top = s -> top -> next;
	free(temp);
	return valor;
}

int empty(stack s){
	if(s -> top == NULL)
		return 1;
	else
		return 0;
}

stack init(){
	stack s = (stack) malloc (sizeof(Tstack));
	s -> top = NULL;
	return s;
}