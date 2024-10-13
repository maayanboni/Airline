#ifndef UNTITLED1_HOST_H
#define UNTITLED1_HOST_H

#include "CCrewMember.h"

enum HostType{eRegular, eSuper, eCalcelan};
const char* types[] = {"Regular", "Senior", "Economist"};

class Host : public CCrewMember {
private:
    HostType type;

public:
    Host(const char* name, HostType type, CAddress* address = nullptr, int airMinuets = 0)
    : CCrewMember(name, airMinuets, *address), type(type){}
    ~Host(){}
    Host(const Host& other) : CCrewMember(other), type(other.type){}

    const Host& operator=(const Host& other);

    void receiveHolidayGift() const;
    void receiveNewUniform() const;

};


#endif //UNTITLED1_HOST_H
