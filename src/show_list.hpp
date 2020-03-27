#ifndef SHOW_LIST_H
#define SHOW_LIST_H

#include <iostream>
#include <map>
#include <vector>

#include "show_time.hpp"

using namespace std;

class ShowList {

public:
    map<ShowTime, Show> shows;
  
    ShowList(): shows() { }

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
    Show* select_show() {
        vector<Show*> show_vec;
        int count = 1;
        for (map<ShowTime,Show>::iterator it=shows.begin(); it!=shows.end(); ++it) {
            cout << count++ << " => " << it->second.title << '\n';
            show_vec.push_back(&it->second);
        }    
        int choice; 
        cin>>choice;
        return show_vec[choice-1];
    }
};


ShowList* exampleShowList() {
	map<ShowTime, Show> shows = map<ShowTime, Show>();   
	ShowList* upcoming_shows = new ShowList(shows);
	upcoming_shows->schedule(ShowTime(2,6), Show("Lion King"));
	upcoming_shows->schedule(ShowTime(9,10), Show("End Game"));
	upcoming_shows->schedule(ShowTime(11,14), Show("Les Miserables"));
	return upcoming_shows;
}
#endif