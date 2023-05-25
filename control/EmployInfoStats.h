#pragma once

#include <iostream>

using namespace std;

class EmployInfoStats
{
private:
    EmployInfoCollection* employInfoCollection;   // singleton
public:
    SearchApplyInfo(EmployInfoCollection* employInfoCollection) { this->employInfoCollection = employInfoCollection; }
	bool showEmployInfoStats();     // 회사 회원의 채용 정보 통계 출력
};
