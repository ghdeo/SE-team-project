#include "EmployInfo.h"

/*
    함수 이름 : EmployInfo(string companyName, string businessNum, string position, int applicantsNum, string finishDate)
    기능	  : Constructor
    전달 인자 : 회사명, 사업자번호, 업무, 채용 인원, 마감일
    반환값    : 없음
*/
EmployInfo::EmployInfo(string companyName, string businessNum, string position, int applicantsNum, string finishDate)
    : companyName(companyName), businessNum(businessNum), position(position), applicantsNum(applicantsNum), finishDate(finishDate) {
    currentAppliedApplicantsNum = 0;
}


/*
    함수 이름 : EmployInfo::getCompanyName()
    기능	  : 회사명 반환
    전달 인자 : 없음
    반환값    : companyName
*/
string EmployInfo::getCompanyName() const {
    return this->companyName;
}


/*
    함수 이름 : EmployInfo::getBusinessNum()
    기능	  : 사업자번호 반환
    전달 인자 : 없음
    반환값    : businessNum
*/
string EmployInfo::getBusinessNum() const {
    return this->businessNum;
}


/*
    함수 이름 : EmployInfo::getPosition()
    기능	  : 업무 반환
    전달 인자 : 없음
    반환값    : position
*/
string EmployInfo::getPosition() const {
    return this->position;
}

/*
    함수 이름 : EmployInfo::getApplicantsNum()
    기능	  : 채용 인원 반환
    전달 인자 : 없음
    반환값    : applicantsNum
*/
int EmployInfo::getApplicantsNum() const {
    return this->applicantsNum;
}


/*
    함수 이름 : EmployInfo::getFinishDate()
    기능	  : 마감일 반환
    전달 인자 : 없음
    반환값    : finishDate
*/
string EmployInfo::getFinishDate() const {
    return this->finishDate;
}


/*
    함수 이름 : EmployInfo::increaseCurrentAppliedApplicantsNum()
    기능	  : 지원자 수 증가
    전달 인자 : 없음
    반환값    : 없음
*/
void EmployInfo::increaseCurrentAppliedApplicantsNum() {
    this->currentAppliedApplicantsNum++;
}

/*
    함수 이름 : EmployInfo::getCurrentAppliedApplicantsNum()
    기능	  : 지원자 수
    전달 인자 : 없음
    반환값    : currentAppliedApplicantsNum
*/
int EmployInfo::getCurrentAppliedApplicantsNum() {
    return this->currentAppliedApplicantsNum;
}

// 기본 생성자
EmployInfo::EmployInfo() {}


/*
    함수 이름 : EmployInfo::EmployInfo(string position, int applicantsNum, string finishDate)
    기능	  : Constructor
    전달 인자 : 업무, 채용 인원, 마감일
    반환값    : 없음
*/
EmployInfo::EmployInfo(string position, int applicantsNum, string finishDate) {
    this->position = position;
    this->applicantsNum = applicantsNum;
    this->finishDate = finishDate;
}
