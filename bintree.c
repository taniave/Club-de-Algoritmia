#include <stdio.h>

int main(){
	int c,a,b,cont,i;

	scanf("%d",&c);
	for(i=0;i<c;i++){
		scanf("%d %d",&a,&b);
		cont=0;
		while(a!=b){
			if(a>b){
				a/=2;	
				}
				
			else{
				b/=2;
			}	
			cont++;
		}
			printf("%d\n",cont);
	}
	return 0;
}