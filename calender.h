#ifndef CALENDER_H
#define CALENDER_H
#include <iostream>
using namespace std;
#include "time.h"
#include "appointment.h"
#include "dayappointments.h"



class Calender
{
    public:
        Calender();
        Calender (Calender& c);
            friend istream& operator >> (istream& in, Calender& c);
    friend ostream& operator << (ostream& out, Calender c);



    private:
    DayAppointments * days ;
    int numOfDays ;

};

#endif // CALENDER_H
