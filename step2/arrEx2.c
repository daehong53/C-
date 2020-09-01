#include <stdio.h> 

// 메인 함수 : 프로그램의 최초 진입점 ( Entry Point )
//             항상 중괄호의 시작과 끝으로 표시된다.

void main(void)
{
	//// int형 배열의 선언과 정의
	int n[4] = { 1, 2, 3, 4 };
	//int n[] = { 1, 2, 3, 4};
	//int n[4] = { 1, 2 };	

	//// 출력
	printf("%d %d %d %d\n", n[0], n[1], n[2], n[3]);
}
