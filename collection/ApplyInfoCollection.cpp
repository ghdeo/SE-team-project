#include <fstream>
#include <string>
#include <algorithm>
#include <map>

#include "ApplyInfoCollection.h"
#include "ApplyInfo.h"


ApplyInfoCollection* ApplyInfoCollection::instance = nullptr;
/*
    함수 이름 : getInstance
    기능    : singleton 객체 생성 및 반환
    전달 인자: null
    반환값  : ApplyInfoCollection*
 */
ApplyInfoCollection* ApplyInfoCollection::getInstance() {
    if (instance == nullptr) {
        instance = new ApplyInfoCollection();
    }

    return instance;
}


/*
    함수 이름 : addApplyInfo
    기능    : 지원 정보를 바탕으로 applyInfoList에 지원정보 저장.
    전달 인자: ApplyInfo*
    반환값  : null
 */
void ApplyInfoCollection::addApplyInfo(ApplyInfo* applyInfo) {
    applyInfoList.push_back(std::pair<std::string, ApplyInfo*>(applyInfo->getApplicantName(), applyInfo)); // 吏?먯옄 ?대쫫, 吏?먯젙蹂????
}


/*
    함수 이름 : ApplyInfoCollection::getApplyInfo()
    기능	  : 지원 정보를 회사 이름을 기준으로 정렬하여 전부 출력
    전달 인자 : 없음
    반환값    : Boolean
*/
bool ApplyInfoCollection::getApplyInfo() {

    // 회사 이름 기준으로 정렬
    sort(applyInfoList.begin(), applyInfoList.end(), [](const pair<string, ApplyInfo>& former, const pair<string, ApplyInfo>& latter)
        {
            return former.second.getCompanyName() < latter.second.getCompanyName();
        }
    );

    if (applyInfoList.empty()) { return false; }

    for (const auto& apply : applyInfoList)
    {
        ApplyInfo applyInfo = apply.second;
        outputFile << "> " << applyInfo.getCompanyName() << " " << applyInfo.getBusinessNum() << " " << applyInfo.getPosition() << " " << applyInfo.getEmployedNum() << " " << applyInfo.getFinishDate() << endl;
    }

    return true;
}


/*
    함수 이름 : ApplyInfoCollection::deleteCancelApplyInfo(string bNum)
    기능	  : 지원 정보 삭제
    전달 인자 : 없음
    반환값    : Boolean
*/
bool ApplyInfoCollection::deleteCancelApplyInfo(string bNum)
{
    for (auto x = applyInfoList.begin(); x != applyInfoList.end(); ++x)
    {
        if (x->second.getBusinessNum() == bNum)
        {
            ownedApplyList.erase(x);
            return true;  // 삭제 성공
        }
    }

    // 지원 정보를 찾지 못하여 삭제 실패
    return false;
}


/*
    함수 이름 : ApplyInfoCollection::getApplyStats()
    기능	  : 지원한 모든 지원 정보에 대해 지원 업무별 지원 횟수를 출력(지원 정보 통계)
    전달 인자 : 없음
    반환값    : Boolean
*/
bool ApplyInfoCollection::getApplyStats()
{
    // 업무별 지원 횟수 저장
    map<string, int> applyStats;    // key: 업무, value: 지원 횟수

    for (const auto& apply : applyInfoList)
    {
        string pos = apply.second.getPosition();

        // 이미 등록된 업무
        if (applyStats.count(pos) > 0)
        {
            applyStats[pos]++;
        }
        // 새로운 업무
        else
        {
            applyStats[pos] = 1;
        }
    }

    // 업무별 지원 횟수를 출력
    outputFile << "> ";
    if (applyStats.empty())
    {
        return false;
    }
    else
    {
        for (const auto& stats : applyStats)
        {
            outputFile << "  " << stats.first << " " << stats.second << endl;
        }
        return true;
    }
}