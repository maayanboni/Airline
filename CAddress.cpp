#include "CAddress.h"


//D'tor
CAddress::~CAddress()
{
    delete[]city;

    delete[]street;
}

//Getters
char* CAddress::getCity() const
{
    return city;
}

char* CAddress::getStreet() const
{
    return street;
}

int CAddress::getHomeNum() const
{
    return homeNum;
}


//Operators
CAddress& CAddress::operator=(const CAddress& other)
{
    if(this != &other)
    {
        delete[]city;
        delete[]street;

        city = new char[strlen(other.city) + 1];
        city = strdup(other.city);

        street = new char[strlen(other.street) + 1];
        street = strdup(other.street);

        homeNum = other.homeNum;
    }
    return *this;
}

std::ostream& operator<<(std::ostream& os, const CAddress& address) {
    os << (address.street ? address.street : "N/A") << " " << address.homeNum << ", " << (address.city ? address.city : "N/A")
    << "\n";
    return os;
}

bool CAddress::operator==(const CAddress& other) const
{
    return city == other.city && street == other.street && homeNum == other.homeNum;
}

istream& operator>>(istream& in, CAddress& a)
{
    char buffer[100];

    std::cout << "Please enter house number street name and city name:\n";
    in >> a.homeNum;

    in >> buffer;
    a.street = new char[strlen(buffer) + 1];
    strcpy(a.street, buffer);

    in >> buffer;
    a.city = new char[strlen(buffer) + 1];
    strcpy(a.city, buffer);

    return in;
}

bool CAddress::operator!=(const CAddress& other) const
{
    return !(*this == other);
}


//General
void CAddress::Print() const
{
    cout << "Address: " << this << endl;
}

void CAddress::UpdateAddress(const CAddress& other)
{
    *this = other;
}

char* CAddress::GetCurrentAddress() const
{
    char homeNumStr[12];
    int totalLength = strlen(city) + strlen(street) + strlen(homeNumStr) + 6;

    char* current = new char[totalLength];

    int number = homeNum;
    int temp = number;
    int length = 0;
    do {
        length++;
        temp /= 10;
    } while (temp > 0);

    char* str = new char[length + 1];

    str[length] = '\0';
    for (int i = length - 1; i >= 0; i--) {
        str[i] = (number % 10) + '0';
        number /= 10;
    }

    strcpy(current, city);
    strcat(current, ", ");
    strcat(current, street);
    strcat(current, ", ");
    strcat(current, homeNumStr);

    return current;
}




