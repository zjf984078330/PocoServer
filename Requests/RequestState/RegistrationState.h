//
// Created by user on 12/18/15.
//

#ifndef POCOSERVER_REGISTRATIONSTATE_H
#define POCOSERVER_REGISTRATIONSTATE_H

#include "State.h"
#include <vector>
#include "../../Helper/Singleton.h"

class RegistrationState :public State, public Singleton<RegistrationState>{

public:

    void processRequest(const std::string &data, User &context) override final;
    unique_ptr<vector<shared_ptr<User>>> waitQue;

private:
    friend class Singleton; // because we are invoking private ctor from template
    RegistrationState();
    RegistrationState(const RegistrationState& src);
    RegistrationState& operator=(const RegistrationState& rhs);

private:
    //RegistrationBehavior* behavior; // enterprise or community

};


#endif //POCOSERVER_REGISTRATIONSTATE_H
