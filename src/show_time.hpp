#ifndef SHOW_TIME_H
#define SHOW_TIME_H

class ShowTime {

public:
    unsigned int start_date;
    unsigned int end_date;

    ShowTime(unsigned int s, unsigned int e) {
        start_date = s; end_date = e;
    };

    // overloaded < operator
    bool operator<(const ShowTime& other) const {
        if (start_date < other.start_date) {
            return true;
        } else if (start_date > other.start_date) {
            return false;
        } else {
            return end_date < other.end_date;
        }
    }

};
#endif