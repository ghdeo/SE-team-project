﻿#include "SearchApplyInfoUI.h"

/*
	함수 이름 : SearchApplyInfoUI
	기능	  : singleton인 ApplyInfoCollection 주입하는 생성자.
	전달 인자 : ApplyInfoCollection*
	반환값    : null
 */
SearchApplyInfoUI::SearchApplyInfoUI(ApplyInfoCollection* applyInfoCollection)
	: searchApplyInfoControl(applyInfoCollection) {}



/*
	함수 이름 : SearchApplyInfoUI::searchApplyInfo()
	기능	  : 일반 회원의 지원 정보 출력
	전달 인자 : 없음
	반환값    : vector<string>
*/
vector<string> SearchApplyInfoUI::searchApplyInfo() {
	// 저장된 지원 정보 가져오기
	vector<ApplyInfo> val = searchApplyInfoControl.showApplyInfo();

	// 출력
	vector<string> ret;
	for (ApplyInfo info : val) {
		string tmp = "" + info.getCompanyName() + " " + info.getBusinessNum() + " " + info.getPosition() + " "
			+ to_string(info.getEmployedNum()) + " " + info.getFinishDate();
	}
	return ret;
}