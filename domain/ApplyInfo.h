#include <iostream>

using namespace std;

class ApplyInfo
{
private:
    string companyName; // ȸ�� �̸�      // not null
    string businessNum; // ����ڹ�ȣ     // not null
    string position;    // ����           // not null
    int employedNum;    // ä�� �ο�      // not null
    string finishDate;  // ������         // not null

public:
    ApplyInfo() {};     // �⺻ ������?
    ApplyInfo(string, string, string , int , string);
    string getCompanyName() const;
    string getBusinessNum() const;
    string getPosition() const;
    int getEmployedNum() const;
    string getFinishDate() const;
    ~ApplyInfo();
};