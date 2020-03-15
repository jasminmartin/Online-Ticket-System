#include <iostream>
#include <map>

#include "show.hpp"
#include "show_list.hpp"

using namespace std;

int main(){
	ShowTime show_time = ShowTime(1,2);
	Show show = Show(string("Jaz Dance"));
	

	map<ShowTime, Show> shows = map<ShowTime, Show>();   
    
	shows[show_time] = show;
  

	ShowList upcoming_shows = ShowList(shows);

	// upcoming_shows.add(ShowTime(1,3), Show(string("Jaz dance")));
	upcoming_shows.schedule(ShowTime(5, 7),Show(string("Jaz dance 2")));

	upcoming_shows.print_shows();

	return 0;
}
