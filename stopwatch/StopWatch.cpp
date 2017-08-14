#include "StopWatch.h"
#include <ctime>

using namespace std;

    // returns the amount of time in seconds that has passed since the process (i.e. your program) started executing 
double getProcessTime()
{
    	clock_t time = clock();
    	return static_cast<double>(time)/CLOCKS_PER_SEC;
}
    
StopWatch::StopWatch( double startTime, double endTime): _startTime(startTime), _endTime(endTime){};

void StopWatch::StartWatch()
{
    	_startTime = getProcessTime();
    	return;
}

void StopWatch::EndWatch()
{
    	_endTime = getProcessTime();
}
    
void StopWatch::ResetWatch()
{
            _startTime = 0;
            _endTime = 0;
}
    
double StopWatch::getFunctionTime()  // calculate the lapsed time in calculating function 
{
    	return _endTime - _startTime;
}

