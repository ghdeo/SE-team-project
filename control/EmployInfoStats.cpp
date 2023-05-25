#include <string>

#include "EmployInfoStats.h"
#include "EmployInfoCollection.h"

/*
	함수 이름 : EmployInfoStats::showEmployInfoStats()
	기능	  : 회사 회원의 채용 정보 통계 출력
	전달 인자 : 없음
	반환값    : 없음
*/
bool EmployInfoStats::showEmployInfoStats()
{
	EmployCollection employCollection;

	// 채용 정보 통계 조회
	// 조회 가능한 경우에 true, 불가능한 경우에 false 반환
	return employCollection.getEmployStats();
}