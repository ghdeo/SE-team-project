﻿#pragma once
#include <iostream>
#include "ApplyInfoCollection.h"

using namespace std;

class CancelApplyInfoControl
{
private:
    ApplyInfoCollection* applyInfoCollection;
public:
    /*
        함수 이름 : CancelApplyInfoControl(ApplyInfoCollection* applyInfoCollection)
        기능	  : Constructor
        전달 인자 : ApplyInfoCollection* applyInfoCollection
        반환값    : 없음
    */
    CancelApplyInfoControl(ApplyInfoCollection* applyInfoCollection) {
        this->applyInfoCollection;
    }

    /*
        함수 이름 : bool cancelApplyInfo(string businessNum)
        기능	  : 지원 정보 삭제 여부를 지원 정보 Collection에 전달
        전달 인자 : string businessNum(사업자번호)
        반환값    : 없음
    */
    bool cancelApplyInfo(string businessNum) {
        applyInfoCollection->deleteCancelApplyInfo(businessNum);
    }
};

#endif