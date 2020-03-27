#ifndef MENU_H
#define MENU_H

#include <iostream>
#include <map>
#include <vector>
#include "routine.hpp"

using namespace std;

class Menu {
    map<string, Routine*> options;
    
public:
    void addOption(string label, Routine* routine) {
        options[label] = routine;
    }

    void display() {
        int i = 1;
        vector<Routine*> choices;
        for (map<string, Routine*>::iterator it=options.begin(); it!=options.end(); ++it) {
            cout << i++ << ' ' << it->first << endl;
            choices.push_back(it->second);
        }
        int choice;
        cin >> choice;
        choices[choice-1]->run();
    }
};
#endif