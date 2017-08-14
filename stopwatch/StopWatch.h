#ifndef STOPWATCH_H
#define STOPWATCH_H

    // returns the amount of time in seconds that has passed since the process (i.e. your program) started executing 
double getProcessTime();

class StopWatch{
    
public:
    
        StopWatch( double startTime = 0, double endTime = 0 );  // class constructor
        void StartWatch();   // stopwatch start function
        void EndWatch();     // stopwatch end funtion
        void ResetWatch();   // stop watch reset function
        double getFunctionTime();  // caluclating the time lasped in the process being timed
private:
    
        double _startTime;
        double _endTime;
    };
    
#endif