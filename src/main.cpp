#include <iostream>
#include <map>
#include <list>


#include "show.hpp"
#include "show_list.hpp"
#include "seating_chart.hpp"
#include "menu.hpp"
#include "consumer.hpp"
#include "venue_manager.hpp"

using namespace std;

int main(){
	ShowList* shows = exampleShowList();

	struct MenuContext ctx = {
		shows
	};
	
	Menu logIn = Menu();
	Consumer consumer;
	VenueManager venue_manager;
   
	
    logIn.addOption(string("Consumer"), &consumer);
    logIn.addOption(string("Also consumer"), &consumer);
	logIn.addOption(string("Venue manager"), &venue_manager);

	logIn.display(&ctx);
	

	delete shows;
	return 0;
};
