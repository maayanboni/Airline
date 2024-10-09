
#ifndef AIRLINE_CCREWMEMBER_H
#define AIRLINE_CCREWMEMBER_H
#include "string.h"
#include "iostream"
#include "CAddress.h"
using namespace std;

class CCrewMember {
private:

    int memberNum;
    char* name;
    int airMinuets;
    CAddress address;

public:
    static int START_ID;

    static int member;


    CCrewMember(const char* name, int airMinuets = 0, const CAddress& address = CAddress())
            :airMinuets(airMinuets), address(address) {
        memberNum = member++;
        this->name = new char[strlen(name) + 1];
        strcpy(this->name, name);
    }

    CCrewMember(const CCrewMember& other): memberNum(other.memberNum), airMinuets(other.airMinuets), address(other.address)
    {
        if (other.name)
        {
            name = new char[strlen(other.name) + 1];
            strcpy(name, other.name);
        } else
        {
            name = nullptr;
        }
    }


    ~CCrewMember();

    const CCrewMember& operator=(const CCrewMember& other);
    friend std::ostream& operator<<(std::ostream& os, const CCrewMember& cm);
    bool operator==(const CCrewMember& other) const;
    bool operator+=(int num);

    char* getCrewMemberName() const;
    CAddress getCrewMemberAddress() const;
    int getCrewMemberAirMinuets() const;
    int getCrewMemberNum() const;

    void setCrewMemberAddress(CAddress address);
    void setCrewMemberName(char* name);

    void UpdateMinutes(int minuets);
    void Print() const;
    bool IsEqual(CCrewMember other) const;
};



#endif //AIRLINE_CCREWMEMBER_H
