// DateTest.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include "Date.h"//Date class definition
using namespace std;

int main()
{
    Date d1 (12, 27, 2010);//December 27, 2010
    Date d2;//defaults to January 1, 1900

    cout << "d1 is" <<d1<< "\nd2 is " << d2;
    cout << "\n\nd1 += 7 is " << (d1 += 7);

    d2.setDate(2, 28, 2008);
    cout << "\n\n d2 is " << d2;
    cout << "\n++d2 is " << ++d2<<" (leap year allows 29th)";

    Date d3 (7, 13, 2010);

    cout << "\n\nTesting the prefix increment operator:\n"
            <<"d3 is "<<d3<<endl;
    cout<<"++d3 is "<< ++d3 << endl;
    cout <<"d3 is " <<d3;

    cout << "\n\nTesting the postfix increment operator:\n"
            <<"d3 is " << d3 << endl;
    cout<<"d3 is "<< d3++ <<endl;
    cout<<"d3 is "<<d3<< endl;

    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////
   
    Date d4 (12, 27, 2010);//December 27, 2010
    Date d5;//defaults to January 1, 1900

    cout << "\nd4 is" <<d4<< "\nd5 is " << d5;
    cout << "\n\nd4 -= 7 is " << (d4 -= 7);

    d4.setDate(3, 01, 2008);
    cout << "\n\n d5 is " << d4;
    cout << "\n--d5 is " << --d4<<" (leap year allows 29th)";

    Date d6 (7, 13, 2010);

    cout << "\n\nTesting the prefix increment operator:\n"
            <<"d6 is "<<d6<<endl;
    cout<<"--d6 is "<< --d6 << endl;
    cout <<"d6 is " <<d6;

    cout << "\n\nTesting the postfix increment operator:\n"
            <<"d6 is " << d6 << endl;
    cout<<"d6 is "<< d6-- <<endl;
    cout<<"d6 is "<<d6<< endl;

    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    system ("pause");
    return 0;
}//end main