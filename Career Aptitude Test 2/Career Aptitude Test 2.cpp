#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <Windows.h>

int main()
{
	int m = 0;//math 이과
	int l = 0;//liberal arts 문과
	int a = 0;//arts and physical education 예체능

	/*
	int k = 0;//koeran 국어
	int m = 0;//math 수학
	int e = 0;//english 영어
	*/

	int b = 0;//business 경영학
	int w = 0;//welfare 사회복지학

	int n = 0;//natural science 자연과학
	int e = 0;//electricity 전자공학

	int answer=0;

	printf("본 프로그램은 고등학생의 진로적성검사를 위한 프로그램입니다.\n");
	Sleep(1000);
	printf("질문은 총 k개가 있으며 소요시간은 대략 t분 정도입니다.\n");
	Sleep(1000);
	printf("각 질문마다 다섯 개의 답(1/2/3/4/5)을 할 수 있으며, 각각의 답은 왼쪽부터\n");
	printf("'매우 싫다', '싫다', '보통이다', '좋다', '매우 좋다'입니다.\n");
	Sleep(1000);
	printf("테스트를 시작니다.\n");
	Sleep(1000);

	printf("Q1. 새로 산 기계의 사용설명서 읽기\n");
	scanf("%d", &answer);
	m = m + (answer - 3);
	e = e + (answer - 3);

	printf("Q2. 모형비행기 조립하기\n");
	scanf("%d", &answer);
	m = m + (answer - 3);
	e = e + (answer - 3);

	printf("Q3. 전자제품 수리하기\n");
	m = m + (answer - 3);
	e = e + (answer - 3);

	printf("Q4. 직원들의 업무를 관리하고 감독하기\n");
	l = l + (answer - 3);
	e = e + (answer - 3);

	printf("Q4. 사회적 문제를 비판하고 원인 분석하기\n");
	l = l + (answer - 3);
	e = e + (answer - 3);


	return 0;
}