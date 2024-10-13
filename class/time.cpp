#include <iostream>
using namespace std;

class Time {
private:
    int hours;
    int minutes; 
    void normalize() {
        if (minutes >= 60) {
            hours += minutes / 60;
            minutes = minutes % 60;
        }
        if (minutes < 0) {
            int extra_hours = (minutes / 60) - 1;
            hours += extra_hours;
            minutes = 60 + (minutes % 60);
        }
    }

public:
    Time(int h = 0, int m = 0) : hours(h), minutes(m) {
        normalize();
    }
    Time operator+(Time &t) {
        return Time(hours + t.hours, minutes + t.minutes);
    }
    Time operator-(Time &t) {
        return Time(hours - t.hours, minutes - t.minutes);
    }
    bool operator==(Time &t) {
        return (hours == t.hours) && (minutes == t.minutes);
    }
    bool operator!=(Time &t) {
        return !(*this == t);
    }
    bool operator>(Time &t) {
        if (hours > t.hours) {
            return true;
        } else if (hours == t.hours && minutes > t.minutes) {
            return true;
        }
        return false;
    }
    bool operator<(Time &t) {
        if (hours < t.hours) {
            return true;
        } else if (hours == t.hours && minutes < t.minutes) {
            return true;
        }
        return false;
    }
    operator int() {
        return hours * 60 + minutes;
    }
    void print() {
        cout << hours << " hours and " << minutes << " minutes" << endl;
    }
};

int main() {
    Time t1(2, 50);
    Time t2(1, 30); 
    Time t3 = t1 + t2;
    cout << "Time after adding: ";
    t3.print();
    Time t4 = t1 - t2;
    cout << "Time after subtracting: ";
    t4.print();
    if (t1 == t2) {
        cout << "Times are equal." << endl;
    } else {
        cout << "Times are not equal." << endl;
    }

    if (t1 > t2) {
        cout << "t1 is greater than t2." << endl;
    }

    if (t1 < t2) {
        cout << "t1 is less than t2." << endl;
    }
    int totalMinutes = t1;
    cout << "Total minutes in t1: " << totalMinutes << " minutes" << endl;
    return 0;
}