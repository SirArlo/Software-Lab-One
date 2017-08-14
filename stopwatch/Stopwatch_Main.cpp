#include "StopWatch.h"
#include <ctime>
#include <iostream>

using namespace std;

void FunctionInQuestion();

int main()
{
    	StopWatch NewWatch;  // declare object NewWatch
    	NewWatch.StartWatch();  // start the time for the stop watch
    	//Function Start
        FunctionInQuestion();  // run the function to be timed
    	//Function End
    	NewWatch.EndWatch();   // stop the time 
        
    	cout << "The function took "<< NewWatch.getFunctionTime() << " seconds" << endl;
        NewWatch.ResetWatch();   // the reset function to clear previous time
        cout << NewWatch.getFunctionTime() << " -the Stopwatch has been reset" << endl;
    	return 0;
}

void FunctionInQuestion()
{
    int i = 0;
    while(i != 1000000000)
    {
        i++;
    }
        
    return;
}
