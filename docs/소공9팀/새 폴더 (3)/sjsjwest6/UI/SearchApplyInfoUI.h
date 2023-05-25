#pragma once

#include <iostream>
#include <vector>
#include "SearchApplyInfoControl.h"
#include "ApplyInfoCollection.h"

using namespace std;

class SearchApplyInfoUI
{
private:
    SearchApplyInfoControl searchApplyInfoControl;

public:
    SearchApplyInfoUI(ApplyInfoCollection* applyInfoCollection);    // Constructor
    vector<string> searchApplyInfo();                               // 지원 정보 출력
};

#endif
