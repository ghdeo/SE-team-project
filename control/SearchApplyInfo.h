#pragma once

#include <iostream>

#include "ApplyInfoCollection.h"

using namespace std;

class SearchApplyInfo
{
private:
    ApplyInfoCollection* applyInfoCollection;   // singleton
public:
    SearchApplyInfo(ApplyInfoCollection* applyInfoCollection) { this->applyInfoCollection = applyInfoCollection; }
    bool showApplyInfo();   // 일반 회원의 지원 정보 조회
};
