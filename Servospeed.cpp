#include<iostream>
#include<fstream>
#include<cstdlib>
#include<string>
using namespace std;

int main() {
    int servo; int list = 1; int f_angle; int s_angle; int first_a; int second_a; int a = 1; 
    int pin_num;
    int pos;
 
        cout<<"Servo 1: Base. ";
        cout<<"Servo 2: Bicep.  ";
        cout<<"Servo 3: Elbow.  ";
        cout<<"Servo 4: Wrist. ";
        cout<<"Servo 5: Gripper. ";
        cout<<"Please enter a Servo option: 1 for Base, 2 for Bicep, 3 for Elbow, 4 for Wrist, 5 for Gripper."<<endl;
        cin>> servo;
        cout<<"Good, now enter a value for the initial posistion of the angle"<<endl;
        cin>>f_angle;
        cout<<"Good, now enter a value for the final posistion of the angle"<<endl;
        cin>>s_angle;
        cout<<"enter value for speed"<<endl;
        cin>>speed;
        while(a==1) {
        
        if((servo >= 0 && servo <= 5) && (f_angle>= 0 && f_angle <= 180 ) && (s_angle >= 0 && s_angle <= 180) && (speed > 0))
        {


            switch(servo) {
                case 1:
                    pin_num = 13;
                    break;
                case 2:
                    pin_num = 10;
                    break;
                case 3:
                    pin_num = 11;
                    break;
                case 4:
                    pin_num = 12;
                    break;
                case 5:
                    pin_num = 0;
                    break;
                default:
                    cout<<"invalid option, please select a proper servo command!"<<endl;


            }
            GPIO gpio(pin_num);
            first_a = (f_angle * 10) + 600;
            second_a = (s_angle *10)+600;
            num_periods = (((s_angle - f_angle)/speed) * 50);
            gpio.GeneratePin(20000, first_a, second_a, num);
            return 0;


        }
    }




}

