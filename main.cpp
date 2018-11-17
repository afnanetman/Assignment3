#include <iostream>
using namespace std;
#include "time.h"
#include "appointment.h"
#include "dayappointments.h"
#include "calender.h"




// Name : Afnan Samir Mohammed
// ID : 20170054
// Group : 2
// CS213
// Assignment 3
// Dr .Mohammed Elramly


int main()
{

    Time t1(5,30,"AM");
    Time t2(7,45,"PM");
    Time t3(3,44,"PM");
    Time t4(7,30,"AM");
    Time t5(11,30,"PM");
    Time t6(12,35,"PM");
    Time t7(9,40,"AM");
    Time t8(8,45,"PM");
    cout << t1 << endl << t2 << endl ;
    cout << (t1<t2)<<endl;
    cout << (t1 > t2)<<endl;
    cout << (t1==t2)<<endl;
    cout << (t1!=t2)<<endl;
    Appointment a1(t1,t2);
    Appointment a2(t4,t3);
    Appointment a3(t5,t6);
    Appointment a4(t7,t8);
    cout << a1 << endl<< a2 << endl<< a3 << endl<< a4 << endl;
    cout << (a1<=a2)<<endl;
    cout << (a1 >= a2)<<endl;
    cout << (a3==a4)<<endl;
    cout << (a3!=a4)<<endl;


    DayAppointments d(2,"Monday");
    cin >> d;










    return 0;
}
istream& operator >> (istream& in, Time& t)
{
    int h,m;
    string dn;
    in >> h >> m >> dn;
    t.hour=h;
    t.minute=m;
    t.daynight=dn;
    return in;
}
ostream& operator << (ostream& out, Time t)
{
    out<<t.hour<<":"<<t.minute<<" " <<t.daynight;
    return out;
}

Time Duration(Time &Start, Time& End)
{
    Time t(0,0,"");
    if(Start.daynight == "AM" && End.daynight == "PM" || Start.daynight == "PM" && End.daynight == "AM")
    {
        t.hour= (End.hour+12)-Start.hour;
        t.minute= (60-Start.minute)+End.minute;
        t.hour--;
        if (t.minute>=60)
        {
            t.hour++;
            t.minute-=60;
        }
    }

    if(Start.daynight == "AM" && End.daynight == "AM" || Start.daynight == "PM" && End.daynight == "PM")
    {
        t.hour= End.hour-Start.hour;
        t.minute= Start.minute+End.minute;

        if (t.minute>=60)
        {
            t.hour++;
            t.minute-=60;
        }
    }
    return t;




}

istream& operator >> (istream& in, Appointment& a )
{
    cout << "Enter the start time : ";
    in >> a.start;
    cout << endl << "Enter the end time : ";
    in >> a.end;
    return in;
}


ostream& operator << (ostream& out, Appointment a)
{
    cout << "This appointment starts at ";
    out << a.start;
    cout << " & ends at ";
    out << a.end;
    cout <<endl;
    return out;
}

bool overlap (Appointment a1,Appointment a2)
{
    if (a1.start < a2.end)
        return true;
    else
        return false;
}




ostream& operator << (ostream& out, DayAppointments d)
{
    cout << "The Appointments of day " << d.weekDay << " Are : ";
    for (int i =0 ; i<d.numOfAppointments; i++)
    {
        out << d.appointments[i]<<" ";
    }
    return out;
}


istream& operator >> (istream& in, DayAppointments& d)
{

    cout << "Enter the day of the week : ";
    in >> d.weekDay ;
    cout << endl<<" Enter number of appointments : " ;
    in >>d.numOfAppointments;
    d[d.numOfAppointments];
    Time t(0,0,"AM");
    Appointment a(t,t);
    for (int i=0; i<d.numOfAppointments; i++)
    {
        d.appointments[i]=a;
    }

    cout << endl << "Enter appointments : ";
    for (int i=0; i<d.numOfAppointments; i++)
    {
        in >> d.appointments[i];

        if (i>0)
        {
            for (int j=0; j<i; j++)
            {
                if(overlap(d.appointments[i],d.appointments[j]))
                {
                    cout << "The appointments are overlapped , please re-enter your appointment "<<endl;
                    i--;
                    break;
                }
            }

        }
    }
    return in;

}
istream& operator >> (istream& in, Calender& c)
{
    cout << "Enter Number of days : ";
    in >> c.numOfDays ;
    cout << endl<<"Enter Day appointments : ";
    for (int i =0 ; i<c.numOfDays; i++)
    {
        in >> c.days[i];
    }
    return in;

}
ostream& operator << (ostream& out, Calender c)
{
    cout << "Number of days = ";
    out << c.numOfDays ;
    cout << endl << "Appoinments : ";
    for (int i=0; i<c.numOfDays; i++)
    {
        out <<c.days[i];
    }
    return out;

}








