#include <stdio.h> 
#pragma warning ( disable : 4996 )

// 메인 함수 : 프로그램의 최초 진입점 ( Entry Point )
//             항상 중괄호의 시작과 끝으로 표시된다.

void main(void)
{
	// 헝가리안 표기법. 
	// 대표적으로 int는 i 나 n 둘중에 하나
	// float 은 f
	// char 은 ch
	// 변수 앞에 접두사로 붙인다.
	int   nData;
	float fData;		

	int rval ;	

	//// 문자열 출력, rval는 출력된 개수 ( 확장열 포함 )
	rval = printf("1234\n5678\n");

	//// 확장열
	printf("\a \\ \" \t 1\n");
	
	printf("정수와 실수 두개의 값을 입력:");
	//// 리턴 값은 입력 받은 개수
	scanf("%d %f", &nData, &fData);

	////
	printf("입력 받은 값 정수=%d 실수=%fn", nData, fData);
	printf("입력 받은 값 16진수 %x %X\n", nData, nData);

	////
	printf("정수를 입력 ( 16진수 : 예 0xA ):");

}
