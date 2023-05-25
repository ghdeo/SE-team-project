#pragma once

#include <iostream>

using namespace std;

class ApplyInfoStats
{
private:
    ApplyInfoCollection* applyInfoCollection;   // singleton
public:
    SearchApplyInfo(ApplyInfoCollection* applyInfoCollection) { this->applyInfoCollection = applyInfoCollection; }
	bool showApplyInfoStats();	// 일반 회원의 지원 정보 통계 출력
};