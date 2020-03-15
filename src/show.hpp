#ifndef SHOW_H
#define SHOW_H

#include <iostream>
using namespace std;

class Show {

public:
    string title;
    Show() {};

    Show(string t) {
        title = t;
    };
};

#endif
