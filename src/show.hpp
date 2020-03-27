#ifndef SHOW_H
#define SHOW_H

#include <iostream>

#include "seating_chart.hpp"

using namespace std;

class Show {

public:
    string title;
    SeatingChart seats;


    Show(): seats() {};

    Show(string t): seats() {
        title = t;
    };
};

#endif
