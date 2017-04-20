#include <stdlib.h>


typedef struct nodo{
	StackData data;
	struct nodo *next;
}tnodo, *ptrNodo;


typedef struct{
	ptrNodo top;
}tstack, *stack;


Stack initStack(){
	Stack s= (Stack) malloc(sizeof(tstack));
	s->top=NULL;
	return s;
}


void push(stackData d, Stack s){
	ptrNoo new = (ptrNodo) malloc(sizeof(tnodo));
	new->data = d;
	new->next = s->top;
	s->top = new;
}


Stackdata pop (Stack s){
	if(s->top == NULL)
		exit(1);
	else{
		StackData num = s->top->data;
		ptrNodo temp = s->top;
		s->top = s->top->next;
		free(temp);
	}
	return num;
}


int isEmpty(Stack s){
	if(s->top == NULL)
		return 1;
	else
		return 0;
}


