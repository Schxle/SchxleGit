#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <Windows.h>

int main()
{
	int m = 0;//math 이과
	int l = 0;//liberal arts 문과
	int a = 0;//arts 예술

	int b = 0;//business 경영학
	int w = 0;//welfare 사회복지학

	int n = 0;//natural science 자연과학
	int e = 0;//engineering 기계공학

	int answer=0;

	printf("본 프로그램은 고등학생의 진로적성검사를 위한 프로그램입니다.\n");
	Sleep(1000);
	printf("질문은 총 k개가 있으며 소요시간은 대략 t분 정도입니다.\n");
	Sleep(1000);
	printf("본 프로그램에 EBSi의 진로탐색검사의 질문들이 활용되었습니다.\n");
	Sleep(1000);
	printf("각 질문마다 다섯 개의 답(1/2/3/4/5)을 할 수 있으며, 각각의 답은 왼쪽부터\n");
	printf("'매우 싫다', '싫다', '보통이다', '좋다', '매우 좋다'입니다.\n");
	Sleep(1000);
	printf("테스트를 시작니다.\n");
	Sleep(1000);

	printf("Q1. 리더십 프로그램 참여하기\n");
	scanf("%d", &answer);
	l =l + (answer - 3);
	b = b + (answer - 3);

	printf("Q2. 경영 위기 관리하기\n");
	scanf("%d", &answer);
	l = l + (answer - 3);
	b = b + (answer - 3);

	printf("Q3. 경영 관련 신문이나 잡지 읽기\n");
	scanf("%d", &answer);
	l = l + (answer - 3);
	b = b + (answer - 3);

	printf("Q4. 직원들의 업무를 관리하고 감독하기\n");
	scanf("%d", &answer);
	l = l + (answer - 3);
	b = b + (answer - 3);

	printf("Q5. 집단의 의견을 대변하고 관철시키기\n");
	scanf("%d", &answer);
	l = l + (answer - 3);
	b = b + (answer - 3);

	printf("Q6. 모의 창업하기\n");
	scanf("%d", &answer);
	l = l + (answer - 3);
	b = b + (answer - 3);

	printf("Q7. 사업 성공을 위한 전략 세우기\n");
	scanf("%d", &answer);
	l = l + (answer - 3);
	b = b + (answer - 3);

	printf("Q8. 모임이나 집단에서 리더 역할하기\n");
	scanf("%d", &answer);
	l = l + (answer - 3);
	b = b + (answer - 3);

	printf("Q9. 기업 경영하기\n");
	scanf("%d", &answer);
	l = l + (answer - 3);
	b = b + (answer - 3);

	//까지 business 경영

	//부터 engineering 기계공학

	printf("Q10. 목재를 사용하여 가구 만들기\n");
	scanf("%d", &answer);
	m = m + (answer - 3);
	e = e + (answer - 3);

	printf("Q11. 새로 산 기계의 사용설명서 읽기\n");
	scanf("%d", &answer);
	m = m + (answer - 3);
	e = e + (answer - 3);

	printf("Q12. 모형비행기 조립하기\n");
	scanf("%d", &answer);
	m = m + (answer - 3);
	e = e + (answer - 3);

	printf("Q13. 전자제품 수리하기\n");
	scanf("%d", &answer);
	m = m + (answer - 3);
	e = e + (answer - 3);

	printf("Q14. 자동차 정비하기\n");
	scanf("%d", &answer);
	m = m + (answer - 3);
	e = e + (answer - 3);

	printf("Q15. 컴퓨터, TV 등을 설치하기\n");
	scanf("%d", &answer);
	m = m + (answer - 3);
	e = e + (answer - 3);

	printf("Q16. 전동공구 사용하기\n");
	scanf("%d", &answer);
	m = m + (answer - 3);
	e = e + (answer - 3);

	printf("Q17. 고장난 자전거 수리하기\n");
	scanf("%d", &answer);
	m = m + (answer - 3);
	e = e + (answer - 3);

	printf("Q18. 새로운 기술(목공, 기계조작 등) 배우기\n");
	scanf("%d", &answer);
	m = m + (answer - 3);
	e = e + (answer - 3);

	//까지 기계공학

	//부터 예술

	printf("Q19. 애니메이션 그리기\n");
	scanf("%d", &answer);
	a = a + (answer - 3);

	printf("Q20. 학교축제에서 공연하기(춤, 노래, 연극 등)\n");
	scanf("%d", &answer);
	a = a + (answer - 3);

	printf("Q21. 작곡이나 편곡하기\n");
	scanf("%d", &answer);
	a = a + (answer - 3);

	printf("Q22. 영화 제작하기\n");
	scanf("%d", &answer);
	a = a + (answer - 3);

	printf("Q23. 미술관 관람하기\n");
	scanf("%d", &answer);
	a = a + (answer - 3);

	printf("Q24. 실내 디자인하기\n");
	scanf("%d", &answer);
	a = a + (answer - 3);

	printf("Q25. 그림 그리기\n");
	scanf("%d", &answer);
	a = a + (answer - 3);

	printf("Q26. 가구나 옷 디자인하기\n");
	scanf("%d", &answer);
	a = a + (answer - 3);

	printf("Q27. 예술사진 찍기\n");
	scanf("%d", &answer);
	a = a + (answer - 3);

	//까지 예술

	//부터 자연과학

	printf("Q28. 복잡한 문제를 논리적으로 해결하기\n");
	scanf("%d", &answer);
	m = m + (answer - 3);
	n = n + (answer - 3);

	printf("Q29. 호기심을 해결하기 위해 관련 도서 또는 글 읽기\n");
	scanf("%d", &answer);
	m = m + (answer - 3);
	n = n + (answer - 3);

	printf("Q30. 과학실험하기\n");
	scanf("%d", &answer);
	m = m + (answer - 3);
	n = n + (answer - 3);

	printf("Q31. 과학 잡지나 서적 읽기\n");
	scanf("%d", &answer);
	m = m + (answer - 3);
	n = n + (answer - 3);

	printf("Q32. 사물의 과학적 원리 탐구하기\n");
	scanf("%d", &answer);
	m = m + (answer - 3);
	n = n + (answer - 3);

	printf("Q33. 수학적/과학적 원리를 실생활에 적용하기\n");
	scanf("%d", &answer);
	m = m + (answer - 3);
	n = n + (answer - 3);

	printf("Q34. 한 주제에 대해 호기심을 갖고 파고들기\n");
	scanf("%d", &answer);
	m = m + (answer - 3);
	n = n + (answer - 3);

	printf("Q35. 실험실이나 연구소에서 일하기\n");
	scanf("%d", &answer);
	m = m + (answer - 3);
	n = n + (answer - 3);

	printf("Q36. 과학관 견학하고 체험하기\n");
	scanf("%d", &answer);
	m = m + (answer - 3);
	n = n + (answer - 3);

	//까지 자연과학

	//부터 사회복지학

	printf("Q37. 담임교사나 상담교사와 대화나누기\n");
	scanf("%d", &answer);
	l = l + (answer - 3);
	w = w + (answer - 3);

	printf("Q38. 친구들의 고민을 들어주고 상담해주기\n");
	scanf("%d", &answer);
	m = m + (answer - 3);
	n = n + (answer - 3);

	printf("Q39. 어린아이 돌보기\n");
	scanf("%d", &answer);
	m = m + (answer - 3);
	n = n + (answer - 3);

	printf("Q40. 양로원에서 어르신 도와드리기\n");
	scanf("%d", &answer);
	m = m + (answer - 3);
	n = n + (answer - 3);

	printf("Q41. 도움이 필요한 장애인 도와주기\n");
	scanf("%d", &answer);
	m = m + (answer - 3);
	n = n + (answer - 3);

	printf("Q42. 청소년 문제 탐구하기\n");
	scanf("%d", &answer);
	m = m + (answer - 3);
	n = n + (answer - 3);

	printf("Q43. 스스로 봉사활동에 참여하기\n");
	scanf("%d", &answer);
	m = m + (answer - 3);
	n = n + (answer - 3);

	printf("Q44. 자선모금활동 참여하기\n");
	scanf("%d", &answer);
	m = m + (answer - 3);
	n = n + (answer - 3);

	printf("Q45. 대인관계 향상 프로그램 참여하기\n");
	scanf("%d", &answer);
	m = m + (answer - 3);
	n = n + (answer - 3);

	//끝
	//문과:이과 백분율 비율

	float pm = m / (m + l) * 100;

	float pl = l / (m + l) * 100;

	printf("모든 질문이 끝났습니다.\n");
	Sleep(1000);
	printf("당신의 문ㆍ이과 비율은 %f:%f입니다.\n", pm, pl);







	return 0;
}