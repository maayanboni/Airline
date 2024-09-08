
#ifndef AIRLINE_CFLIGHTCOMPANY_H
#define AIRLINE_CFLIGHTCOMPANY_H


class CFlightCompany {
private:
    string name;
public:
    CFlightCompany(string name);
    string getCFlightCompany();
    void Print() const;

    void SetName(string);
};


#endif //AIRLINE_CFLIGHTCOMPANY_H
