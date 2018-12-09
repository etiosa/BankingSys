//
// Created by Etiosa Obasuyi on 2018-12-08.
//

#include "Company.h"
#include<iostream>

Company::Company()
//constructor
//super constructor or parent is called first: before the sub class. we can init any variable there
///Company::Company() :test(0)
/// error: member initializer 'test' does not name a non-static data member or
/// base class. because is not part of the memeber variable of company: constructor init is only use for member variable

{

    Address(); //can't call base class consturctor when is private and protected, however, you can call
    // protected memeber variables
    test=0;
    std::cout<<"company"<<std::endl;
    std::cout<<address1<<"empty!"<<std::endl;
}

Company::Company(const std::string &address1, const std::string &address2, const std::string &country,
                 const std::string &state, const std::string &zipcode, const std::string &phoneNumber,
                 const std::string &cellNumber, const std::string &compantAddress1, const std::string &compantAddress2,
                 const std::string &companyCountry, const std::string &companyState, const std::string &companyZipCode,
                 const std::string &companyPhoneNumber) : Address(address1, address2, country, state, zipcode,
                                                                  phoneNumber, cellNumber),
                                                          compantAddress1(compantAddress1),
                                                          compantAddress2(compantAddress2),
                                                          companyCountry(companyCountry), companyState(companyState),
                                                          companyZipCode(companyZipCode),
                                                          companyPhoneNumber(companyPhoneNumber) {}

