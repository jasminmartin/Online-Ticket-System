#include <iostream>
#include <map>
#include <list>


#include "show.hpp"
#include "show_list.hpp"
#include "seating_chart.hpp"
#include "menu.hpp"
#include "consumer.hpp"
#include "venue_manager.hpp"
#include "routine.hpp"


using namespace std;

void logIn() {
	cout << "Please Login" << endl;
	cout << "(1) Consumer" << endl;
	cout << "(2) Venue Manager" << endl;
	cout << "(3) Quit Program" << endl;

	int choice;
	while (1) {
		cin >> choice;
		switch (choice) {
		case 1: {
				cout <<"Consumer Menu" << endl;
				SeatingChart seats = SeatingChart();
				seats.displayConsumerMenu();
		}
		case 2: {
			cout <<"Venue Manager menu" <<endl;
			VenueManager venue_manager;
			venue_manager.run();
		}
		case 3: {
			break;
		}
		default: {
				cout <<"Please pick an option - 1, 2 or 3" <<endl;
			}
		}
	}
}

void program() {
	logIn();
}


int main(){
	Menu logIn = Menu();
	Consumer consumer;
	VenueManager venue_manager;
    logIn.addOption(string("Consumer"), &consumer);
    logIn.addOption(string("Also consumer"), &consumer);
	logIn.addOption(string("Venue manager"), &venue_manager);

	logIn.display();
	//program();
	return 0;
};
