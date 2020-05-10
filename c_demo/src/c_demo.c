#include <stdio.h>
#include <math.h>
float formula1(int a, int b, int d);
float formula2(int a, int b, int d);
float formula3(int a, int b);
int main (int args, char *argv[]){
	int  a, b, c, d;
	float x1, x2;
	printf("please input: a =>\n");
	scanf(" %d", &a);
	printf("please input: b =>\n");
	scanf(" %d", &b);
	printf("please input: c =>\n");
	scanf(" %d", &c);
	d = b * b - 4 * a * c;
	if (d > 0) { 
		x1 = formula1(a, b, d);
		x2 = formula2(a, b, d);
		printf("x1=%f, x2=%f\n", x1, x2);
	}
	else if (d == 0) {
		x1 = formula3(a, b);
		printf("x1=%f\n", x1);
	} 
	else {
		printf("has not result!");
	}
	return 0;
}

float formula1(int a, int b, int d) {
	float res = (-b + sqrt(d)) / (2 * a);
	return res;

}

float formula2(int a, int b, int d) {
	float res = (-b - sqrt(d)) / (2 * a);
	return res;
}

float formula3(int a, int b) {
	float res = -b / (2 * a);
	return res;
}
