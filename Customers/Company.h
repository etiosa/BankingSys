//
// Created by Etiosa Obasuyi on 2018-12-08.
//

#ifndef BANKINGSYS_COMPANY_H
#define BANKINGSYS_COMPANY_H


#include "../Address/Address.h"

// Inherit from Address
//Subclass
//by default memmber  variables are private
class Company : public Address {







public:
    Company(const std::string &address1, const std::string &address2, const std::string &country,
            const std::string &state, const std::string &zipcode, const std::string &phoneNumber,
            const std::string &cellNumber, const std::string &compantAddress1, const std::string &compantAddress2,
            const std::string &companyCountry, const std::string &companyState, const std::string &companyZipCode,
            const std::string &companyPhoneNumber);

private:
    std::string compantAddress1;
    std::string compantAddress2;
    std::string companyCountry;
    std::string companyState;
    std::string companyZipCode;
    std::string companyPhoneNumber;



public:
    Company();
};


#endif //BANKINGSYS_COMPANY_H
