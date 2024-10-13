#ifndef UNTITLED1_CARGO_H
#define UNTITLED1_CARGO_H

#include "string.h"
#include <iostream>
using namespace std;

class Cargo {
private:
    int serial;
    char* model;
    int chairCount;
    float maxWeightKg;
    float maxVolumeCb;
    float currentWeightKg;
    float currentVolumeCb;

public:
    Cargo(int serial, const char* model, int chairCount, float maxWeightKg, float maxVolumeCb, float currentWeightKg = 0, float currentVolumeCb = 0)
            : serial(serial), chairCount(chairCount),
              maxWeightKg(maxWeightKg), maxVolumeCb(maxVolumeCb),
              currentWeightKg(currentWeightKg), currentVolumeCb(currentVolumeCb) {
        model = strdup(model);
    }

    Cargo(const Cargo& other)
            : serial(other.serial), model(other.model),
              chairCount(other.chairCount), maxWeightKg(other.maxWeightKg), maxVolumeCb(other.maxVolumeCb),
              currentWeightKg(other.currentWeightKg), currentVolumeCb(other.currentVolumeCb) {}

    ~Cargo() {
        delete[] model;
    }

    const Cargo& operator=(const Cargo& other);

    bool Load(const float weight, const float volume);
    void TakeOff(const int flightsMin) const;


};


#endif //UNTITLED1_CARGO_H
