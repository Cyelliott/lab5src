#include<iostream>
#include<fstream>
#include<cstdlib>
#include<string>
using namespace std;
int pulse = 0;
void GPIO::GenerateVariablePWM(int period,int first_pulse,int last_pulse, int num_periods) {
    for(int i = 0; i < num_periods; i++) {
        pulse = first_angle * i * ((last_pulse - first_pulse)/num_periods);
        cout<<"the pulse is: "<<pulse;
        write(fd, "1", 1);
        usleep(period-pulse);

    }
}
