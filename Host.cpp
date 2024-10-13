#include "Host.h"

//Operators
const Host& Host::operator=(const Host& other)
{
    if(this != &other)
    {
        CCrewMember::operator=(other);

        type = other.type;
    }
    return *this;
}

//General Functions
void Host::receiveHolidayGift() const
{
    CCrewMember::receiveHolidayGift();
    cout<<" I wasn’t expecting it"<<endl;
}

void Host::receiveNewUniform() const
{
    cout << "I think the new uniform is very nice!" <<endl;
}


