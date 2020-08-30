#include <stdio.h> 

// 메인 함수 : 프로그램의 최초 진입점 ( Entry Point )
//             항상 중괄호의 시작과 끝으로 표시된다.

// 매크로 선언
// main 함수 위에 선언 되어있기 때문에 main 함수보다 먼저 생성된다.
// 그래서 전처리기 (먼저 처리해준다)라고도 불리운다.
#define PAI 3.141592

void main(void)
{
	const int a = 2002;
	const float PI = 3.141592f;
	
	// char 자료형은 항상 '\0'(영어로 NULL, 한글로 널) 이라는 기호로 초기화 해준다.
	char ch = '\0'; 

	// 접미사 f를 붙이지 않았을 경우 어떤 값이 들어가는지 확인!
	const float PII = 3.141592;	
	
	// 상수는 선언과 정의가 동시에 처리되며 재정의는 할 수 없다.
	a = 2003;

	char ch1 = 'a'; // ASCII 코드 표의 문자 a, 10진수 97, 16진수 61
	char ch2 = 129; // 범위 값을 초과한다. -127
	unsigned char ch3 = 98;
}
