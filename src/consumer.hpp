#ifndef CONSUMER_H
#define CONSUMER_H

#include "user.hpp"
#include "menu.hpp"
#include "seating_chart.hpp"

class Consumer : public Routine {
    LoopState run(MenuContext* ctx) {
        cout <<"Consumer Menu" << endl;
		SeatingChart seats = SeatingChart();
		seats.displayConsumerMenu();
        return Continue;
    }
};
#endif