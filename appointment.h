#ifndef APPOINTMENT_H
#define APPOINTMENT_H
#include <iostream>
using namespace std;
#include "time.h"




class Appointment
{
public:
    friend istream& operator >> (istream& in, Appointment& a);
    friend ostream& operator << (ostream& out, Appointment a);
    friend bool overlap (Appointment a1,Appointment a2);


    Appointment();
    Appointment (Time s, Time e);
    bool operator <= (Appointment a2);
    bool operator>= (Appointment a2);
    bool operator== (Appointment a2);
    bool operator!= (Appointment a2);







private:
    Time start;
    Time end ;

};

#endif // APPOINTMENT_H
