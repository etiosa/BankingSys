cmake_minimum_required(VERSION 3.12)
project(BankingSys)

set(CMAKE_CXX_STANDARD 17)

add_executable(BankingSys main.cpp Status/Account_Status.h Accounts/BankAccount.cpp Accounts/BankAccount.h Accounts/SavingAccount.cpp Accounts/SavingAccount.h Accounts/CheckingAccount.cpp Accounts/CheckingAccount.h Accounts/PersonalAccount.cpp Accounts/PersonalAccount.h Accounts/BusinessAccount.cpp Accounts/BusinessAccount.h Accounts/StudentAccount.cpp Accounts/StudentAccount.h Accounts/StudentAccount.cpp Accounts/StudentAccount.h Customers/Students.cpp Customers/Students.h Customers/Company.cpp Customers/Company.h Customers/Non_Student.cpp Customers/Non_Student.h Address/Address.cpp Address/Address.h)