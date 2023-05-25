#pragma once
#include "ApplyInfoCollection.h"
#include <string>
using namespace std;

class EmployInfo
{
private:
    string companyName;                 // 회사 이름      // not null
    string businessNum;                 // 사업자번호     // not null
    string position;                    // 업무           // not null
    int applicantsNum;                  // 채용 인원      // not null
    string finishDate;                  // 마감일         // not null
    int currentAppliedApplicantsNum;    // 지원자 수


public:
    EmployInfo(string position, int applicantsNum, string finishDate); // 생성자
    EmployInfo();   // 기본 생성자
    EmployInfo(string companyName, string businessNum, string position, int applicantsNum, string finishDate);  // 생성자
    string getCompanyName() const;              // 회사 이름
    string getBusinessNum() const;              // 사업자번호
    string getPosition() const;                 // 업무
    int getApplicantsNum() const;               // 채용 인원
    string getFinishDate() const;               // 마감일
    void increaseCurrentAppliedApplicantsNum(); // 지원자 수 증가
    int getCurrentAppliedApplicantsNum();       // 지원자 수
};
