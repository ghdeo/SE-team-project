#pragma once

#include <iostream>

using namespace std;

class SearchApplyInfoUI
{
private:
    SearchApplyInfo searchApplyInfo;
public:
    SearchApplyInfoUI(ApplyInfoCollection* applyInfoCollection);    // 생성자 singletion 주입
    bool searchApplyInfo();     // 일반 회원의 지원 정보 조회을 위한 UI 제공
};
