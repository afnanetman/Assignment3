#include "calender.h"
#include <iostream>
using namespace std;
#include "time.h"
#include "appointment.h"
#include "dayappointments.h"

    Calender::Calender (){};

    Calender::Calender (Calender& c)
    {
        numOfDays=c.numOfDays;
        days = new DayAppointments [numOfDays];
        for (int i=0 ; i<numOfDays; i++)
        {
            days[i]=c.days[i];
        }
    }

