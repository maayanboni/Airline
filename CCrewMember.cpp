
#include "CCrewMember.h"



int CCrewMember::UpdateMinutes(int minuets)
{
    if(minuets <= 0)
    {
        return 0;
    }
    else
    {
        this->airMinuets += minuets;
        return 1;
    }
}

//Getters
string CCrewMember::getCrewMemberName()
{
    return this->name;
}

CAddress CCrewMember::getCrewMemberAddress()
{
    return this->address;
}

int CCrewMember::getCrewMemberAirMinuets()
{
    return this->airMinuets;
}

//Setters
void CCrewMember::setCrewMemberName(string name)
{
    this->name = name;
}

void CCrewMember::setCrewMemberAddress(CAddress address)
{
    this->address = address;
}

void CCrewMember::Print() const
{
    cout << "Member name : " << this->name <<
         "\nAir minuets: " << this->airMinuets<<
         "\nAddress details :\n";
    this->address.Print();
}

bool CCrewMember::IsEqual(CCrewMember member) const
{
    return this->name == member.name;
}
