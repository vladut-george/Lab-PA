#include <stdio.h>

int function(int x){
	x = x-2;
	return x;
}

int main(){
	int a=30, i=0;
	
	while (a>0){
		a=function(a);
		i++;
	}
	printf("%d", i - 1);
	return 0;	
}

