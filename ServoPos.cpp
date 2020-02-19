int main() {
    int servo; int list = 1; int f_angle; int s_angle;
    int speed = 0;
    int pin_num;
    int pos;
    while( list == 1) {
        cout<<"Servo 1: Base"<<endl;
        cout<<"Servo 2: Bicep "<<endl;
        cout<<"Servo 3: Elbow"<<endl;
        cout<<"Servo 4: Wrist "<<endl;
        cout<<"Servo 5: Gripper"<<endl;
        cout<<"Please enter a Servo option: 1 for Base, 2 for Bicep, 3 for Elbow, 4 for Wrist, 5 for Gripper."<<endl;
        cin>> servo;
        cout<<"Good, now enter a value for the initial posistion of the angle"<<endl;
        cin>>f_angle;
        cout<<"Good, now enter a value for the final posistion of the angle"<<endl;
        cin>>s_angle;
        cout<<"enter value for speed"<<endl;
        cin>>speed;

        if((servo >= 0 && servo <= 5) && (pos>= 0 && pos <= 180 )) {
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
            gpio.GeneratePin(20000,(pos *10) + 600, 400 );
            return 0;

        }
    }



    
}
