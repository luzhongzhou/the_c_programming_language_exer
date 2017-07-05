#include<stdio.h>
#define LINE 80

int main(){
	char s[LINE];
	while(scanf("%s", s) != EOF)
		printf("%s\n", s);

	return 0;
}
