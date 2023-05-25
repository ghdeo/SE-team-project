﻿#pragma once
#include <iostream>
#include "ApplyInfoCollection.h"

using namespace std;

class SearchApplyInfoControl
{
private:
    ApplyInfoCollection* applyInfoCollection;

public:
    /*
        함수 이름 : SearchApplyInfoControl(ApplyInfoCollection* applyInfoCollection)
        기능	  : Constructor
        전달 인자 : ApplyInfoCollection* applyInfoCollection
        반환값    : 없음
    */
    SearchApplyInfoControl(ApplyInfoCollection* applyInfoCollection) {
        this->applyInfoCollection = applyInfoCollection;
    }

    /*
        함수 이름 : vector<ApplyInfo> showApplyInfo()
        기능	  : 지원 정보 조회를 위한 정보를 지원 정보 Collection에 전달
        전달 인자 : 없음
        반환값    : vector<ApplyInfo>
    */
    vector<ApplyInfo> showApplyInfo() {
        return applyInfoCollection->getApplyInfo();
    }
};

#endif