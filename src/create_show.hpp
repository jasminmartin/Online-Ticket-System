#ifndef CREATE_SHOW_H
#define CREATE_SHOW_H

#include "menu.hpp"

class CreateShow: public Routine {

public:
    LoopState run(MenuContext* ctx) {
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

        ctx->shows->schedule(ShowTime(show_start_date, show_end_date),Show(string(show_name)));
        
        cout << "Here is the updated show list: " << endl;
        ctx->shows->print_shows();

        return Continue;
    }
};
#endif