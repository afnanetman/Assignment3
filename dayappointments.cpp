#include "dayappointments.h"
#include "appointment.h"
#include "time.h"
#include <iostream>
using namespace std;




DayAppointments :: DayAppointments () {};
DayAppointments :: DayAppointments (int n, string d )
{
    numOfAppointments = n;
    appointments = new Appointment [numOfAppointments];
    Time t(0,0,"AM");
    Appointment a(t,t);
    for (int i=0; i<numOfAppointments; i++)
    {
        appointments[i]=a;
    }
    weekDay=d;
}

DayAppointments :: DayAppointments(DayAppointments& d)
{
    numOfAppointments = d.numOfAppointments;
    appointments = new Appointment [numOfAppointments];
    for (int i=0; i< d.numOfAppointments; i++)
    {
        appointments[i]=d.appointments[i];
    }
    weekDay=d.weekDay;


}

void DayAppointments :: operator = (DayAppointments& d)
{
    numOfAppointments=d.numOfAppointments;
    for (int i=0; i<d.numOfAppointments; i++)
    {
        appointments[i]=d.appointments[i];
    }
    weekDay=d.weekDay;

}
bool DayAppointments:: operator == (DayAppointments d2)
{
    if ((numOfAppointments == d2.numOfAppointments) && (weekDay==d2.weekDay))
    {
        int c=0;
        for (int i=0 ; i< numOfAppointments ; i++)
        {
            if (appointments[i]==d2.appointments[i])
                c++;
        }
        if (c==numOfAppointments)
        {
            return true;
        }
    }
    else
        return false ;

}
bool  DayAppointments:: operator != (DayAppointments d2)
{
    if ((numOfAppointments != d2.numOfAppointments) || (weekDay!=d2.weekDay))
        return true;
    else if ((numOfAppointments == d2.numOfAppointments) && (weekDay==d2.weekDay))
    {
        for (int i= 0 ; i< numOfAppointments ; i++)
        {
            if (appointments[i]==d2.appointments[i]);
            return true;
        }
    }
    else
        return false ;

}


void DayAppointments ::operator [] (int n)
{
    numOfAppointments=n;

}


