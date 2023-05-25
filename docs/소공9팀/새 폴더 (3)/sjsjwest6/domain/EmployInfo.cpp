#include "EmployInfo.h"

/*
    �Լ� �̸� : EmployInfo(string companyName, string businessNum, string position, int applicantsNum, string finishDate)
    ���	  : Constructor
    ���� ���� : ȸ���, ����ڹ�ȣ, ����, ä�� �ο�, ������
    ��ȯ��    : ����
*/
EmployInfo::EmployInfo(string companyName, string businessNum, string position, int applicantsNum, string finishDate)
    : companyName(companyName), businessNum(businessNum), position(position), applicantsNum(applicantsNum), finishDate(finishDate) {
    currentAppliedApplicantsNum = 0;
}


/*
    �Լ� �̸� : EmployInfo::getCompanyName()
    ���	  : ȸ��� ��ȯ
    ���� ���� : ����
    ��ȯ��    : companyName
*/
string EmployInfo::getCompanyName() const {
    return this->companyName;
}


/*
    �Լ� �̸� : EmployInfo::getBusinessNum()
    ���	  : ����ڹ�ȣ ��ȯ
    ���� ���� : ����
    ��ȯ��    : businessNum
*/
string EmployInfo::getBusinessNum() const {
    return this->businessNum;
}


/*
    �Լ� �̸� : EmployInfo::getPosition()
    ���	  : ���� ��ȯ
    ���� ���� : ����
    ��ȯ��    : position
*/
string EmployInfo::getPosition() const {
    return this->position;
}

/*
    �Լ� �̸� : EmployInfo::getApplicantsNum()
    ���	  : ä�� �ο� ��ȯ
    ���� ���� : ����
    ��ȯ��    : applicantsNum
*/
int EmployInfo::getApplicantsNum() const {
    return this->applicantsNum;
}


/*
    �Լ� �̸� : EmployInfo::getFinishDate()
    ���	  : ������ ��ȯ
    ���� ���� : ����
    ��ȯ��    : finishDate
*/
string EmployInfo::getFinishDate() const {
    return this->finishDate;
}


/*
    �Լ� �̸� : EmployInfo::increaseCurrentAppliedApplicantsNum()
    ���	  : ������ �� ����
    ���� ���� : ����
    ��ȯ��    : ����
*/
void EmployInfo::increaseCurrentAppliedApplicantsNum() {
    this->currentAppliedApplicantsNum++;
}

/*
    �Լ� �̸� : EmployInfo::getCurrentAppliedApplicantsNum()
    ���	  : ������ ��
    ���� ���� : ����
    ��ȯ��    : currentAppliedApplicantsNum
*/
int EmployInfo::getCurrentAppliedApplicantsNum() {
    return this->currentAppliedApplicantsNum;
}

// �⺻ ������
EmployInfo::EmployInfo() {}


/*
    �Լ� �̸� : EmployInfo::EmployInfo(string position, int applicantsNum, string finishDate)
    ���	  : Constructor
    ���� ���� : ����, ä�� �ο�, ������
    ��ȯ��    : ����
*/
EmployInfo::EmployInfo(string position, int applicantsNum, string finishDate) {
    this->position = position;
    this->applicantsNum = applicantsNum;
    this->finishDate = finishDate;
}
