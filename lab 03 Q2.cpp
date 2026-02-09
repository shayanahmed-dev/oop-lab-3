#include <iostream>
#include <string>

using namespace std;

class WeekDays {
private:
    string Days[7];
    int CurrentDay;

public:
    WeekDays() {
        Days[0] = "Sunday";
        Days[1] = "Monday";
        Days[2] = "Tuesday";
        Days[3] = "Wednesday";
        Days[4] = "Thursday";
        Days[5] = "Friday";
        Days[6] = "Saturday";
        CurrentDay = 0;
    }

    WeekDays(int d) {
        Days[0] = "Sunday";
        Days[1] = "Monday";
        Days[2] = "Tuesday";
        Days[3] = "Wednesday";
        Days[4] = "Thursday";
        Days[5] = "Friday";
        Days[6] = "Saturday";
        
        CurrentDay = d % 7;
    }

    string getCurrentDay() {
        return Days[CurrentDay];
    }

    string getNextDay() {
        int next = (CurrentDay + 1) % 7;
        return Days[next];
    }

    string getPreviousDay() {
        int prev = (CurrentDay - 1 + 7) % 7;
        return Days[prev];
    }

    string getNthDayFromToday(int n) {
        int futureDay = (CurrentDay + n) % 7;
        return Days[futureDay];
    }
};

int main() {
    WeekDays today(1); 

    cout << "Today is: " << today.getCurrentDay() << endl;
    cout << "Tomorrow is: " << today.getNextDay() << endl;
    cout << "Yesterday was: " << today.getPreviousDay() << endl;
    cout << "In 20 days, it will be: " << today.getNthDayFromToday(20) << endl;

    return 0;
}