
#ifndef AIRLINE_CPLANE_H
#define AIRLINE_CPLANE_H

#include "string.h"
#include "iostream"
using namespace std;

class CPlane {
private:
    static int currentSerial;
    int planeSerial;
    char* model;
    int numberOfChairs;

public:
    CPlane(int chairs, const char* planeModel)
            : planeSerial(currentSerial++), numberOfChairs(chairs)
    {
        model = strdup(planeModel);
    }

    CPlane(const CPlane& other)
            : planeSerial(other.planeSerial), numberOfChairs(other.numberOfChairs){
        model = new char[strlen(other.model) + 1];
        strcpy(model, other.model);
    }
    ~CPlane();

    int getPlaneSerial() const;
    char* getModel() const;
    int getNumberOfChairs() const;

    void setPlaneSerial(int);
    void setModel(char*);
    void setNumberOfChairs(int);

    const CPlane& operator=(const CPlane& other);
    friend std::ostream& operator<<(std::ostream& os, const CPlane& plane);
    bool operator==(const CPlane& other) const;
    const CPlane& operator++();
    CPlane operator++(int);


    void Print() const;
    bool IsEqual(const CPlane *) const;
};



#endif //AIRLINE_CPLANE_H
