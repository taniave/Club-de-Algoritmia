#include <stdio.h>
#include "stack.h"

int main(){
	int c, n;

	stack s = init();

	scanf("%d",&c);

	while(c--){
		scanf("%d",&n);
		push(s, n);
	}

	while(!empty(s)){
		printf(" %d ", pop(s));
	}
	printf("\n");

	return 0;
}