#include <stdio.h>
#include <stdlib.h>

void asciiprint(char m){ //in ma ASCII cua bang chu cai
	for (;m<='Z';m++){
		printf("%d ",m);
		}
	}

int main(){
	asciiprint('A');
	return 0;
}