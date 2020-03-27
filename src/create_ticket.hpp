#ifndef CREATE_TICKET_H
#define CREATE_TICKET_H

#include "menu.hpp"

class CreateTicket: public Routine {

public:
    LoopState run(MenuContext* ctx) {
     	cout << "Which show would you like to purchase tickets for"    << endl;
	
    	Show* show_selected = ctx->shows->select_show();
		cout << "You selected: " <<show_selected->title<< endl;
	
		show_selected->seats.displaySeatChart();
		show_selected->seats.updateSeatingChart();

        return Continue;
    }
};
#endif