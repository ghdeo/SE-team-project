#pragma once

#include <iostream>

using namespace std;

class ApplyInfoStatsUI
{
private:
    ApplyInfoStats applyInfoStats;
public:
    ApplyInfoStatsUI(ApplyInfoCollection* applyInfoCollection);    // 생성자 singletion 주입
    bool selectApplyInfoStats();    // 일반 회원의 지원 정보 통계 출력을 위한 UI 제공
};
