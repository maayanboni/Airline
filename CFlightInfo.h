
#ifndef AIRLINE_CFLIGHTINFO_H
#define AIRLINE_CFLIGHTINFO_H

#include "string.h"
using namespace std;
#include "iostream"

class CFlightInfo {
private:
    int flightNum;
    char* dest;
    int flightDurationMinutes;
    int flightDistanceKm;

public:
    CFlightInfo(const char* destination, int flightNum, int flightDurationMinutes, int flightDistanceKm)
            : flightNum(flightNum), flightDurationMinutes(flightDurationMinutes), flightDistanceKm(flightDistanceKm) {
        this->dest = new char[strlen(destination) + 1];
        strcpy(this->dest, destination);
    }

    CFlightInfo(const CFlightInfo& other) : flightNum(other.flightNum), flightDurationMinutes(other.flightDurationMinutes),
              flightDistanceKm(other.flightDistanceKm) {
        if (other.dest) {
            dest = new char[strlen(other.dest) + 1];
            strcpy(dest, other.dest);
        } else {
            dest = nullptr;
        }
    }

    ~CFlightInfo();

    int GetFNum() const;
    char* getDest() const;
    int getFlightDurMin() const;
    int getFlightDisKm() const;

    void setFlightNum(int);
    void SetDest(char*);
    void setFlightDurMin(int);
    void setFlightDisKm(int);

    const CFlightInfo& operator=(const CFlightInfo& other);
    friend std::ostream& operator<<(std::ostream& os, const CFlightInfo& fCompany);
    bool operator==(const CFlightInfo& other) const;
    bool operator!=(const CFlightInfo& other) const;
    operator int() const;

    bool isEqual(int) const;
    void Print() const;
};


#endif //AIRLINE_CFLIGHTINFO_H
