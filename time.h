#ifndef TIME_H
#define TIME_H
#include <iostream>
using namespace std;



class Time
{
    public:
    friend istream& operator >> (istream& in, Time& t);
    friend ostream& operator << (ostream& out, Time t);
    friend Time Duration(Time &Start, Time& End);
    Time();
     Time (int h, int m, string dn);
     bool operator < (Time t2);
     bool operator > (Time t2);
     bool operator == (Time t2);
     bool operator != (Time t2);



    private:
    int hour ;
    int minute ;
    string daynight ;

};

#endif // TIME_H
