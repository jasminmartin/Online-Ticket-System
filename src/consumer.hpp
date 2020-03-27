#ifndef CONSUMER_H
#define CONSUMER_H

#include "user.hpp"
#include "routine.hpp"
#include "seating_chart.hpp"

class Consumer : public Routine {
    void run() {
        cout <<"Consumer Menu" << endl;
		SeatingChart seats = SeatingChart();
		seats.displayConsumerMenu();
    }
};
#endif