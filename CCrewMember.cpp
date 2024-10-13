#include "CCrewMember.h"


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
        <<  " " << member.name << " "
       << "minutes: " << member.airMinuets << "\n";
    return os;
}

bool CCrewMember::operator==(const CCrewMember& other) const
{
    return name == other.name;
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

void CCrewMember::receiveHolidayGift() const
{
    cout<<name<<" thanking the company for receiving the holiday gift.\n"<<endl;
}

void CCrewMember::handleTakeoff(int flightMinutes)
{
    airMinuets += flightMinutes;
}
