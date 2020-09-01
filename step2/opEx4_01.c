#include <stdio.h>

//// 산술 연산자

void main()
{
	int a, b, c, g;
	float d, e, f;

	a = 10;
	b = 3;
	d = 3.0f;

	//// 나누기 ( 정수형 )
	c = a / b;

	//// 나머지 연산
	g = a % b;

	//// 나누기 ( 부동형 )
	e = a / d;

	//// 곱하기 ( 부동형 )
	f = a * d;

	//// 더하기
	a = a + 1;

	printf("a = %d, b = %d, d = %.1f", a - 1, b, d);
	printf("\na / b = %d", c);
	printf("\na %% b = %d", g);
	printf("\na / d = %f", e);
	printf("\na * d = %f", f);
	printf("\na + 1 = %d\n", a);
}
