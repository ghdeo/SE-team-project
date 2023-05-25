#pragma once

#include <iostream>

#include "EmployInfoCollection.h"
#include "ApplyInfoCollection.h"
#include "SessionCollection.h"
#include "GeneralAccount.h"
#include "CompanyAccount.h"

using namespace std;

class StatsControl
{
private:
    EmployInfoCollection* employInfoCollection;
    ApplyInfoCollection* applyInfoCollection;
public:
    /*
        함수 이름 : StatsControl(EmployInfoCollection* employInfoCollection, ApplyInfoCollection* applyInfoCollection)
        기능	  : Constructor
        전달 인자 : EmployInfoCollection* employInfoCollection, ApplyInfoCollection* applyInfoCollection
        반환값    : 없음
    */
    StatsControl(EmployInfoCollection* employInfoCollection, ApplyInfoCollection* applyInfoCollection) {
        this->employInfoCollection = employInfoCollection;
        this->applyInfoCollection = applyInfoCollection;
    }

    /*
        함수 이름 : map<string, int> showApplyInfoStats()
        기능	  : 통계(채용 정보, 지원 정보) 출력
        전달 인자 : 없음
        반환값    : map<string, int>
    */
    map<string, int> showStats() {
        // 회원의 계정 정보 받기
        SessionCollection* collection = SessionCollection::getInstance();
        Session* session = collection->getSession();
        Account* account = session->getAccount();

        map<string, int> result;
 
        if (typeid(account) == typeid(GeneralAccount)) {
            result = applyInfoCollection->getApplyStats();
        }   // 지원 정보 통계
        else if (typeid(account) == typeid(CompanyAccount)) {
            result = employInfoCollection->getEmployStats();
        }   // 채용 정보 통계

        return result;
    }
};

#endif