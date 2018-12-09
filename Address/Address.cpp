//
// Created by Etiosa Obasuyi on 2018-12-08.
//

#include "Address.h"
#include<iostream>

Address::Address()
{
    std::cout<<"Address constructor"<<std::endl;
}

Address::Address(std::string address1, std::string address2, std::string country,
                  std::string state,  std::string zipcode,  std::string phoneNumber,
                 std::string cellNumber) : address1(address1), address2(address2), country(country),
                                                  state(state), zipcode(zipcode), phoneNumber(phoneNumber),
                                                  cellNumber(cellNumber) {}
