#include "appointment.h"
#include "time.h"



Appointment :: Appointment() {};
Appointment :: Appointment (Time s, Time e)
{
    start =s ;
    end =e;
}
bool Appointment :: operator <= (Appointment a2)
{
    if (Duration(start,end)== Duration(a2.start,a2.end))
        return true;
    else if (Duration(start,end)< Duration(a2.start,a2.end))
        return true;
    else
        return false;
}

bool Appointment :: operator>= (Appointment a2)
{

    if (Duration(start,end)== Duration(a2.start,a2.end))
        return true;
    else if (Duration(start,end)> Duration(a2.start,a2.end))
        return true;
    else
        return false;
}
bool  Appointment :: operator== (Appointment a2)
{

    if (Duration(start,end)== Duration(a2.start,a2.end))
        return true;
    else
        return false;

}
bool   Appointment :: operator!= (Appointment a2)
{

    if (Duration(start,end)== Duration(a2.start,a2.end))
        return false;
    else
        return true;

}





