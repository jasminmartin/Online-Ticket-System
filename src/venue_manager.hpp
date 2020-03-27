#ifndef VENUE_MANAGER_H
#define VENUE_MANAGER_H

#include <string>

#include "user.hpp"
#include "menu.hpp"
#include "show_list.hpp"
#include "display_shows.hpp"
#include "create_show.hpp"
#include "return.hpp"

class VenueManager: public Routine {		       

public:
    LoopState run(MenuContext* ctx) {
        cout <<"Venue Manager menu" <<endl;

        Menu venue_menu;

        DisplayShows display_shows;
        CreateShow create_show;
        Return logout;

        venue_menu.addOption(string("List shows"), &display_shows);
        venue_menu.addOption(string("Create show"), &create_show);
        venue_menu.addOption(string("Logout"), &logout);

        venue_menu.display(ctx);

        return Continue;
    }
};
#endif