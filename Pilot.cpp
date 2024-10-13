#include "Pilot.h"

//Operators
bool Pilot::operator==(const Pilot& other) const
{
    return this == &other && this->address == other.address;
}

//General Functions
void Pilot::receiveNewUniform() const
{
    cout << name << "this is the fifth time I get a new uniform – this is a waste of money!”" << endl;
}

void Pilot::receiveSimulatorMessage() const
{
    cout << "Pilot " << name << " got the message will come soon" <<endl;
}

bool Pilot::IsEqual(const Pilot other) const
{
    return this == &other;
}