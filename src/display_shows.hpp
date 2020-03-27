#ifndef DISPLAY_SHOWS_H
#define DISPLAY_SHOWS_H

#include "menu.hpp"

class DisplayShows: public Routine {

public:
    LoopState run(MenuContext* ctx) {
        cout << "Current Shows:" << endl;
        ctx->shows->print_shows();   
        return Continue;
    }
};
#endif