#include "Host.h"

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


