
#ifndef AIRLINE_CPLANE_H
#define AIRLINE_CPLANE_H

#include "string.h"
#include "iostream"
using namespace std;

class CPlane {
private:
    int planeSerial;
    string model;
    int numberOfChairs;

public:
    CPlane(int, int, string);

    int getPlaneSerial() const;
    string getModel() const;
    int getNumberOfChairs() const;

    void setPlaneSerial(int);
    void setModel(string);
    void setNumberOfChairs(int);

    void Print() const;
    bool IsEqual(CPlane) const;
};


#endif //AIRLINE_CPLANE_H
