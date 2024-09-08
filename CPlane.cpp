
#include "CPlane.h"

//C'tor
CPlane::CPlane(int planeSerial, int numberOfChairs, string model)
{
    this->planeSerial = planeSerial;
    this->model = model;
    this->numberOfChairs = numberOfChairs;
}

//Getters
int CPlane::getPlaneSerial() const
{
    return this->planeSerial;
}

string CPlane::getModel() const
{
    return this->model;
}

int CPlane::getNumberOfChairs() const
{
    return this->numberOfChairs;
}

//Setters
void CPlane::setPlaneSerial(int planeSerial)
{
    this->planeSerial = planeSerial;
}

void CPlane::setModel(string model)
{
    this->model = model;
}

void CPlane::setNumberOfChairs(int numberOfChairs)
{
    this->numberOfChairs = numberOfChairs;
}

void CPlane::Print() const
{
    cout << "Plane Serial: " << planeSerial;
    cout << "\nModel: " << model;
    cout << " has " << numberOfChairs << "  Chairs" << endl;
}

bool CPlane::IsEqual(CPlane other) const
{
    return this->planeSerial == other.planeSerial;
}