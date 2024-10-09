
#include "CPlane.h"

int CPlane::currentSerial = 100;

//D'tor
CPlane::~CPlane()
{
    if(model)
    {
        delete[] model;
        model = nullptr;
    }

}

//Getters
int CPlane::getPlaneSerial() const
{
    return this->planeSerial;
}

char* CPlane::getModel() const
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

void CPlane::setModel(char* model)
{
    this->model = model;
}

void CPlane::setNumberOfChairs(int numberOfChairs)
{
    this->numberOfChairs = numberOfChairs;
}

//Operators
const CPlane& CPlane::operator=(const CPlane& other)
{
    if(this != &other)
    {
        planeSerial = other.planeSerial;

        delete[]model;
        model = new char[strlen(other.model) + 1];
        model = other.model;

        numberOfChairs = other.numberOfChairs;
    }
    return *this;
}

std::ostream& operator<<(std::ostream& os, const CPlane& plane)
{
    os << "Plane " << plane.planeSerial << " "
       << "degem " << plane.model << " " << "seats " << plane.numberOfChairs << "\n";
    return os;
}

bool CPlane::operator==(const CPlane& other) const
{
    return planeSerial == other.planeSerial && model == other.model && numberOfChairs == other.numberOfChairs;
}

const CPlane& CPlane::operator++()
{
    numberOfChairs++;
    return *this;
}

CPlane CPlane::operator++(int)
{
    CPlane temp(*this);
    numberOfChairs++;
    return temp;
}


//General
void CPlane::Print() const
{
    cout << "Plane : " << this << endl;
}

bool CPlane::IsEqual(const CPlane *other) const
{
    return this == other;
}