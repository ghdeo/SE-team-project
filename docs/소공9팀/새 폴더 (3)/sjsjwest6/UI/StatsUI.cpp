#include <string>

#include "StatsUI.h"
#include "StatsControl.h"

/*
    �Լ� �̸� : StatsUI(EmployInfoCollection* employInfoCollection, ApplyInfoCollection* applyInfoCollection)
    ���	  : singleton�� EmployInfoCollection, ApplyInfoCollection �����ϴ� ������
    ���� ���� : EmployInfoCollection* employInfoCollection, ApplyInfoCollection* applyInfoCollection
    ��ȯ��    : null
 */
StatsUI::StatsUI(EmployInfoCollection* employInfoCollection, ApplyInfoCollection* applyInfoCollection)
    : applyInfoStatsControl(employInfoCollection, applyInfoCollection) {}


/*
    �Լ� �̸� : StatsUI::selectStats()
    ���	  : ���(ä�� ���� ���, ���� ���� ���) ���
    ���� ���� : null
    ��ȯ��    : null
 */
vector<string> StatsUI::selectStats() {
    map<string, int> map = statsControl.showStats();
    vector<string> result;
    for (auto iter : map) {
        string tmp = iter.first + " " + to_string(iter.second);
        result.push_back(tmp);
    }
    return result;
}