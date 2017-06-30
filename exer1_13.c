//word lengtah distribution
//count[0] -the number of words longer than 9
//count[i] -the number of words which length is i.
//2017-6-30

#include <stdio.h>

#define LENGTH 10 

int main(){
	int count[LENGTH];
	
	int i;
	for(i = 0; i < LENGTH; i++){
		count[i] = 0;
	}

	int c;
	int state = 0;
	int length = 0;
	while((c = getchar()) != EOF){
		if(c != ' ' && c != '\t' && c != '\n'){
			state = 1;
			length++;
		}
		else{
			state = 0;
			if(length < LENGTH){
				count[length]++;
			}
			else{
				count[0]++; 
			}
			length = 0;
		}
	}

	for(i=0;i<LENGTH;i++){
		printf("%d ", count[i]);
	}
	printf("\n");
	return 0;
}
