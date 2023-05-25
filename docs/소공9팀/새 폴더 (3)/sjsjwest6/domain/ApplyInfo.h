#pragma once

#include <iostream>

using namespace std;

class ApplyInfo
{
private:
    string companyName;     // 회사 이름    // not null
    string businessNum;     // 사업자번호   // not null
    string position;        // 업무         // not null
    int employedNum;        // 채용 인원    // not null
    string finishDate;      // 마감일       // not null
    string applicantName;   // 지원자명     // not null

public:
    ApplyInfo() {};     // 기본 생성자
    ApplyInfo(string, string, string, int, string, string);     // 생성자
    string getCompanyName() const;                              // 회사명
    string getBusinessNum() const;                              // 사업자번호
    string getPosition() const;                                 // 업무
    int getEmployedNum() const;                                 // 채용 인원
    string getFinishDate() const;                               // 마감일
    ~ApplyInfo();                                               // 소멸자
};

#endif