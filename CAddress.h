
#ifndef AIRLINE_CADDRESS_H
#define AIRLINE_CADDRESS_H
#include "string"
#include "iostream"
using namespace std;

class CAddress {
private:
    char* city;
    char* street;
    int homeNum;

public:
    CAddress(int homeNum = 0, const char* street = nullptr, const char* city = "Tel Aviv")
            : homeNum(homeNum), street(nullptr), city(nullptr) {
        if(city)
        {
            this->city = new char[strlen(city) + 1];
            strcpy(this->city, city);
        }

        if(street)
        {
            this->street = new char[strlen(street) + 1];
            strcpy(this->street, street);
        }
    }

    CAddress(const CAddress& other) : homeNum(other.homeNum)
    {
        if (other.city)
        {
            city = new char[strlen(other.city) + 1];
            strcpy(city, other.city);
        } else {
            city = nullptr;
        }

        if (other.street)
        {
            street = new char[strlen(other.street) + 1];
            strcpy(street, other.street);
        } else {
            street = nullptr;
        }
    }
    ~CAddress();

    char* getCity() const;
    char* getStreet() const;
    int getHomeNum() const;

    CAddress& operator=(const CAddress& other);
    friend ostream& operator<<(ostream& os, const CAddress& a);
    bool operator==(const CAddress& other) const;
    friend std::istream& operator>>(std::istream& in, CAddress& address);
    bool operator!=(const CAddress& other) const;

    void Print() const;
    void UpdateAddress(const CAddress& other);
    char* GetCurrentAddress() const;
};


#endif //AIRLINE_CADDRESS_H
