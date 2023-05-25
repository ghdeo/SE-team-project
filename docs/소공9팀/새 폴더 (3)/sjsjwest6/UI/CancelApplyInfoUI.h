#include <iostream>

#include "CancelApplyInfoControl.h"

using namespace std;

class CancelApplyInfoUI
{
private:
    CancelApplyInfoControl cancelApplyInfoControl;
public:
    CancelApplyInfoUI(ApplyInfoCollection* applyInfoCollection);    // Constructor
    string cancelApplyInfoUI(string companyName);                   // 일반 회원의 지원 정보 삭제
};

#endif
