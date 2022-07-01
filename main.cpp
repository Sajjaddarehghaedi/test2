#include <iostream>
#include <string>
//sajjad added just for testing the git
//new test
using namespace std;

int main()
{
    // the date we were born
    cout << " what date were you born  \n " ;
    int date0 ;
    cout << "enter a date \n " ;
    cin >> date0 ;
    int mounth0 ;
    cout << " enter a mounth " << " \n " ;
    cin >> mounth0 ;
    int year0 ;
    cout << " enter a year \n" ;
    cin >> year0 ;
    /* date today */
    cout << " what date is today " << " \n ";
    int date1 ;
    cout << "enter a date \n " ;
    cin >> date1 ;
    int mounth1 ;
    cout << " enter a mounth \n " ;
    cin >> mounth1;
    int year1 ;
    cout << " enter a year \n " ;
    cin >> year1;
    char d ;
    cout << " your age is \n " << "enter word c \n " ;
    cin >> d ;
    switch ( d ) {
        case 'c' :
            cout << year1-year0 << " years " << mounth0-mounth1 << " mounths " << date0-date1 << " dates " << " passed " ;
        break;

    }
    //this is a program with c++ language
    


    return 0;
}
