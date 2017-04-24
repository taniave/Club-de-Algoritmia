#include <stdio.h>
#include "queue.h"

int main(){
	int n;
	cola r = initCola();
	while(scanf("%d",&n) && n != 0){
		push(r,n);

	}

	while(isEmpty(r)!=1){
		printf(" %d ", pop(r));
	}

	return 0;
}