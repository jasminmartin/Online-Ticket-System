#ifndef SEATING_CHART_H
#define SEATING_CHART_H


#include "show_time.hpp"
#include "show.hpp"
#include "show_list.hpp"

class SeatingChart {
	public:
	int seating_chart[10][10];
	
	SeatingChart(): seating_chart {
			{0,0,0,0,0,0,0,0,0},
			{0,0,0,0,0,0,0,0,0},
			{0,0,0,0,0,0,0,0,0},
			{0,0,0,0,0,0,0,0,0},
			{0,0,0,0,0,0,0,0,0},
			{0,0,0,0,0,0,0,0,0},
			{0,0,0,0,0,0,0,0,0},
			{0,0,0,0,0,0,0,0,0},
			{0,0,0,0,0,0,0,0,0}
		} {
		seating_chart[3][4] = 1;
	};
		
	void displaySeatChart()
	{
		cout << "************Seating Chart************" << endl;
		for(int i = 0; i < 10; i++){
			for(int j = 0; j < 10; j++){
			cout << seating_chart[i][j] << " ";
		}
		cout << endl;
	}
	};

	void setOccupied(int selected_row, int selected_column)
	{
		seating_chart[selected_row][selected_column] = 1;
	};

	void updateSeatingChart(){
		int selected_row;
		int selected_column;
		cout << "Using the coordinates, type in the row and column number of your seats" << endl;
		cout << "Input row number" << endl;
		cin >> selected_row;
		cout << "Input column number" << endl;
		cin >> selected_column;
		setOccupied(selected_row, selected_column);
		displaySeatChart();
	};

	void displayConsumerMenu() {

		int choice;
		ShowList* upcoming_shows = exampleShowList();

		while (choice != 3) {
			cout << "Select from the menu using the numbers" << endl;
			cout << "(1) Browse shows" << endl;
			cout << "(2) Purchase tickets" << endl;
			cout << "(3) Log out" << endl;
			cin >> choice;
			switch (choice) {
				case 1: {
					cout << "Current Shows:" << endl;
					upcoming_shows->print_shows();
					break;
				}
				case 2: {
					cout << "Which show would you like to purchase tickets for?" << endl;
					Show* show_selected = upcoming_shows->select_show();
					cout << "You selected: " <<show_selected->title<< endl;
					SeatingChart* chart = new SeatingChart();
					chart->displaySeatChart();
					chart->updateSeatingChart();
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