#ifndef DAYAPPOINTMENTS_H
#define DAYAPPOINTMENTS_H
#include "appointment.h"
#include "time.h"
#include <iostream>
using namespace std;




class DayAppointments
{
public:
    friend istream& operator >> (istream& in, DayAppointments& d);
    friend ostream& operator << (ostream& out, DayAppointments d);

    DayAppointments ();
    DayAppointments (int n, string d );
    DayAppointments(DayAppointments& d);
    void operator = (DayAppointments& d);
    bool operator == (DayAppointments d2);
    bool operator != (DayAppointments d2);
    void operator [] (int n);




private:
    Appointment * appointments ;
    int numOfAppointments;
    string weekDay ;

};

#endif // DAYAPPOINTMENTS_H
