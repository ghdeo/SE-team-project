#ifndef REGISTER_EMPLOY_INFO_H
#define REGISTER_EMPLOY_INFO_H

#include <iostream>
#include <vector>
#include <string>

class RegisterEmployInfo
{
public:
    RegisterEmployInfo();
    void SendEmployInfoData(string position, int applicantsNum, string finishDate);
};

#endif
