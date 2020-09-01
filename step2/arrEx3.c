#include <stdio.h> 

// 메인 함수 : 프로그램의 최초 진입점 ( Entry Point )
//             항상 중괄호의 시작과 끝으로 표시된다.

void main(void)
{
	//// 문자 배열의 초기화
	char ch1[4] = { 'G', 'A', 'M', 'E' };
	char ch2[5] = { 'G', 'A', 'M', 'E', '\0' };
	char str[] = "GAME"; // 마지막 배열요소에 NULL종료문자가 자동으로 들어간다	

	//// 출력
	printf("%c%c%c%c\n", ch1[0], ch1[1], ch1[2], ch1[3]);
	printf("%s\n", ch2);
	printf("%s\n", str);
}
