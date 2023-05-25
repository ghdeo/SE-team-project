#include <iostream>
#include <vector>
#include "StatsControl.h"

using namespace std;

class StatsUI
{
private:
    StatsControl statsControl;
public:
    StatsUI(EmployInfoCollection* employInfoCollection, ApplyInfoCollection* applyInfoCollection);
    vector<string> selectStats();
};