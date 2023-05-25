#include <string>

#include "StatsUI.h"
#include "StatsControl.h"

/*
    함수 이름 : StatsUI(EmployInfoCollection* employInfoCollection, ApplyInfoCollection* applyInfoCollection)
    기능	  : singleton인 EmployInfoCollection, ApplyInfoCollection 주입하는 생성자
    전달 인자 : EmployInfoCollection* employInfoCollection, ApplyInfoCollection* applyInfoCollection
    반환값    : null
 */
StatsUI::StatsUI(EmployInfoCollection* employInfoCollection, ApplyInfoCollection* applyInfoCollection)
    : applyInfoStatsControl(employInfoCollection, applyInfoCollection) {}


/*
    함수 이름 : StatsUI::selectStats()
    기능	  : 통계(채용 정보 통계, 지원 정보 통계) 출력
    전달 인자 : null
    반환값    : null
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