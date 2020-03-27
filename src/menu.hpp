#ifndef MENU_H
#define MENU_H

#include <iostream>
#include <map>
#include <vector>
#include "menu.hpp"
#include "show_list.hpp"

using namespace std;

struct MenuContext {
    ShowList* shows;
};

enum LoopState { 
    Break,
    Continue,
};

class Routine {
    public:
    virtual LoopState run(MenuContext *ctx) =0;
};

class Menu {
    map<string, Routine*> options;
    
public:
    void addOption(string label, Routine* routine) {
        options[label] = routine;
    }

    void display(MenuContext* ctx) {
       LoopState loop_state;
        do {    
            int i = 1;
            vector<Routine*> choices;
            for (map<string, Routine*>::iterator it=options.begin(); it!=options.end(); ++it) {
                cout << i++ << ' ' << it->first << endl;
                choices.push_back(it->second);
            }
            int choice;
            cin >> choice;
            
            loop_state = choices[choice-1]->run(ctx);
        } while (loop_state != Break) ;
    }
};
#endif