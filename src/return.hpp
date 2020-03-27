#ifndef RETURN_H
#define RETURN_H

#include "menu.hpp"

class Return: public Routine {

public:
    LoopState run(MenuContext* ctx) {
        return Break;
    }
};
#endif