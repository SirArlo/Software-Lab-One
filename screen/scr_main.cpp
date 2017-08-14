// Making the initial A
#include "screen.h"
#include <iostream>

using namespace std;

int main()
{
	Screen myScreen{6,6};
    
    myScreen.clear(' ');
	myScreen.move(1,3);
	myScreen.set('*');
    myScreen.forward();
    myScreen.set('*');
    myScreen.move(2,2);
    myScreen.set('*');
    myScreen.move(2,5);
    myScreen.set('*');
    myScreen.move(3,6);
    myScreen.set('*');
    myScreen.move(3,1);
    myScreen.set('*');
    myScreen.move(4,1);
    myScreen.set('*');
    myScreen.forward();
    myScreen.set('*');
    myScreen.forward();
    myScreen.set('*');
    myScreen.forward();
    myScreen.set('*');
    myScreen.forward();
    myScreen.set('*');
    myScreen.forward();
    myScreen.set('*');
    myScreen.move(5,1);
    myScreen.set('*');
    myScreen.move(6,1);
    myScreen.set('*');
    myScreen.move(5,6);
    myScreen.set('*');
    myScreen.move(6,6);
    myScreen.set('*');

    myScreen.display();

    return 0;
}
