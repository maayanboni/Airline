#include "iostream"
#include "CFlightCompany.h"


//D'tor
CFlightCompany::~CFlightCompany()
{
    delete[]name;
    for (int i = 0; i < crewLen; ++i)
    {
        delete crew[i];
        crew[i] = nullptr;
    }

    for (int i = 0; i < planesLen; ++i)
    {
        delete planes[i];
        planes[i] = nullptr;
    }

    for (int i = 0; i < flightsLen; ++i)
    {
        delete flights[i];
        flights[i] = nullptr;
    }
}


//Getters
string CFlightCompany::getCFlightCompany() const
{
    return name;
}


//Setters
void CFlightCompany::SetName(char* name)
{
    name = new char[strlen(name) + 1];
    strcpy(name, name);
}


//Operators
const CFlightCompany& CFlightCompany::operator=(const CFlightCompany& other)
{
    if(this != &other)
    {
        delete[]name;
        name = strdup(other.name);

        for (int i = 0; i < crewLen; ++i)
        {
            delete crew[i];
        }
        for (int i = 0; i < planesLen; ++i)
        {
            delete planes[i];
        }
        for (int i = 0; i < flightsLen; ++i)
        {
            delete flights[i];
        }


        crewLen = other.crewLen;
        planesLen = other.planesLen;
        flightsLen = other.flightsLen;


        for (int i = 0; i < crewLen; ++i)
        {
            crew[i] = new CCrewMember(*other.crew[i]);
        }

        for (int i = 0; i < planesLen; ++i)
        {
            planes[i] = new CPlane(*other.planes[i]);
        }

        for (int i = 0; i < flightsLen; ++i)
        {
            flights[i] = new Flight(*other.flights[i]);
        }
    }
    return *this;
}

std::ostream& operator<<(std::ostream& os, const CFlightCompany& fCompany)
{
    os << "Flight Company: " << fCompany.name << "\n";
    os << "There are " << fCompany.crewLen << " Crew members:\n";
    for (int i = 0; i < fCompany.crewLen; ++i)
    {
        os << *fCompany.crew[i];
    }
    os << "There are " << fCompany.planesLen << " Planes:\n";
    for (int i = 0; i < fCompany.planesLen; ++i)
    {
        os << *fCompany.planes[i];
    }
    os << "There are " << fCompany.flightsLen << " Flights:\n";
    for (int i = 0; i < fCompany.flightsLen; ++i)
    {
        os << *fCompany.flights[i] << "\n";
    }
    return os;
}

bool CFlightCompany::operator==(const CFlightCompany& other) const
{
    return name == other.name && crew == other.crew && crewLen == other.crewLen
           && planes == other.planes && planesLen == other.planesLen && flights == other.flights
           && flightsLen == other.flightsLen;
}


//General Functions
void CFlightCompany::Print() const
{
    cout << this << endl;
}

bool CFlightCompany::AddCrewMember(const CCrewMember& newMember)
{
    for(int i = 0; i < crewLen; i++)
    {
        if(newMember == *crew[i])
        {
            return false;
        }
    }
    if (crewLen < MAX_CREW)
    {
        crew[crewLen++] = new CCrewMember(newMember);
        return true;
    }
    return false;
}

bool CFlightCompany::AddPlane(const CPlane& newPlane)
{
    for(int i = 0; i < planesLen; i++)
    {
        if(newPlane == *planes[i])
        {
            cout<<"already exist"<<endl;
            return false;
        }
    }
    if (planesLen < MAX_PLANES)
    {
        planes[planesLen++] = new CPlane(newPlane);
        return true;
    }
    return false;
}

bool CFlightCompany::AddFlight(const Flight& newFlight)
{
    for(int i = 0; i < flightsLen; i++)
    {
        if(newFlight == *flights[i])
        {
            cout<<"already exist"<<endl;
            return false;
        }
    }
    if (flightsLen < MAX_FLIGHTS)
    {
        flights[flightsLen++] = new Flight(newFlight);
        return true;
    }
    return false;
}

CCrewMember* CFlightCompany::findMember(const int memberNum)
{
    for(int i = 0; i < crewLen; i++)
    {
        if (crew[i]->getCrewMemberNum() == memberNum)
            return crew[i];
    }
    return nullptr;
}

Flight* CFlightCompany::findFlight(const int flightNum)
{
    for(int i = 0; i < flightsLen; i++)
    {
        if (flights[i]->GetFlightInfo().GetFNum() == flightNum)
            return flights[i];
    }
    return nullptr;
}

void CFlightCompany::AddCrewToFlight(int flightNumber, int crewEmployeeNum)
{
    Flight* flight = findFlight(flightNumber);
    CCrewMember* crewMember = findMember(crewEmployeeNum);

    if (flight && crewMember)
    {
        *flight + *crewMember;
    }
    else
    {
        if (!flight)
        {
            std::cout << "Flight with ID " << flightNumber << " not found." << std::endl;
        }
        if (!crewMember)
        {
            std::cout << "Crew member with ID " << crewEmployeeNum << " not found." << std::endl;
        }
    }
}

CPlane* CFlightCompany::GetPlane(int index)
{
    if (index < 0 || index >= planesLen) {
        std::cout << "Index out of bounds. Returning nullptr." << std::endl;
        return nullptr;
    }
    return planes[index];
}

