#ifndef REGISTER_EMPLOY_INFO_H
#define REGISTER_EMPLOY_INFO_H

#include <iostream>
#include <vector>
#include <string>

using namespace std;

/*
Class: RegisterEmployInfo
Description: 채용정보등록 컨트롤 클래스이다.
*/
class RegisterEmployInfo
{
private:
    string employInfo;
public:
    RegisterEmployInfo(string input);
    string sendEmployInfoData(string position, int applicantsNum, string finishDate);
    string getEmployInfo();
};

#endif
