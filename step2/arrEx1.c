#include <stdio.h> 

// 메인 함수 : 프로그램의 최초 진입점 ( Entry Point )
//             항상 중괄호의 시작과 끝으로 표시된다.

void main(void)
{
	//// int형 배열 선언
	int n[10];

	//// 쓰레기 값 출력
	//printf("%d\n", n[0]);

	//// 배열의 정의 
	n[0] = 99;
	printf("%d\n", n[0]);
}
