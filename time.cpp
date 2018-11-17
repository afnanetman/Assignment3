#include "time.h"
Time :: Time() {};

Time :: Time (int h, int m, string dn)     //Constructor
{
    hour = h;
    minute = m;
    daynight=dn;
}
bool Time ::operator < (Time t2)
{
    Time t1(hour,minute,daynight) ;
    t1 = *this ; // Working on the data of this class
    if (t1.daynight=="AM"&& t2.daynight =="PM")
    {
        return true;
    }
    else if (t1.hour < t2.hour)
    {
        return true ;
    }
    else if (t1.minute<t2.minute)
    {
        return true;
    }
    else
        return false ;

}
bool Time ::operator > (Time t2)
{
    Time t1(hour,minute,daynight) ;
    t1 = *this ; // Working on the data of this class
    if (t1.daynight=="PM"&& t2.daynight =="AM")
    {
        return true;
    }
    else if (t1.hour > t2.hour)
    {
        return true ;
    }
    else if (t1.minute>t2.minute)
    {
        return true;
    }
    else
        return false ;

}

bool Time ::operator == (Time t2)
{
    Time t1(hour,minute,daynight) ;
    t1 = *this ; // Working on the data of this class
    if (t1.daynight==t2.daynight&& t1.hour==t2.hour && t1.minute==t2.minute)
    {
        return true;
    }

    else
        return false ;

}

bool Time :: operator != (Time t2)
{
    Time t1(hour,minute,daynight) ;
    t1 = *this ; // Working on the data of this class
    if (t1.daynight!=t2.daynight&& t1.hour!=t2.hour && t1.minute!=t2.minute)
        return true;

    else
        return false ;

}




