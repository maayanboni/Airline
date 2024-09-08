
#ifndef AIRLINE_CADDRESS_H
#define AIRLINE_CADDRESS_H
#include "string"
#include "iostream"
using namespace std;

class CAddress {
private:
    string city;
    string street;
    int homeNum;

public:
    CAddress(int, string, string = "Tel Aviv");
    string getCity() const;
    string getStreet() const;
    int getHomeNum() const;
    void Print() const;
    void UpdateAddress(string, string, int);
};


#endif //AIRLINE_CADDRESS_H
