#pragma once

#include <iostream>

using namespace std;

class CancelApplyInfoUI
{
private:
    CancelApplyInfo cancelapplyinfo;
public:
    CancelApplyInfoUI(ApplyInfoCollection* applyInfoCollection);    // 생성자 singletion 주입
    bool cancelApplyInfoUI(string);     // 일반 회원의 지원 정보 삭제를 위한 UI 제공
};
