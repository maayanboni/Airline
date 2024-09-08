
#include "iostream"
using namespace std;
#include "CFlightCompany.h"

CFlightCompany::CFlightCompany(string name)
{
    this->name = name;
}

string CFlightCompany::getCFlightCompany()
{

}

void CFlightCompany::Print() const
{
    cout << "Flight company: " << name << endl;
}

void CFlightCompany::SetName(string name)
{
    this->name = name;
}