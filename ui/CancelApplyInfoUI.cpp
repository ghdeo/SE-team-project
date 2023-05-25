﻿#include <string>

#include "CancelApplyInfoUI.h"
#include "CancelApplyInfoControl.h"
#include "ApplyInfoCollection.h"
#include "EmployInfoCollection.h"

/*
    함수 이름 : CancelApplyInfoUI
    기능	  : singleton인 ApplyInfoCollection 주입하는 생성자
    전달 인자 : ApplyInfoCollection*
    반환값    : null
 */
CancelApplyInfoUI::CancelApplyInfoUI(ApplyInfoCollection* applyInfoCollection)
    : cancelApplyInfoControl(applyInfoCollection) {}


/*
    함수 이름 : CancelApplyInfoUI::cancelApplyInfoUI(string companyNum)
    기능	  : 일반 회원의 지원 정보 삭제
    전달 인자 : 없음
    반환값    : string
*/
string CancelApplyInfoUI::cancelApplyInfoUI(string companyNum) {
    // 사업자 번호 받아서 삭제
    cancelApplyInfoControl.cancelApplyInfo(companyNum);

    // 사업자 번호를 이용하여 채용 정보에서 검색
    EmployInfoCollection* instance = EmployInfoCollection::getInstance();
    EmployInfo info = instance->getEmployInfoByBusinessNum(companyNum);

    // 해당 채용 정보 출력
    string result = "" + info.getCompanyName() + " " + info.getBusinessNum() + " " + info.getPosition();

    return result;
}