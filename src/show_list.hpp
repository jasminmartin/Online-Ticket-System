#ifndef SHOW_LIST_H
#define SHOW_LIST_H

#include <iostream>
#include <map>
#include "show_time.hpp"

using namespace std;

class ShowList {

public:
    map<ShowTime, Show> shows;
  
    ShowList(map<ShowTime, Show> s) {
       shows = s;
    };
    
    void schedule(ShowTime show_time, Show show) {
        shows[show_time] = show;
    }

    void print_shows() {
        for (map<ShowTime,Show>::iterator it=shows.begin(); it!=shows.end(); ++it) {
            cout << it->first.start_date << " => " << it->second.title << '\n';
        }     
    }
};
#endif

// class Pair {
//     ShowTime first;
//     Show second;
// }