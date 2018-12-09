//
// Created by Etiosa Obasuyi on 2018-12-08.
//

#ifndef BANKINGSYS_ADDRESS_H
#define BANKINGSYS_ADDRESS_H


#include <string>

class Address {
protected:
    std::string address1;
    std::string address2;
    std::string country;
    std::string state;
    std::string zipcode;
    std::string phoneNumber;
    std::string cellNumber;
public:
    Address(std::string address1,  std::string address2,  std::string country,
             std::string state, std::string zipcode,  std::string phoneNumber,
             std::string cellNumber);

public:
    int test;
    Address();

};


#endif //BANKINGSYS_ADDRESS_H
