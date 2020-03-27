#ifndef VENUE_MANAGER_H
#define VENUE_MANAGER_H

#include <string>

#include "user.hpp"
#include "menu.hpp"
#include "show_list.hpp"


void createShow(ShowList* upcoming_shows) {
	string show_name;
	int show_start_date;
	int show_end_date;
	cout << "Input show name: ";
    cin.ignore();
    getline(cin, show_name);
	cout << "Input show start date" << endl;

	cin >> show_start_date;
	cout << "Input end" << endl;
	cin >> show_end_date;

	upcoming_shows->schedule(ShowTime(show_start_date, show_end_date),Show(string(show_name)));
	cout << "Here is the updated show list: " << endl;
	upcoming_shows->print_shows();
}

class VenueManager: public Routine {		       

public:
    void run(MenuContext* ctx) {
        cout <<"Venue Manager menu" <<endl;

//        Menu venue_menu;
//        venue_menue.add_option(string("Browse shows"), BrowseShows);

        int choice;
        while (choice != 3) {
            cout << "Select from the menu using the numbers" << endl;
            cout << "(1) Browse shows" << endl;
            cout << "(2) Create a new show" << endl;
            cout << "(3) Log out" << endl;
            cin >> choice;
            switch (choice) {
                case 1: {
                    cout << "Current Shows:" << endl;
                    ctx->shows->print_shows();
                    break;
                }
                case 2: {
                    cout << "Create a new show" << endl;
                    createShow(ctx->shows);
                }
                case 3: {
                    // program();	
                }
                default: {
                    cout <<"Please select the option 1,2 or 3." <<endl;
                    break;
                }
            }
        }
    }
};
#endif