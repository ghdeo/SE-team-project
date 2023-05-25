#include "ApplyInfoCollection.h"
#include "SessionCollection.h"
#include "GeneralAccount.h"

ApplyInfoCollection* ApplyInfoCollection::instance = nullptr;

/**
 * 함수 이름 : getInstance
 * 기능    : singleton 객체 생성 및 반환
 * 전달 인자: null
 * 반환값  : ApplyInfoCollection*
 */
ApplyInfoCollection* ApplyInfoCollection::getInstance() {
    if (instance == nullptr) {
        instance = new ApplyInfoCollection();
    }

    return instance;
}

/**
 * 함수 이름 : addApplyInfo
 * 기능    : 지원 정보를 바탕으로 applyInfoList에 지원정보 저장.
 * 전달 인자: ApplyInfo*
 * 반환값  : null
 */
void ApplyInfoCollection::addApplyInfo(ApplyInfo* applyInfo) {
    applyInfoList.push_back(pair<string, ApplyInfo*>(applyInfo->getApplicantName(), applyInfo)); // 지원자 이름, 지원정보 저장.
}

/*
    함수 이름 : ApplyCollection::getApplyInfo()
    기능	  : 지원 정보 조회
    전달 인자 : 없음
    반환값    : vector<ApplyInfo>
*/
vector<ApplyInfo> ApplyInfoCollection::getApplyInfo() {
    SessionCollection* instance = SessionCollection::getInstance();
    
    // Session: 일반 회원의 계정 정보
    GeneralAccount* account = static_cast<GeneralAccount*> (instance->getSession()->getAccount());
    string accountName = account->getName();

    // 일반 회원의 지원 정보 저장
    vector<ApplyInfo> applyInfo;
    for (pair<string, ApplyInfo*> v : applyInfoList) {
        if (v.first == accountName) {
            ret.push_back(*v.second);
        }
    }

    return applyInfo;
}


/*
    함수 이름 : ApplyCollection::deleteCancelApplyInfo(string bNum)
    기능	  : 지원 정보 삭제
    전달 인자 : 없음
    반환값    : 없음
*/
void ApplyInfoCollection::deleteCancelApplyInfo(string businessNumber) {
    SessionCollection* instance = SessionCollection::getInstance();

    // Session: 일반 회원의 계정 정보
    GeneralAccount* account = static_cast<GeneralAccount*> (instance->getSession()->getAccount());
    string accountName = account->getName();

    // 사업자 번호로 검색하여 지원 정보 삭제
    for (auto x = applyInfoList.begin(); x != applyInfoList.end(); ++x) {
        if (x->second->getBusinessNum() == businessNumber) {
            applyInfoList.erase(x);
        }
    }

}


/*
    함수 이름 : ApplyCollection::getApplyStats()
    기능	  : 지원한 모든 지원 정보에 대해 지원 업무별 지원 횟수를 저장(지원 정보 통계)
    전달 인자 : 없음
    반환값    : map<string, int>
*/
map<string, int> ApplyInfoCollection::getApplyStats() {
    map<string, int> applyStats;    // 지원 정보 통계 정보를 저장하는 vector

    // 업무를 기준으로 지원 정보 통계 정보 저장
    for (const auto& apply : applyInfoList) {
        string pos = apply.second->getPosition();
        applyStats[pos]++;
    }

    return applyStats;
}