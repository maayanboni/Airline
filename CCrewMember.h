
#ifndef AIRLINE_CCREWMEMBER_H
#define AIRLINE_CCREWMEMBER_H
#include "string.h"
#include "iostream"
#include "CAddress.h"
using namespace std;

class CCrewMember {
private:
    string name;
    int airMinuets;
    CAddress address;

public:
    CCrewMember(string name, CAddress address, int minuets = 0) : address(address.getHomeNum(), address.getStreet())
    {
        this->name = name;
        this->airMinuets = minuets;
        this->address = address;
    }

    int UpdateMinutes(int minuets);

    string getCrewMemberName();
    CAddress getCrewMemberAddress();
    int getCrewMemberAirMinuets();

    void setCrewMemberAddress(CAddress address);
    void setCrewMemberName(string name);

    void Print() const;
    bool IsEqual(CCrewMember member) const;
};


#endif //AIRLINE_CCREWMEMBER_H
