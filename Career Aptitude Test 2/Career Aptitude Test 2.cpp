#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <Windows.h>
#include<string>


using namespace std;

int m = 0;//math 이과
int l = 0;//liberal arts 문과

int a = 0;//arts 예술

int b = 0;//business 경영학
int w = 0;//welfare 사회복지학

int n = 0;//natural science 자연과학
int e = 0;//engineering 기계공학

int answer = 0;


int kimhh(string question, char type)
{
	while (true)
	{
		printf("%s\n", question.c_str());
		scanf("%d", &answer);
		if (answer == 1 || answer == 2 || answer == 3 || answer == 4 || answer == 5)
			break;
	}

	switch (type)
	{
	case 'b': // I, b
		l = l + answer;
		b = b + (answer - 3);
		break;
	case 'w': // I, w
		l = l + answer;
		w = w + (answer - 3);
		break;
	case 'n': // m, n
		m = m + answer;
		n = n + (answer - 3);
		break;
	case 'e': // m, e
		m = m + answer;
		e = e + (answer - 3);
		break;
	case 'a': // a
		a = a + (answer - 3);
		break;
	}

	return 0;

}


int main()
{


	printf("본 프로그램은 고등학생의 진로적성검사를 위한 프로그램입니다.\n");
	Sleep(1000);
	printf("질문은 총 45개가 있습니다.\n");
	Sleep(1000);
	printf("본 프로그램에 EBSi의 진로탐색검사의 질문들이 활용되었습니다.\n");
	Sleep(1000);
	printf("각 질문마다 다섯 개의 답(1/2/3/4/5)을 할 수 있으며, 각각의 답은 왼쪽부터\n");
	printf("'매우 싫다', '싫다', '보통이다', '좋다', '매우 좋다'입니다.\n");
	Sleep(1000);
	printf("테스트를 시작니다.\n");
	Sleep(1000);

	//business
	kimhh("Q1. 리더십 프로그램 참여하기", b);
	kimhh("Q2. 경영 위기 관리하기", b);
	kimhh("Q3. 경영 관련 신문이나 잡지 읽기", b);
	kimhh("Q4. 직원들의 업무를 관리하고 감독하기", b);
	kimhh("Q5. 집단의 의견을 대변하고 관철시키기", b);
	kimhh("Q6. 모의 창업하기", b);
	kimhh("Q7. 사업 성공을 위한 전략 세우기", b);
	kimhh("Q8. 모임이나 집단에서 리더 역할하기", b);
	kimhh("Q9. 기업 경영하기", b);

	//engineering
	kimhh("Q10. 목재를 사용하여 가구 만들기", e);
	kimhh("Q11. 새로 산 기계의 사용설명서 읽기", e);
	kimhh("Q12. 모형비행기 조립하기", e);
	kimhh("Q13. 전자제품 수리하기", e);
	kimhh("Q14. 자동차 정비하기", e);
	kimhh("Q15. 컴퓨터, TV 등을 설치하기", e);
	kimhh("Q16. 전동공구 사용하기", e);
	kimhh("Q17. 고장난 자전거 수리하기", e);
	kimhh("Q18. 새로운 기술(목공, 기계조작 등) 배우기", e);

	//art
	kimhh("Q19. 애니메이션 그리기", a);
	kimhh("Q20. 학교축제에서 공연하기(춤, 노래, 연극 등)", a);
	kimhh("Q21. 작곡이나 편곡하기", a);
	kimhh("Q22. 영화 제작하기", a);
	kimhh("Q23. 미술관 관람하기", a);
	kimhh("Q24. 실내 디자인하기", a);
	kimhh("Q25. 그림 그리기", a);
	kimhh("Q26. 가구나 옷 디자인하기", a);
	kimhh("Q27. 예술사진 찍기", a);

	//natural science
	kimhh("Q28. 복잡한 문제를 논리적으로 해결하기", n);
	kimhh("Q29. 호기심을 해결하기 위해 관련 도서 또는 글 읽기", n);
	kimhh("Q30. 과학실험하기", n);
	kimhh("Q31. 과학 잡지나 서적 읽기", n);
	kimhh("Q32. 사물의 과학적 원리 탐구하기", n);
	kimhh("Q33. 수학적/과학적 원리를 실생활에 적용하기", n);
	kimhh("Q34. 한 주제에 대해 호기심을 갖고 파고들기", n);
	kimhh("Q35. 실험실이나 연구소에서 일하기", n);
	kimhh("Q36. 과학관 견학하고 체험하기", n);

	//welfare
	kimhh("Q37. 담임교사나 상담교사와 대화나누기", w);
	kimhh("Q38. 친구들의 고민을 들어주고 상담해주기", w);
	kimhh("Q39. 어린아이 돌보기", w);
	kimhh("Q40. 양로원에서 어르신 도와드리기", w);
	kimhh("Q41. 도움이 필요한 장애인 도와주기", w);
	kimhh("Q42. 청소년 문제 탐구하기", w);
	kimhh("Q43. 스스로 봉사활동에 참여하기", w);
	kimhh("Q44. 자선모금활동 참여하기", w);
	kimhh("Q45. 대인관계 향상 프로그램 참여하기", w);

	//문과:이과 백분율 비율

	float pm = (m / (m + l)) * 100;

	float pl = (l / (m + l)) * 100;


	printf("모든 질문이 끝났습니다.\n");
	Sleep(1000);
	printf("당신의 문ㆍ이과 비율은 %f:%f입니다.\n", pm, pl);
	Sleep(1000);
	printf("검사 결과 당신에게 가장 어울리는 학과는...\n");
	Sleep(3000);

	//추천학과 b, w, n, e, a

	int principle = b;

	if (w > principle)
	{
		printciple = w;
	}
	else if (n > principle)
	{
		principle = n;
	}
	else if (e > principle)
	{
		principle = e;
	}
	else if (a > principle)
	{
		principle = a;
	}

	switch (principle)
	{
	case b:
		printf("경영학과입니다!");
		break;
	case w:
		printf("사회복지학과입니다!");
		break;
	case n:
		printf("자연과학학과입니다!");
		break;
	case e:
		printf("기계공학과입니다!");
		break;
	case a:
		printf("예술학과입니다!");
		break;
	}





	return 0;
}