#include <string>

#include "EmployInfoStatsUI.h"

/*
	함수 이름 : EmployInfoStatsUI
	기능	  : singleton인 EmployInfoCollection 주입하는 생성자.
	전달 인자 : ApplyInfoCollection*
	반환값    : null
 */
EmployInfoStatsUI::EmployInfoStatsUI(EmployInfoCollection* employInfoCollection)
	: selectEmployInfoStats(employInfoCollection) {}

/*
	함수 이름 :
	기능	  :
	전달 인자 : 없음
	반환값    : 없음
*/
bool EmployInfoStatsUI::selectEmployInfoStats()
{

}

