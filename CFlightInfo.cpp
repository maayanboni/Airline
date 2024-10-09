#include "CFlightInfo.h"

//D'tor
CFlightInfo::~CFlightInfo()
{
    delete[] dest;
}

//Getters
int CFlightInfo::GetFNum() const
{
    return flightNum;
}

char* CFlightInfo::getDest() const
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

void CFlightInfo::SetDest(char* dest)
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

//Operators
const CFlightInfo& CFlightInfo::operator=(const CFlightInfo& other)
{
    if(this != &other)
    {
        flightNum = other.flightNum;

        delete[]dest;
        dest = new char[strlen(other.dest) + 1];
        dest = strdup(other.dest);

        flightDurationMinutes = other.flightDurationMinutes;

        flightDistanceKm = other.flightDistanceKm;
    }
    return *this;
}

std::ostream& operator<<(std::ostream& os, const CFlightInfo& fInfo)
{
    os << "Flight Info:\n"
       << "Flight Number: " << fInfo.flightNum << "\n"
       << "Destination: " << fInfo.dest << "\n"
       << "Flight Time: " << fInfo.flightDurationMinutes << " minutes\n"
       << "Distance: " << fInfo.flightDistanceKm << " km\n";
    return os;
}

bool CFlightInfo::operator==(const CFlightInfo& other) const
{
    return flightNum == other.flightNum && dest == other.dest && flightDurationMinutes == other.flightDurationMinutes
           && flightDistanceKm == other.flightDistanceKm;
}

bool CFlightInfo::operator!=(const CFlightInfo& other) const
{
    return !(*this == other);
}

CFlightInfo::operator int() const
{
    return flightDurationMinutes;
}


//General
bool CFlightInfo::isEqual(int flightNum) const
{
    return this->flightNum == flightNum;
}

void CFlightInfo::Print() const
{
    cout << "Flight Info: " << this << endl;
}