#pragma once
#ifndef DATE_H
#define DATE_H

#include <array>
#include <iostream>

class Date
{
    friend std::ostream &operator << (std::ostream &, const Date &);
public:
    Date(int m = 1, int d = 1, int y = 1900);//default constructor
    void setDate(int, int, int);//set month, day, year
    Date &operator++();//prefix increment operator
    Date operator++(int);//postfix increment operator
    Date &operator+=(unsigned int);//add days, modify object
    static bool leapYear(int);//is date in a leap year?
    bool endOfMonth(int) const;//is date at the end of month?

    bool beginningOfMonth(int) const;//is date at the beginning of month?

    //Now, add 3 new overloaded methods:  &operator--, operator--, and &operator-=
    Date &operator--();//postfix increment operator
    Date operator--(int);//postfix increment operator
    Date &operator-=(unsigned int);//subtract days, modify object

    //destructor
    ~Date(void);

private:
    unsigned int month;
    unsigned int day;
    unsigned int year;

    static const std::array<unsigned int, 13> days;//days per month
    void helpIncrement();//utility function for incrementing date
    void helpDecrement();//utility function for decrementing date

};//end class Date

#endif