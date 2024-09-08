
#include "CAddress.h"


CAddress::CAddress(int homeNum, string street, string city)
{
    UpdateAddress(city, street, homeNum);
}

string CAddress::getCity() const
{
    return city;
}

string CAddress::getStreet() const
{
    return street;
}

int CAddress::getHomeNum() const
{
    return homeNum;
}

void CAddress::Print() const
{
    cout << "City: " << city << "\n";
    cout << "Street: " << street;
    cout << " Num: " << homeNum << "\n" << endl;
}

void CAddress::UpdateAddress(string city, string street, int homeNum)
{
    this->city = city;
    this->street = street;
    this->homeNum = homeNum;
}




