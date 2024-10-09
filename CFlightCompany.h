
#ifndef AIRLINE_CFLIGHTCOMPANY_H
#define AIRLINE_CFLIGHTCOMPANY_H
#include "string"
using namespace std;

#include "CCrewMember.h"
#include "CPlane.h"
#include "Flight.h"

class CFlightCompany {
private:
    char* name;

    const static int MAX_CREW = 10;
    CCrewMember* crew[MAX_CREW];
    int crewLen;

    const static int MAX_PLANES = 5;
    CPlane* planes[MAX_PLANES];
    int planesLen;

    const static int MAX_FLIGHTS = 20;
    Flight* flights[MAX_FLIGHTS];
    int flightsLen;

    //copy c'tor private!
    CFlightCompany(const CFlightCompany& company);

public:
    CFlightCompany(const char* name) : crewLen(0), planesLen(0), flightsLen(0) {
        this->name = new char[strlen(name) + 1];
        strcpy(this->name, name);

        for (int i = 0; i < MAX_CREW; ++i) {
            crew[i] = nullptr;
        }
        for (int i = 0; i < MAX_PLANES; ++i) {
            planes[i] = nullptr;
        }
        for (int i = 0; i < MAX_FLIGHTS; ++i) {
            flights[i] = nullptr;
        }
    }

    CFlightCompany(CFlightCompany& company) = delete;
    ~CFlightCompany();

    string getCFlightCompany() const;
    void SetName(char*);

    const CFlightCompany& operator=(const CFlightCompany& other);
    friend std::ostream& operator<<(std::ostream& os, const CFlightCompany& fCompany);
    bool operator==(const CFlightCompany& other) const;

    void Print() const;

    bool AddCrewMember(const CCrewMember& newMember);
    bool AddPlane(const CPlane& newPlane);
    bool AddFlight(const Flight& newFlight);
    CCrewMember* findMember(const int);
    Flight* findFlight(const int);
    void AddCrewToFlight(int flightNumber, int crewEmployeeNum);
    CPlane* GetPlane(int index);

};


#endif //AIRLINE_CFLIGHTCOMPANY_H
