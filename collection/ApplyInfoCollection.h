#ifndef APPLYINFOCOLLECTION_H
#define APPLYINFOCOLLECTION_H

#include <iostream>
#include <vector>

#include "ApplyInfo.h"

using namespace std;

class ApplyInfoCollection
{
private:
    vector<pair<string, ApplyInfo*>> applyInfoList; // 吏?먯옄 ?대쫫, 吏?먯젙蹂?
    static ApplyInfoCollection* instance; //singleton instance
    ApplyInfoCollection() {}
    ApplyInfoCollection(const ApplyInfoCollection& other) {}

public:
    static ApplyInfoCollection* getInstance();  // singleton 객체 instance 반환
    void addApplyInfo(ApplyInfo* applyInfo);    // 吏?먯젙蹂????    
    bool getApplyInfo();                        // 지원 정보를 회사 이름을 기준으로 정렬하여 전부 출력
    bool deleteCancelApplyInfo(string);         // 지원 정보 삭제
    bool getApplyStats();                       // 지원한 모든 지원 정보에 대해 지원 업무별 지원 횟수를 출력(지원 정보 통계)
};

#endif