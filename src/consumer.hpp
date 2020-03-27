#ifndef CONSUMER_H
#define CONSUMER_H

#include "user.hpp"
#include "menu.hpp"
#include "seating_chart.hpp"
#include "display_shows.hpp"
#include "create_ticket.hpp"
#include "return.hpp"

class Consumer : public Routine {
    LoopState run(MenuContext* ctx) {
        cout <<"Consumer Menu" << endl;
        Menu consumer_menu;

        DisplayShows display_shows;
        CreateTicket create_ticket;
        Return logout;

        consumer_menu.addOption(string("List shows"), &display_shows);
        consumer_menu.addOption(string("Buy ticket"), &create_ticket);
        consumer_menu.addOption(string("Logout"), &logout);

        consumer_menu.display(ctx);

        return Continue;
    }
};
#endif