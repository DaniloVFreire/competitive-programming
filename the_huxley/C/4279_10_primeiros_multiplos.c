#include <stdio.h>

int main(){
	int input;
	scanf("%d",&input);
	int output;
	for(int i = 1; i <= 10; ++i){
		output = input * i;
		printf("%d\n", output);
	}
	return 0;
}
