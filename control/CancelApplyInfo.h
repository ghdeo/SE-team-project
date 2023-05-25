#pragma once

#include <iostream>

using namespace std;

class CancelApplyInfo
{
private:
    ApplyInfoCollection* applyInfoCollection;   // singleton
public:
    CancelApplyInfo(ApplyInfoCollection* applyInfoCollection) { this->applyInfoCollection = applyInfoCollection; }
    bool cancelApplyInfo(string);   // 일반 회원의 지원 정보 삭제
};
