//
// Created by Vijay on 22/03/23.
//

#ifndef C___ACCOUNTLOCKED_H
#define C___ACCOUNTLOCKED_H

#include <stdexcept>
using namespace std;

class AccountLocked : public exception {
public:
    const char* what() const noexcept override {
        return "Your account is locked! Contact the admin...";
    }
};


#endif //C___ACCOUNTLOCKED_H
