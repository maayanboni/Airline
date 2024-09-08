
#include "CFlightInfo.h"

//C'tor
CFlightInfo::CFlightInfo(string dest, int flightNum, int flightDurationMinutes, int flightDistanceKm)
{
    this->flightNum = flightNum;
    this->dest = dest;
    this->flightDurationMinutes = flightDurationMinutes;
    this->flightDistanceKm = flightDistanceKm;
}

//Getters
int CFlightInfo::getFlightNum() const
{
    return flightNum;
}

string CFlightInfo::getDest() const
{
    return dest;
}

int CFlightInfo::getFlightDurMin() const
{
    return flightDurationMinutes;
}

int CFlightInfo::getFlightDisKm() const
{
    return flightDistanceKm;
}

//Setters
void CFlightInfo::setFlightNum(int flightNum)
{
    this->flightNum = flightNum;
}

void CFlightInfo::SetDest(string dest)
{
    this->dest = dest;
}

void CFlightInfo::setFlightDurMin(int flightDurationMinutes)
{
    this->flightDurationMinutes = flightDurationMinutes;
}

void CFlightInfo::setFlightDisKm(int flightDistanceKm)
{
    this->flightDistanceKm = flightDistanceKm;
}

bool CFlightInfo::isEqual(int flightNum) const
{
    return this->flightNum == flightNum;
}

void CFlightInfo::Print() const
{
    cout << "Flight Num: " << flightNum;
    cout << " To " << dest;
    cout << "\nTime In Minutes: " << flightDurationMinutes;
    cout << "\nDistance In KM: " << flightDistanceKm << endl;
}