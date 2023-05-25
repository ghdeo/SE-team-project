#pragma once

#include <iostream>

#include "EmployInfoStats.h"

using namespace std;

class EmployInfoStatsUI
{
private:
    EmployInfoStats employInfoStats;
public:
    EmployInfoStatsUI(EmployInfoCollection* employInfoCollection);
    bool selectEmployInfoStats();
};