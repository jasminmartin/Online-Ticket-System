#ifndef SEATING_CHART_H
#define SEATING_CHART_H

using namespace std;

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
	}
};
#endif