#include <stdio.h>

int main (void){
	
	while(1){
		printf("Hello world!");
		
		for(int i = 0; i<100; i++){
			__nop();
		}
	}
	
	return 0;
}

