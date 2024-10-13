#ifndef UNTITLED1_HOST_H
#define UNTITLED1_HOST_H

#include "CCrewMember.h"

enum HostType{REGULAR, SENIOR, ECONOMIST};
const char* types[] = {"Regular", "Senior", "Economist"};

class Host : public CCrewMember {
private:
    HostType type;

public:
    Host(const char* name, int airMinuets, HostType type, CAddress* address = nullptr)
    : CCrewMember(name, airMinuets, *address), type(type){}
    ~Host(){}
    Host(const Host& other) : CCrewMember(other), type(other.type){}

    void receiveHolidayGift() const;
    void receiveNewUniform() const;

};


#endif //UNTITLED1_HOST_H
