#pragma once

#include <iostream>

#include "EmployInfoCollection.h"
#include "ApplyInfoCollection.h"
#include "SessionCollection.h"
#include "GeneralAccount.h"
#include "CompanyAccount.h"

using namespace std;

class StatsControl
{
private:
    EmployInfoCollection* employInfoCollection;
    ApplyInfoCollection* applyInfoCollection;
public:
    /*
        �Լ� �̸� : StatsControl(EmployInfoCollection* employInfoCollection, ApplyInfoCollection* applyInfoCollection)
        ���	  : Constructor
        ���� ���� : EmployInfoCollection* employInfoCollection, ApplyInfoCollection* applyInfoCollection
        ��ȯ��    : ����
    */
    StatsControl(EmployInfoCollection* employInfoCollection, ApplyInfoCollection* applyInfoCollection) {
        this->employInfoCollection = employInfoCollection;
        this->applyInfoCollection = applyInfoCollection;
    }

    /*
        �Լ� �̸� : map<string, int> showApplyInfoStats()
        ���	  : ���(ä�� ����, ���� ����) ���
        ���� ���� : ����
        ��ȯ��    : map<string, int>
    */
    map<string, int> showStats() {
        // ȸ���� ���� ���� �ޱ�
        SessionCollection* collection = SessionCollection::getInstance();
        Session* session = collection->getSession();
        Account* account = session->getAccount();

        map<string, int> result;
 
        if (typeid(account) == typeid(GeneralAccount)) {
            result = applyInfoCollection->getApplyStats();
        }   // ���� ���� ���
        else if (typeid(account) == typeid(CompanyAccount)) {
            result = employInfoCollection->getEmployStats();
        }   // ä�� ���� ���

        return result;
    }
};

#endif