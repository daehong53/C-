#include <stdio.h>

void main()
{
	int a, b, c, d;

	//// 부호 연산자
	c = 1; // c = +1;
	d = -1;

	//// 증감 연산자
	a = c++ * 2;
	b = ++c * 2;

	//// 부호 연산자
	d = -d;  // d = d * -1;

	printf("c++ * 2 = %d\n", a); // 1 * 2, c = 2
	printf("++c * 2 = %d\n", b); // 3 * 2 
	printf("d = %d\n", d);
}
