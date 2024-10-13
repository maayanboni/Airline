//
// Created by Maayan Boni on 13/10/2024.
//

#include "Cargo.h"

//Operators
const Cargo& Cargo::operator=(const Cargo& other)
{
    if(this != &other)
    {
        serial = other.serial;

        delete[]model;
        model = new char[strlen(other.model) + 1];
        model = other.model;

        chairCount = other.chairCount;
        maxWeightKg = other.maxWeightKg;
        maxVolumeCb = other.maxVolumeCb;
        currentWeightKg = other.currentWeightKg;
        currentVolumeCb = other.currentVolumeCb;
    }
    return *this;
}

//General Functions
bool Cargo::Load(const float weight, const float volume)
{
    if(maxWeightKg <= weight+currentWeightKg && maxVolumeCb <= volume+currentVolumeCb)
    {
        currentWeightKg += weight;
        currentVolumeCb += volume;
    }
}

void Cargo::TakeOff(const int flightsMin) const
{
    cout << "Need to add " << flightsMin << " to my log book" << endl;
}
