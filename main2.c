#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int sum(int x, int y){
	return x+y;
}

int sub(int x, int y){
	return x-y;
}

int mul(int x, int y){
	return x*y;
}

int div1(int x, int y){
	return x/y;
}


int main(int argc, char *argv[]) {
	
	int number1, number2;
	char sign;
	int (*calcfunc)(int, int);
	
	printf("숫자, 기호, 숫자를 입력하십시오        \n");
	scanf("%d %c %d", &number1, &sign, &number2);

	switch(sign){
		case '+':
			calcfunc = sum;
			break;
			
		case '-':
			calcfunc = sub;
			break;
		case '*':
			calcfunc = mul;
			break;
		case '/':
			calcfunc = div1;
			break;
			
	}
	printf("result: %i \n", calcfunc(number1, number2));
	return 0;
}

