#include <iostream>

using namespace std;
// Name : Afnan Samir Mohammed
// ID : 20170054
// Group : 2
// CS213
// Assignment 3
// Dr .Mohammed Elramly


int c (int n , int k){
    if ((n==k)||(k==0)) return 1;
    else return (c(n-1,k-1)+c(n-1,k));


}

int main()
{
cout <<c(6,2)<<endl<<c(5,3)<<endl<<c(4,2)<<endl<<c(2,1)<<endl;

    return 0;
}
