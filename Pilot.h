#ifndef UNTITLED1_PILOT_H
#define UNTITLED1_PILOT_H

#include "CCrewMember.h"

class Pilot : public CCrewMember{
private:
    bool isCaptain;

public:
    Pilot(const char* name, int airTime, bool captain, CAddress* addr = nullptr)
            : CCrewMember(name, airTime, *addr), isCaptain(captain) {}

    Pilot(const Pilot& other) : CCrewMember(other), isCaptain(other.isCaptain) {}

    ~Pilot() {}

    bool operator==(const Pilot& other) const;

    void receiveNewUniform() const;
    void handleTakeoff(int flightMinutes);
    void receiveSimulatorMessage() const;
    bool IsEqual(const Pilot other) const;

};


#endif //UNTITLED1_PILOT_H
