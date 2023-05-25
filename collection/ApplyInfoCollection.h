#pragma once

#include <iostream>
#include <vector>

#include "ApplyInfo.h"

using namespace std;

class ApplyCollection
{
private:
    vector<pair<string, ApplyInfo>> ownedApplyList;

public:
    bool getApplyInfo();                    // 지원 정보를 회사 이름을 기준으로 정렬하여 전부 출력
    bool deleteCancelApplyInfo(string);     // 지원 정보 삭제
    bool getApplyStats();                   // 지원한 모든 지원 정보에 대해 지원 업무별 지원 횟수를 출력(지원 정보 통계)
    bool addApplyList(ApplyInfo);
};