
#include "CCrewMember.h"

int CCrewMember::member = 1000;
int CCrewMember::START_ID = 1000;


//D'tor
CCrewMember::~CCrewMember()
{
    delete[]name;
}


//Getters
char* CCrewMember::getCrewMemberName() const
{
    return this->name;
}

CAddress CCrewMember::getCrewMemberAddress() const
{
    return this->address;
}

int CCrewMember::getCrewMemberAirMinuets() const
{
    return this->airMinuets;
}

int CCrewMember::getCrewMemberNum() const
{
    return this->memberNum;
}

//Setters
void CCrewMember::setCrewMemberName(char* name)
{
    this->name = name;
}

void CCrewMember::setCrewMemberAddress(CAddress address)
{
    this->address = address;
}

//Operators
const CCrewMember& CCrewMember::operator=(const CCrewMember& other)
{
    if(this != &other)
    {
        memberNum = other.memberNum;

        delete[]name;
        name = new char[strlen(other.name) + 1];
        name = strdup(other.name);

        airMinuets = other.airMinuets;

        address = other.address;
    }
    return *this;
}


std::ostream& operator<<(std::ostream& os, const CCrewMember& member) {
    os << "Crew Member:"
        << member.memberNum << " " << member.name << " "
       << "minutes: " << member.airMinuets << "\n";
    return os;
}

bool CCrewMember::operator==(const CCrewMember& other) const
{
    return memberNum == other.memberNum;
}

bool CCrewMember::operator+=(int num)
{
    if (num >= 0)
    {
        airMinuets += num;
        return true;
    }
    return false;
}

//General
void CCrewMember::UpdateMinutes(int minuets)
{
    *this += minuets;
}

void CCrewMember::Print() const
{
    cout << "Member Details : " << this << endl;
}

bool CCrewMember::IsEqual(CCrewMember other) const
{
    return this == &other;
}
