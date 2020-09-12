#include <stdio.h>

//// 대입연산자

void main()
{
	int a, b, c, d, e;

	a = 10;
	b = 20;
	c = 30;
	d = 40;
	e = 50;

	a += 20; /* a = a + 20; */
	b -= 10; /* b = b - 10; */
	c *= 5;  /* c = c * 5;  */
	d /= 4;	/* d = d / 4;  */
	e %= 5;  /* e = e % 5;  */

	printf("a += 20 : %d\n", a);
	printf("b -= 10 : %d\n", b);
	printf("c *= 5  : %d\n", c);
	printf("d /= 4  : %d\n", d);
	printf("e %%= 5  : %d\n", e);
}
