#include <stdio.h> 

// 메인 함수 : 프로그램의 최초 진입점 ( Entry Point )
//             항상 중괄호의 시작과 끝으로 표시된다.

void main(void)
{
	// 변수를 선언할 때 초기값을 먼저 넣어주고 사용하는게 나중에 문제가 생길 사고를 미연에 방지할 수 있다.
/*
	ex)
	int a = 0;
	float b = 0.0f;
	char c = '\0';
*/

	// 변수의 선언과 정의를 동시에!
	int positiveNumber = 2002;
	int negativeNumber = -2002;

	// 위에 선언된 변수들을 재정의 함.
	positiveNumber = 2003;
	negativeNumber = -2003;	

	// 물론 선언을 먼저하고 정의를 나누는 것도 가능하다!
	int good;
	int nice;

	good = 1000;
	nice = -1000;
}
