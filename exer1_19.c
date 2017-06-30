//reverse string.
//2017-6-30

#include<stdio.h>
#define MAXLINE 100

int getlines(char s[], int limit);
void reverse(char s[], int length);

int main(){
	char line[MAXLINE];
	int length;
	while((length = getlines(line, MAXLINE)) > 0){
		reverse(line,length);
		printf("%s", line);
	}
	return 0;
}

int getlines(char s[], int limit){
	int c;
	int i = 0;
	while((c = getchar()) != EOF){
		s[i++] = c;
		if(c == '\n')
			break;
	}
	return i;
}

void reverse(char s[], int length){
	int i = 0;
	while(i< (length-2-i)){
		char t = s[i];
		s[i] = s[length-2-i];
		s[length-2-i] = t;
		i++;
	}
}
