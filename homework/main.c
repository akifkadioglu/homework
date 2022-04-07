#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void toplamaislemi();

int main(int argc, char *argv[]) {
	int a;
	int b;
	printf("please give me a number:\n");
	scanf("%d",&a);
	printf("please give me a number again:\n");
	scanf("%d",&b);
	toplamaislemi(a,b);
	return 0;
}
void toplamaislemi(a,b){
	printf("result:\n%d",a+b);
}
