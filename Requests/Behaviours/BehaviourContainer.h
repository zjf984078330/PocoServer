//
// Created by tm on 07/01/16.
//

#ifndef POCOSERVER_BEHAVIOURCONTAINER_H
#define POCOSERVER_BEHAVIOURCONTAINER_H


#include "RegistrationBehavior.h"

class BehaviourContainer {

public:
    RegistrationBehavior& getRegistrationBehaviour() const ;

protected:
    RegistrationBehavior* regBehaviour;
};


#endif //POCOSERVER_BEHAVIOURCONTAINER_H