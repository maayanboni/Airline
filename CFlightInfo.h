
#ifndef AIRLINE_CFLIGHTINFO_H
#define AIRLINE_CFLIGHTINFO_H

#include "string.h"
using namespace std;
#include "iostream"

class CFlightInfo {
private:
    int flightNum;
    string dest;
    int flightDurationMinutes;
    int flightDistanceKm;

public:
    CFlightInfo(string, int, int, int);

    int getFlightNum() const;
    string getDest() const;
    int getFlightDurMin() const;
    int getFlightDisKm() const;

    void setFlightNum(int);
    void SetDest(string);
    void setFlightDurMin(int);
    void setFlightDisKm(int);

    bool isEqual(int) const;
    void Print() const;
};


#endif //AIRLINE_CFLIGHTINFO_H
