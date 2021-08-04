#include <iostream>
#include <stdio.h>
#include <string>
#include <cstring>
using namespace std;

class Base{    // features common to both classes
    public:
        string name;
        string password;
        
        void login(string n, string p){     
            name = n;
            password = p;
        }
};

// Hierarchial Inheritance is Demonstrated

class Doctor : public Base{     // Inheritance from Base Class
    public:
        string sched[5] = {"available", "available", "available", "available", "available"};
        void schedule(){
            cout << "\nYour Schedule for the day : \n";
            for (int i = 0; i < 5; i++){
                cout << "Slot " << (i + 1) << " : " << sched[i] << endl;
            }
        }
        int edit_schedule(int slot, string name){
            if (sched[slot-1] == "available"){
                sched[slot-1] = name;
                cout << "Appointment Booked Successfully\n";
                return 1;
            }
            else{
                cout << "Sorry, this Slot has already been Booked. Please choose another slot : ";
                cin >> slot;
                edit_schedule(slot, name);
        
                return 0;
            }
        }
};

class Patient : public Base{     // Inheritance from Base Class
    public:
        string name;
        int age;
        string symptoms;
        string history;
        
        string pres;
        string note;
        
        void patient_info(){
            //cout << "Please Enter your Name : ";
            //cin >> name;
            cout << "\nPlease Enter your Age : ";
            cin >> age;
            cin.ignore(256, '\n');
            cout << "Please Enter your Symptoms : ";
            getline(cin, symptoms); 
            cout << "Enter Chronic Illnesses, if you have any : ";
            getline(cin, history); 
        }
        void display(){
            cout << "\nName : " << name;
            cout << "\nAge : " << age;
            cout << "\nSymptoms : " << symptoms;
            cout << "\nHistory : " << history;
            cout << endl << endl;
        }
    
        void prescription(){
            cout << "Enter the Prescription : ";
            cin.ignore(256, '\n');
            getline (cin, pres);
        }   
        void display_prescription(){
            cout << "Prescription : " << pres << endl;
        }
        void notes(){
            cout << "Enter the Notes : ";
            cin.ignore(256, '\n');
            getline (cin, note);
        }
        void display_notes(){
            cout << "Notes : " << note << endl;
        }
};


// Doctor Objects

Doctor Sushma;
Doctor Kiruba;
Doctor Shreya;
Doctor Jothi;
Doctor Mary;

// Patient Objects

Patient pt1;
Patient pt2;
Patient pt3;
Patient pt4;
Patient pt5;


int main(){
    int dop;     // doctor or patient
    int choice;
    string choice1;
    int choice2;
    string name;
    string password;
    string ID;
    int slot;
    
    do{
    cout << "Click 1 if you are a Doctor\nClick 2 if you are a Patient\nClick 0 to Exit\n";
    cout << "\nPlease Enter your Choice : ";
    cin >> dop;
    
    switch(dop){
        case 1:     // for Doctors
            cout << "\nWelcome, Doctor!\n\n";
            cout << "Username : ";
            cin >> name;
            cout << "Password : ";
            cin >> password;
            cout << endl;
            
            if ((name == "Sushma") && (password == "su1234")){
                Sushma.login(name, password);
                cout << "Click 1 to view your Schedule\nClick 2 to write a Prescription\nClick 3 to write Notes\nClick 4 to view Patient Details\nClick 5 to View Prescription\nClick 6 to view Notes\nClick 7 to Logout\nClick 0 to Exit\n";
                do{
                cout << "\nPlease Enter your Choice : ";
                cin >> choice;
                switch(choice){
                    case 1:
                        Sushma.schedule();
                        break;
                    case 2:
                        cout << "Choose your Patient : ";
                        cin >> choice1;
                        if (choice1 == "pt1"){
                            pt1.prescription();
                        }
                        else if (choice1 == "pt2"){
                            pt2.prescription();
                        }
                        else if (choice1 == "pt3"){
                            pt3.prescription();
                        }
                        else if (choice1 == "pt4"){
                            pt4.prescription();
                        }
                        else if (choice1 == "pt5"){
                            pt5.prescription();
                        }
                        else{
                            cout << "Please Enter the Correct Patient\'s Name\n";
                        }
                        break;
                    case 3:
                        cout << "Choose your Patient : ";
                        cin >> choice1;
                        if (choice1 == "pt1"){
                            pt1.notes();
                        }
                        else if (choice1 == "pt2"){
                            pt2.notes();
                        }
                        else if (choice1 == "pt3"){
                            pt3.notes();
                        }
                        else if (choice1 == "pt4"){
                            pt4.notes();
                        }
                        else if (choice1 == "pt5"){
                            pt5.notes();
                        }
                        else{
                            cout << "Please Enter the Correct Patient\'s Name\n";
                        }
                        break;
                    case 4:
                        cout << "Choose your Patient : ";
                        cin >> choice1;
                        if (choice1 == "pt1"){
                            pt1.display();
                        }
                        else if (choice1 == "pt2"){
                            pt2.display();
                        }
                        else if (choice1 == "pt3"){
                            pt3.display();
                        }
                        else if (choice1 == "pt4"){
                            pt4.display();
                        }
                        else if (choice1 == "pt5"){
                            pt5.display();
                        }
                        else{
                            cout << "Please Enter the Correct Patient\'s Name\n";
                        }
                        break;
                        
                    case 5:
                        cout << "Choose your Patient : ";
                        cin >> choice1;
                        if (choice1 == "pt1"){
                            pt1.display_prescription();
                        }
                        else if (choice1 == "pt2"){
                            pt2.display_prescription();
                        }
                        else if (choice1 == "pt3"){
                            pt3.display_prescription();
                        }
                        else if (choice1 == "pt4"){
                            pt4.display_prescription();
                        }
                        else if (choice1 == "pt5"){
                            pt5.display_prescription();
                        }
                        else{
                            cout << "Please Enter the Correct Patient\'s Name\n";
                        }
                        break;
                        
                    case 6:
                        cout << "Choose your Patient : ";
                        cin >> choice1;
                        if (choice1 == "pt1"){
                            pt1.display_notes();
                        }
                        else if (choice1 == "pt2"){
                            pt2.display_notes();
                        }
                        else if (choice1 == "pt3"){
                            pt3.display_notes();
                        }
                        else if (choice1 == "pt4"){
                            pt4.display_notes();
                        }
                        else if (choice1 == "pt5"){
                            pt5.display_notes();
                        }
                        else{
                            cout << "Please Enter the Correct Patient\'s Name\n";
                        }
                        break;
                        
                    case 7:
                        cout << "Logout Successful. Have a Great Day, Doctor!\n" << endl;
                        break;
                        
                    case 0:
                        return 0;
                }
                }while (!(choice > 7));
            }
            
            else if ((name == "Kiruba") && (password == "ki1234")){
                Kiruba.login(name, password);
                cout << "Click 1 to view your Schedule\nClick 2 to write a Prescription\nClick 3 to write Notes\nClick 4 to view Patient Details\nClick 5 to View Prescription\nClick 6 to view Notes\nClick 7 to Logout\nClick 0 to Exit\n";
                do {
                cout << "\nPlease Enter your Choice : ";
                cin >> choice;
                switch(choice){
                    case 1:
                        Kiruba.schedule();
                        break;
                    case 2:
                        cout << "Choose your Patient : ";
                        cin >> choice1;
                        if (choice1 == "pt1"){
                            pt1.prescription();
                        }
                        else if (choice1 == "pt2"){
                            pt2.prescription();
                        }
                        else if (choice1 == "pt3"){
                            pt3.prescription();
                        }
                        else if (choice1 == "pt4"){
                            pt4.prescription();
                        }
                        else if (choice1 == "pt5"){
                            pt5.prescription();
                        }
                        else{
                            cout << "Please Enter the Correct Patient\'s Name\n";
                        }
                        break;
                    case 3:
                        cout << "Choose your Patient : ";
                        cin >> choice1;
                        if (choice1 == "pt1"){
                            pt1.notes();
                        }
                        else if (choice1 == "pt2"){
                            pt2.notes();
                        }
                        else if (choice1 == "pt3"){
                            pt3.notes();
                        }
                        else if (choice1 == "pt4"){
                            pt4.notes();
                        }
                        else if (choice1 == "pt5"){
                            pt5.notes();
                        }
                        else{
                            cout << "Please Enter the Correct Patient\'s Name\n";
                        }
                        break;
                    case 4:
                        cout << "Choose your Patient : ";
                        cin >> choice1;
                        if (choice1 == "pt1"){
                            pt1.display();
                        }
                        else if (choice1 == "pt2"){
                            pt2.display();
                        }
                        else if (choice1 == "pt3"){
                            pt3.display();
                        }
                        else if (choice1 == "pt4"){
                            pt4.display();
                        }
                        else if (choice1 == "pt5"){
                            pt5.display();
                        }
                        else{
                            cout << "Please Enter the Correct Patient\'s Name\n";
                        }
                        break;
                        
                    case 5:
                        cout << "Choose your Patient : ";
                        cin >> choice1;
                        if (choice1 == "pt1"){
                            pt1.display_prescription();
                        }
                        else if (choice1 == "pt2"){
                            pt2.display_prescription();
                        }
                        else if (choice1 == "pt3"){
                            pt3.display_prescription();
                        }
                        else if (choice1 == "pt4"){
                            pt4.display_prescription();
                        }
                        else if (choice1 == "pt5"){
                            pt5.display_prescription();
                        }
                        else{
                            cout << "Please Enter the Correct Patient\'s Name\n";
                        }
                        break;
                        
                    case 6:
                        cout << "Choose your Patient : ";
                        cin >> choice1;
                        if (choice1 == "pt1"){
                            pt1.display_notes();
                        }
                        else if (choice1 == "pt2"){
                            pt2.display_notes();
                        }
                        else if (choice1 == "pt3"){
                            pt3.display_notes();
                        }
                        else if (choice1 == "pt4"){
                            pt4.display_notes();
                        }
                        else if (choice1 == "pt5"){
                            pt5.display_notes();
                        }
                        else{
                            cout << "Please Enter the Correct Patient\'s Name\n";
                        }
                        break;
                        
                    case 7:
                        cout << "Logout Successful. Have a Great Day, Doctor!\n" << endl;
                        break;
                        
                    case 0:
                        return 0;
                }
                }while (!(choice > 7));
            }
            
            else if ((name == "Shreya") && (password == "sh1234")){
                Shreya.login(name, password);
                cout << "Click 1 to view your Schedule\nClick 2 to write a Prescription\nClick 3 to write Notes\nClick 4 to view Patient Details\nClick 5 to View Prescription\nClick 6 to view Notes\nClick 7 to Logout\nClick 0 to Exit\n";
                do{
                cout << "\nPlease Enter your Choice : ";
                cin >> choice;
                switch(choice){
                    case 1:
                        Shreya.schedule();
                        break;
                    case 2:
                        cout << "Choose your Patient : ";
                        cin >> choice1;
                        if (choice1 == "pt1"){
                            pt1.prescription();
                        }
                        else if (choice1 == "pt2"){
                            pt2.prescription();
                        }
                        else if (choice1 == "pt3"){
                            pt3.prescription();
                        }
                        else if (choice1 == "pt4"){
                            pt4.prescription();
                        }
                        else if (choice1 == "pt5"){
                            pt5.prescription();
                        }
                        else{
                            cout << "Please Enter the Correct Patient\'s Name\n";
                        }
                        break;
                    case 3:
                        cout << "Choose your Patient : ";
                        cin >> choice1;
                        if (choice1 == "pt1"){
                            pt1.notes();
                        }
                        else if (choice1 == "pt2"){
                            pt2.notes();
                        }
                        else if (choice1 == "pt3"){
                            pt3.notes();
                        }
                        else if (choice1 == "pt4"){
                            pt4.notes();
                        }
                        else if (choice1 == "pt5"){
                            pt5.notes();
                        }
                        else{
                            cout << "Please Enter the Correct Patient\'s Name\n";
                        }
                        break;
                    case 4:
                        cout << "Choose your Patient : ";
                        cin >> choice1;
                        if (choice1 == "pt1"){
                            pt1.display();
                        }
                        else if (choice1 == "pt2"){
                            pt2.display();
                        }
                        else if (choice1 == "pt3"){
                            pt3.display();
                        }
                        else if (choice1 == "pt4"){
                            pt4.display();
                        }
                        else if (choice1 == "pt5"){
                            pt5.display();
                        }
                        else{
                            cout << "Please Enter the Correct Patient\'s Name\n";
                        }
                        break;
                        
                    case 5:
                        cout << "Choose your Patient : ";
                        cin >> choice1;
                        if (choice1 == "pt1"){
                            pt1.display_prescription();
                        }
                        else if (choice1 == "pt2"){
                            pt2.display_prescription();
                        }
                        else if (choice1 == "pt3"){
                            pt3.display_prescription();
                        }
                        else if (choice1 == "pt4"){
                            pt4.display_prescription();
                        }
                        else if (choice1 == "pt5"){
                            pt5.display_prescription();
                        }
                        else{
                            cout << "Please Enter the Correct Patient\'s Name\n";
                        }
                        break;
                        
                    case 6:
                        cout << "Choose your Patient : ";
                        cin >> choice1;
                        if (choice1 == "pt1"){
                            pt1.display_notes();
                        }
                        else if (choice1 == "pt2"){
                            pt2.display_notes();
                        }
                        else if (choice1 == "pt3"){
                            pt3.display_notes();
                        }
                        else if (choice1 == "pt4"){
                            pt4.display_notes();
                        }
                        else if (choice1 == "pt5"){
                            pt5.display_notes();
                        }
                        else{
                            cout << "Please Enter the Correct Patient\'s Name\n";
                        }
                        break;
                        
                    case 7:
                        cout << "Logout Successful. Have a Great Day, Doctor!\n" << endl;
                        break;
                        
                    case 0:
                        return 0;
                }
                }while (!(choice > 7));
            }
            
            else if ((name == "Jothi") && (password == "jo1234")){
                Jothi.login(name, password);
                cout << "Click 1 to view your Schedule\nClick 2 to write a Prescription\nClick 3 to write Notes\nClick 4 to view Patient Details\nClick 5 to View Prescription\nClick 6 to view Notes\nClick 7 to Logout\nClick 0 to Exit\n";
                do{
                cout << "\nPlease Enter your Choice : ";
                cin >> choice;
                switch(choice){
                    case 1:
                        Jothi.schedule();
                        break;
                    case 2:
                        cout << "Choose your Patient : ";
                        cin >> choice1;
                        if (choice1 == "pt1"){
                            pt1.prescription();
                        }
                        else if (choice1 == "pt2"){
                            pt2.prescription();
                        }
                        else if (choice1 == "pt3"){
                            pt3.prescription();
                        }
                        else if (choice1 == "pt4"){
                            pt4.prescription();
                        }
                        else if (choice1 == "pt5"){
                            pt5.prescription();
                        }
                        else{
                            cout << "Please Enter the Correct Patient\'s Name\n";
                        }
                        break;
                    case 3:
                        cout << "Choose your Patient : ";
                        cin >> choice1;
                        if (choice1 == "pt1"){
                            pt1.notes();
                        }
                        else if (choice1 == "pt2"){
                            pt2.notes();
                        }
                        else if (choice1 == "pt3"){
                            pt3.notes();
                        }
                        else if (choice1 == "pt4"){
                            pt4.notes();
                        }
                        else if (choice1 == "pt5"){
                            pt5.notes();
                        }
                        else{
                            cout << "Please Enter the Correct Patient\'s Name\n";
                        }
                        break;
                    case 4:
                        cout << "Choose your Patient : ";
                        cin >> choice1;
                        if (choice1 == "pt1"){
                            pt1.display();
                        }
                        else if (choice1 == "pt2"){
                            pt2.display();
                        }
                        else if (choice1 == "pt3"){
                            pt3.display();
                        }
                        else if (choice1 == "pt4"){
                            pt4.display();
                        }
                        else if (choice1 == "pt5"){
                            pt5.display();
                        }
                        else{
                            cout << "Please Enter the Correct Patient\'s Name\n";
                        }
                        break;
                        
                    case 5:
                        cout << "Choose your Patient : ";
                        cin >> choice1;
                        if (choice1 == "pt1"){
                            pt1.display_prescription();
                        }
                        else if (choice1 == "pt2"){
                            pt2.display_prescription();
                        }
                        else if (choice1 == "pt3"){
                            pt3.display_prescription();
                        }
                        else if (choice1 == "pt4"){
                            pt4.display_prescription();
                        }
                        else if (choice1 == "pt5"){
                            pt5.display_prescription();
                        }
                        else{
                            cout << "Please Enter the Correct Patient\'s Name\n";
                        }
                        break;
                        
                    case 6:
                        cout << "Choose your Patient : ";
                        cin >> choice1;
                        if (choice1 == "pt1"){
                            pt1.display_notes();
                        }
                        else if (choice1 == "pt2"){
                            pt2.display_notes();
                        }
                        else if (choice1 == "pt3"){
                            pt3.display_notes();
                        }
                        else if (choice1 == "pt4"){
                            pt4.display_notes();
                        }
                        else if (choice1 == "pt5"){
                            pt5.display_notes();
                        }
                        else{
                            cout << "Please Enter the Correct Patient\'s Name\n";
                        }
                        break;
                        
                    case 7:
                        cout << "Logout Successful. Have a Great Day, Doctor!\n" << endl;
                        break;
                        
                    case 0:
                        return 0;
                }
                }while (!(choice > 7));
            }
            
            else if ((name == "Mary") && (password == "ma1234")){
                Mary.login(name, password);
                cout << "Click 1 to view your Schedule\nClick 2 to write a Prescription\nClick 3 to write Notes\nClick 4 to view Patient Details\nClick 5 to View Prescription\nClick 6 to view Notes\nClick 7 to Logout\nClick 0 to Exit\n";
                do{
                cout << "\nPlease Enter your Choice : ";
                cin >> choice;
                switch(choice){
                    case 1:
                        Mary.schedule();
                        break;
                    case 2:
                        cout << "Choose your Patient : ";
                        cin >> choice1;
                        if (choice1 == "pt1"){
                            pt1.prescription();
                        }
                        else if (choice1 == "pt2"){
                            pt2.prescription();
                        }
                        else if (choice1 == "pt3"){
                            pt3.prescription();
                        }
                        else if (choice1 == "pt4"){
                            pt4.prescription();
                        }
                        else if (choice1 == "pt5"){
                            pt5.prescription();
                        }
                        else{
                            cout << "Please Enter the Correct Patient\'s Name\n";
                        }
                        break;
                    case 3:
                        cout << "Choose your Patient : ";
                        cin >> choice1;
                        if (choice1 == "pt1"){
                            pt1.notes();
                        }
                        else if (choice1 == "pt2"){
                            pt2.notes();
                        }
                        else if (choice1 == "pt3"){
                            pt3.notes();
                        }
                        else if (choice1 == "pt4"){
                            pt4.notes();
                        }
                        else if (choice1 == "pt5"){
                            pt5.notes();
                        }
                        else{
                            cout << "Please Enter the Correct Patient\'s Name\n";
                        }
                        break;
                    case 4:
                        cout << "Choose your Patient : ";
                        cin >> choice1;
                        if (choice1 == "pt1"){
                            pt1.display();
                        }
                        else if (choice1 == "pt2"){
                            pt2.display();
                        }
                        else if (choice1 == "pt3"){
                            pt3.display();
                        }
                        else if (choice1 == "pt4"){
                            pt4.display();
                        }
                        else if (choice1 == "pt5"){
                            pt5.display();
                        }
                        else{
                            cout << "Please Enter the Correct Patient\'s Name\n";
                        }
                        break;
                        
                    case 5:
                        cout << "Choose your Patient : ";
                        cin >> choice1;
                        if (choice1 == "pt1"){
                            pt1.display_prescription();
                        }
                        else if (choice1 == "pt2"){
                            pt2.display_prescription();
                        }
                        else if (choice1 == "pt3"){
                            pt3.display_prescription();
                        }
                        else if (choice1 == "pt4"){
                            pt4.display_prescription();
                        }
                        else if (choice1 == "pt5"){
                            pt5.display_prescription();
                        }
                        else{
                            cout << "Please Enter the Correct Patient\'s Name\n";
                        }
                        break;
                        
                    case 6:
                        cout << "Choose your Patient : ";
                        cin >> choice1;
                        if (choice1 == "pt1"){
                            pt1.display_notes();
                        }
                        else if (choice1 == "pt2"){
                            pt2.display_notes();
                        }
                        else if (choice1 == "pt3"){
                            pt3.display_notes();
                        }
                        else if (choice1 == "pt4"){
                            pt4.display_notes();
                        }
                        else if (choice1 == "pt5"){
                            pt5.display_notes();
                        }
                        else{
                            cout << "Please Enter the Correct Patient\'s Name\n";
                        }
                        break;
                        
                    case 7:
                        cout << "Logout Successful. Have a Great Day, Doctor!\n" << endl;
                        break;
                        
                    case 0:
                        return 0;
                }
                }while (!(choice > 7));
            }
            
            else{
                cout << "Invalid Username or Password\n";
            }
            
            break;
            
        case 2:     // for Patients
            cout << "Welcome to Healing Hands\n";
            cout << "Hospital ID : ";
            cin >> ID;
            cout << "Password : ";
            cin >> password;
            cout << endl;
            //break;
            
            if ((ID == "hh1111") && (password == "1111")){
                cout << "Please Enter your Name : ";
                cin >> pt1.name;
                cout << endl;
                cout << "Please Choose a Department / Doctor for your Appointment\n";
                cout << "Click 1 for GENERAL MEDICINE - Dr. Sushma\n";
                cout << "Click 2 for PSYCHIATRY - Dr. Kiruba\n";
                cout << "Click 3 for DERMATOLOGY - Dr. Shreya\n";
                cout << "Click 4 for LAPAROSCOPIC SURGERY - Dr. Jothi\n";
                cout << "Click 5 for DENTISTRY - Dr. Mary\n";

                cout << "\nPlease Enter your Choice : ";
                cin >> choice;
                switch(choice){
                    case 1:
                        cout << "\nPlease choose an Appointment Slot\n";
                        cout << "Click 1 for Slot 1 : 5:00 to 5:30 pm\n";
                        cout << "Click 2 for Slot 2 : 5:30 to 6:00 pm\n";
                        cout << "Click 3 for Slot 3 : 6:00 to 6:30 pm\n";
                        cout << "Click 4 for Slot 4 : 6:30 to 7:00 pm\n";
                        cout << "Click 5 for Slot 5 : 7:00 to 7:30 pm\n";

                        cin >> slot;
                        Sushma.edit_schedule(slot, pt1.name);

                        break;
                        
                    case 2:
                        cout << "\nPlease choose an Appointment Slot\n";
                        cout << "Click 1 for Slot 1 : 5:00 to 5:30 pm\n";
                        cout << "Click 2 for Slot 2 : 5:30 to 6:00 pm\n";
                        cout << "Click 3 for Slot 3 : 6:00 to 6:30 pm\n";
                        cout << "Click 4 for Slot 4 : 6:30 to 7:00 pm\n";
                        cout << "Click 5 for Slot 5 : 7:00 to 7:30 pm\n";

                        cin >> slot;
                        Kiruba.edit_schedule(slot, pt1.name);

                        break;
                        
                    case 3:
                        cout << "\nPlease choose an Appointment Slot\n";
                        cout << "Click 1 for Slot 1 : 5:00 to 5:30 pm\n";
                        cout << "Click 2 for Slot 2 : 5:30 to 6:00 pm\n";
                        cout << "Click 3 for Slot 3 : 6:00 to 6:30 pm\n";
                        cout << "Click 4 for Slot 4 : 6:30 to 7:00 pm\n";
                        cout << "Click 5 for Slot 5 : 7:00 to 7:30 pm\n";

                        cin >> slot;
                        Shreya.edit_schedule(slot, pt1.name);

                        break;
                        
                    case 4:
                        cout << "\nPlease choose an Appointment Slot\n";
                        cout << "Click 1 for Slot 1 : 5:00 to 5:30 pm\n";
                        cout << "Click 2 for Slot 2 : 5:30 to 6:00 pm\n";
                        cout << "Click 3 for Slot 3 : 6:00 to 6:30 pm\n";
                        cout << "Click 4 for Slot 4 : 6:30 to 7:00 pm\n";
                        cout << "Click 5 for Slot 5 : 7:00 to 7:30 pm\n";

                        cin >> slot;
                        Jothi.edit_schedule(slot, pt1.name);

                        break;
                        
                    case 5:
                        cout << "\nPlease choose an Appointment Slot\n";
                        cout << "Click 1 for Slot 1 : 5:00 to 5:30 pm\n";
                        cout << "Click 2 for Slot 2 : 5:30 to 6:00 pm\n";
                        cout << "Click 3 for Slot 3 : 6:00 to 6:30 pm\n";
                        cout << "Click 4 for Slot 4 : 6:30 to 7:00 pm\n";
                        cout << "Click 5 for Slot 5 : 7:00 to 7:30 pm\n";

                        cin >> slot;
                        Mary.edit_schedule(slot, pt1.name);

                        break;
                        
                    default:
                        cout << "Please Enter a Valid Option\n";
                        break;
                    }
                    pt1.patient_info();
                    cout << "\nThank you for choosing Healing Hands. We Hope you Get Well Soon\nYour Doctor will send your Prescription after your Appointment\n\n";
                    break;
                    }
                        
            if ((ID == "hh2222") && (password == "2222")){
                cout << "Please Enter your Name : ";
                cin >> pt2.name;
                cout << endl;
                cout << "Please Choose a Department / Doctor for your Appointment\n";
                cout << "Click 1 for GENERAL MEDICINE - Dr. Sushma\n";
                cout << "Click 2 for PSYCHIATRY - Dr. Kiruba\n";
                cout << "Click 3 for DERMATOLOGY - Dr. Shreya\n";
                cout << "Click 4 for LAPAROSCOPIC SURGERY - Dr. Jothi\n";
                cout << "Click 5 for DENTISTRY - Dr. Mary\n";

                cout << "\nPlease Enter your Choice : ";
                cin >> choice;
                switch(choice){
                    case 1:
                        cout << "\nPlease choose an Appointment Slot\n";
                        cout << "Click 1 for Slot 1 : 5:00 to 5:30 pm\n";
                        cout << "Click 2 for Slot 2 : 5:30 to 6:00 pm\n";
                        cout << "Click 3 for Slot 3 : 6:00 to 6:30 pm\n";
                        cout << "Click 4 for Slot 4 : 6:30 to 7:00 pm\n";
                        cout << "Click 5 for Slot 5 : 7:00 to 7:30 pm\n";

                        cin >> slot;
                        Sushma.edit_schedule(slot, pt2.name);

                        break;
                        
                    case 2:
                        cout << "\nPlease choose an Appointment Slot\n";
                        cout << "Click 1 for Slot 1 : 5:00 to 5:30 pm\n";
                        cout << "Click 2 for Slot 2 : 5:30 to 6:00 pm\n";
                        cout << "Click 3 for Slot 3 : 6:00 to 6:30 pm\n";
                        cout << "Click 4 for Slot 4 : 6:30 to 7:00 pm\n";
                        cout << "Click 5 for Slot 5 : 7:00 to 7:30 pm\n";

                        cin >> slot;
                        Kiruba.edit_schedule(slot, pt2.name);

                        break;
                        
                    case 3:
                        cout << "\nPlease choose an Appointment Slot\n";
                        cout << "Click 1 for Slot 1 : 5:00 to 5:30 pm\n";
                        cout << "Click 2 for Slot 2 : 5:30 to 6:00 pm\n";
                        cout << "Click 3 for Slot 3 : 6:00 to 6:30 pm\n";
                        cout << "Click 4 for Slot 4 : 6:30 to 7:00 pm\n";
                        cout << "Click 5 for Slot 5 : 7:00 to 7:30 pm\n";

                        cin >> slot;
                        Shreya.edit_schedule(slot, pt2.name);

                        break;
                        
                    case 4:
                        cout << "\nPlease choose an Appointment Slot\n";
                        cout << "Click 1 for Slot 1 : 5:00 to 5:30 pm\n";
                        cout << "Click 2 for Slot 2 : 5:30 to 6:00 pm\n";
                        cout << "Click 3 for Slot 3 : 6:00 to 6:30 pm\n";
                        cout << "Click 4 for Slot 4 : 6:30 to 7:00 pm\n";
                        cout << "Click 5 for Slot 5 : 7:00 to 7:30 pm\n";

                        cin >> slot;
                        Jothi.edit_schedule(slot, pt2.name);

                        break;
                        
                    case 5:
                        cout << "\nPlease choose an Appointment Slot\n";
                        cout << "Click 1 for Slot 1 : 5:00 to 5:30 pm\n";
                        cout << "Click 2 for Slot 2 : 5:30 to 6:00 pm\n";
                        cout << "Click 3 for Slot 3 : 6:00 to 6:30 pm\n";
                        cout << "Click 4 for Slot 4 : 6:30 to 7:00 pm\n";
                        cout << "Click 5 for Slot 5 : 7:00 to 7:30 pm\n";

                        cin >> slot;
                        Mary.edit_schedule(slot, pt2.name);

                        break;
                        
                    default:
                        cout << "Please Enter a Valid Option\n";
                        break;
                    }
                    pt2.patient_info();
                    cout << "\nThank you for choosing Healing Hands. We Hope you Get Well Soon\nYour Doctor will send your Prescription after your Appointment\n\n";
                    break;
                    }
                        
            if ((ID == "hh3333") && (password == "3333")){
                cout << "Please Enter your Name : ";
                cin >> pt3.name;
                cout << endl;
                cout << "Please Choose a Department / Doctor for your Appointment\n";
                cout << "Click 1 for GENERAL MEDICINE - Dr. Sushma\n";
                cout << "Click 2 for PSYCHIATRY - Dr. Kiruba\n";
                cout << "Click 3 for DERMATOLOGY - Dr. Shreya\n";
                cout << "Click 4 for LAPAROSCOPIC SURGERY - Dr. Jothi\n";
                cout << "Click 5 for DENTISTRY - Dr. Mary\n";

                cout << "\nPlease Enter your Choice : ";
                cin >> choice;
                switch(choice){
                    case 1:
                        cout << "\nPlease choose an Appointment Slot\n";
                        cout << "Click 1 for Slot 1 : 5:00 to 5:30 pm\n";
                        cout << "Click 2 for Slot 2 : 5:30 to 6:00 pm\n";
                        cout << "Click 3 for Slot 3 : 6:00 to 6:30 pm\n";
                        cout << "Click 4 for Slot 4 : 6:30 to 7:00 pm\n";
                        cout << "Click 5 for Slot 5 : 7:00 to 7:30 pm\n";

                        cin >> slot;
                        Sushma.edit_schedule(slot, pt3.name);

                        break;
                        
                    case 2:
                        cout << "\nPlease choose an Appointment Slot\n";
                        cout << "Click 1 for Slot 1 : 5:00 to 5:30 pm\n";
                        cout << "Click 2 for Slot 2 : 5:30 to 6:00 pm\n";
                        cout << "Click 3 for Slot 3 : 6:00 to 6:30 pm\n";
                        cout << "Click 4 for Slot 4 : 6:30 to 7:00 pm\n";
                        cout << "Click 5 for Slot 5 : 7:00 to 7:30 pm\n";

                        cin >> slot;
                        Kiruba.edit_schedule(slot, pt3.name);

                        break;
                        
                    case 3:
                        cout << "\nPlease choose an Appointment Slot\n";
                        cout << "Click 1 for Slot 1 : 5:00 to 5:30 pm\n";
                        cout << "Click 2 for Slot 2 : 5:30 to 6:00 pm\n";
                        cout << "Click 3 for Slot 3 : 6:00 to 6:30 pm\n";
                        cout << "Click 4 for Slot 4 : 6:30 to 7:00 pm\n";
                        cout << "Click 5 for Slot 5 : 7:00 to 7:30 pm\n";

                        cin >> slot;
                        Shreya.edit_schedule(slot, pt3.name);

                        break;
                        
                    case 4:
                        cout << "\nPlease choose an Appointment Slot\n";
                        cout << "Click 1 for Slot 1 : 5:00 to 5:30 pm\n";
                        cout << "Click 2 for Slot 2 : 5:30 to 6:00 pm\n";
                        cout << "Click 3 for Slot 3 : 6:00 to 6:30 pm\n";
                        cout << "Click 4 for Slot 4 : 6:30 to 7:00 pm\n";
                        cout << "Click 5 for Slot 5 : 7:00 to 7:30 pm\n";

                        cin >> slot;
                        Jothi.edit_schedule(slot, pt3.name);

                        break;
                        
                    case 5:
                        cout << "\nPlease choose an Appointment Slot\n";
                        cout << "Click 1 for Slot 1 : 5:00 to 5:30 pm\n";
                        cout << "Click 2 for Slot 2 : 5:30 to 6:00 pm\n";
                        cout << "Click 3 for Slot 3 : 6:00 to 6:30 pm\n";
                        cout << "Click 4 for Slot 4 : 6:30 to 7:00 pm\n";
                        cout << "Click 5 for Slot 5 : 7:00 to 7:30 pm\n";

                        cin >> slot;
                        Mary.edit_schedule(slot, pt3.name);

                        break;
                        
                    default:
                        cout << "Please Enter a Valid Option\n";
                        break;
                    }
                    pt3.patient_info();
                    cout << "\nThank you for choosing Healing Hands. We Hope you Get Well Soon\nYour Doctor will send your Prescription after your Appointment\n\n";
                    break;
                    }
                        
            if ((ID == "hh4444") && (password == "4444")){
                cout << "Please Enter your Name : ";
                cin >> pt4.name;
                cout << endl;
                cout << "Please Choose a Department / Doctor for your Appointment\n";
                cout << "Click 1 for GENERAL MEDICINE - Dr. Sushma\n";
                cout << "Click 2 for PSYCHIATRY - Dr. Kiruba\n";
                cout << "Click 3 for DERMATOLOGY - Dr. Shreya\n";
                cout << "Click 4 for LAPAROSCOPIC SURGERY - Dr. Jothi\n";
                cout << "Click 5 for DENTISTRY - Dr. Mary\n";

                cout << "\nPlease Enter your Choice : ";
                cin >> choice;
                switch(choice){
                    case 1:
                        cout << "\nPlease choose an Appointment Slot\n";
                        cout << "Click 1 for Slot 1 : 5:00 to 5:30 pm\n";
                        cout << "Click 2 for Slot 2 : 5:30 to 6:00 pm\n";
                        cout << "Click 3 for Slot 3 : 6:00 to 6:30 pm\n";
                        cout << "Click 4 for Slot 4 : 6:30 to 7:00 pm\n";
                        cout << "Click 5 for Slot 5 : 7:00 to 7:30 pm\n";

                        cin >> slot;
                        Sushma.edit_schedule(slot, pt4.name);

                        break;
                        
                    case 2:
                        cout << "\nPlease choose an Appointment Slot\n";
                        cout << "Click 1 for Slot 1 : 5:00 to 5:30 pm\n";
                        cout << "Click 2 for Slot 2 : 5:30 to 6:00 pm\n";
                        cout << "Click 3 for Slot 3 : 6:00 to 6:30 pm\n";
                        cout << "Click 4 for Slot 4 : 6:30 to 7:00 pm\n";
                        cout << "Click 5 for Slot 5 : 7:00 to 7:30 pm\n";

                        cin >> slot;
                        Kiruba.edit_schedule(slot, pt4.name);

                        break;
                        
                    case 3:
                        cout << "\nPlease choose an Appointment Slot\n";
                        cout << "Click 1 for Slot 1 : 5:00 to 5:30 pm\n";
                        cout << "Click 2 for Slot 2 : 5:30 to 6:00 pm\n";
                        cout << "Click 3 for Slot 3 : 6:00 to 6:30 pm\n";
                        cout << "Click 4 for Slot 4 : 6:30 to 7:00 pm\n";
                        cout << "Click 5 for Slot 5 : 7:00 to 7:30 pm\n";

                        cin >> slot;
                        Shreya.edit_schedule(slot, pt4.name);

                        break;
                        
                    case 4:
                        cout << "\nPlease choose an Appointment Slot\n";
                        cout << "Click 1 for Slot 1 : 5:00 to 5:30 pm\n";
                        cout << "Click 2 for Slot 2 : 5:30 to 6:00 pm\n";
                        cout << "Click 3 for Slot 3 : 6:00 to 6:30 pm\n";
                        cout << "Click 4 for Slot 4 : 6:30 to 7:00 pm\n";
                        cout << "Click 5 for Slot 5 : 7:00 to 7:30 pm\n";

                        cin >> slot;
                        Jothi.edit_schedule(slot, pt4.name);

                        break;
                        
                    case 5:
                        cout << "\nPlease choose an Appointment Slot\n";
                        cout << "Click 1 for Slot 1 : 5:00 to 5:30 pm\n";
                        cout << "Click 2 for Slot 2 : 5:30 to 6:00 pm\n";
                        cout << "Click 3 for Slot 3 : 6:00 to 6:30 pm\n";
                        cout << "Click 4 for Slot 4 : 6:30 to 7:00 pm\n";
                        cout << "Click 5 for Slot 5 : 7:00 to 7:30 pm\n";

                        cin >> slot;
                        Mary.edit_schedule(slot, pt4.name);

                        break;
                        
                    default:
                        cout << "Please Enter a Valid Option\n";
                        break;
                    }
                    pt4.patient_info();
                    cout << "\nThank you for choosing Healing Hands. We Hope you Get Well Soon\nYour Doctor will send your Prescription after your Appointment\n\n";
                    break;
                    }
                        
            if ((ID == "hh5555") && (password == "5555")){
                cout << "Please Enter your Name : ";
                cin >> pt5.name;
                cout << endl;
                cout << "Please Choose a Department / Doctor for your Appointment\n";
                cout << "Click 1 for GENERAL MEDICINE - Dr. Sushma\n";
                cout << "Click 2 for PSYCHIATRY - Dr. Kiruba\n";
                cout << "Click 3 for DERMATOLOGY - Dr. Shreya\n";
                cout << "Click 4 for LAPAROSCOPIC SURGERY - Dr. Jothi\n";
                cout << "Click 5 for DENTISTRY - Dr. Mary\n";

                cout << "\nPlease Enter your Choice : ";
                cin >> choice;
                switch(choice){
                    case 1:
                        cout << "\nPlease choose an Appointment Slot\n";
                        cout << "Click 1 for Slot 1 : 5:00 to 5:30 pm\n";
                        cout << "Click 2 for Slot 2 : 5:30 to 6:00 pm\n";
                        cout << "Click 3 for Slot 3 : 6:00 to 6:30 pm\n";
                        cout << "Click 4 for Slot 4 : 6:30 to 7:00 pm\n";
                        cout << "Click 5 for Slot 5 : 7:00 to 7:30 pm\n";

                        cin >> slot;
                        Sushma.edit_schedule(slot, pt5.name);

                        break;
                        
                    case 2:
                        cout << "\nPlease choose an Appointment Slot\n";
                        cout << "Click 1 for Slot 1 : 5:00 to 5:30 pm\n";
                        cout << "Click 2 for Slot 2 : 5:30 to 6:00 pm\n";
                        cout << "Click 3 for Slot 3 : 6:00 to 6:30 pm\n";
                        cout << "Click 4 for Slot 4 : 6:30 to 7:00 pm\n";
                        cout << "Click 5 for Slot 5 : 7:00 to 7:30 pm\n";

                        cin >> slot;
                        Kiruba.edit_schedule(slot, pt5.name);

                        break;
                        
                    case 3:
                        cout << "\nPlease choose an Appointment Slot\n";
                        cout << "Click 1 for Slot 1 : 5:00 to 5:30 pm\n";
                        cout << "Click 2 for Slot 2 : 5:30 to 6:00 pm\n";
                        cout << "Click 3 for Slot 3 : 6:00 to 6:30 pm\n";
                        cout << "Click 4 for Slot 4 : 6:30 to 7:00 pm\n";
                        cout << "Click 5 for Slot 5 : 7:00 to 7:30 pm\n";

                        cin >> slot;
                        Shreya.edit_schedule(slot, pt5.name);

                        break;
                        
                    case 4:
                        cout << "\nPlease choose an Appointment Slot\n";
                        cout << "Click 1 for Slot 1 : 5:00 to 5:30 pm\n";
                        cout << "Click 2 for Slot 2 : 5:30 to 6:00 pm\n";
                        cout << "Click 3 for Slot 3 : 6:00 to 6:30 pm\n";
                        cout << "Click 4 for Slot 4 : 6:30 to 7:00 pm\n";
                        cout << "Click 5 for Slot 5 : 7:00 to 7:30 pm\n";

                        cin >> slot;
                        Jothi.edit_schedule(slot, pt5.name);

                        break;
                        
                    case 5:
                        cout << "\nPlease choose an Appointment Slot\n";
                        cout << "Click 1 for Slot 1 : 5:00 to 5:30 pm\n";
                        cout << "Click 2 for Slot 2 : 5:30 to 6:00 pm\n";
                        cout << "Click 3 for Slot 3 : 6:00 to 6:30 pm\n";
                        cout << "Click 4 for Slot 4 : 6:30 to 7:00 pm\n";
                        cout << "Click 5 for Slot 5 : 7:00 to 7:30 pm\n";

                        cin >> slot;
                        Mary.edit_schedule(slot, pt5.name);

                        break;
                        
                    default:
                        cout << "Please Enter a Valid Option\n";
                        break;
                    }
                    pt5.patient_info();
                    cout << "\nThank you for choosing Healing Hands. We Hope you Get Well Soon\nYour Doctor will send your Prescription after your Appointment\n\n";
                    break;
                    }
                  else{
                      cout << "Invalid ID or Password \nIf you do not have a Healing Hands ID, please contact our Receptionist\n\n";
                  }
              
                case 0:
                    return 0;
                    
                default:
                    cout << "Please Enter a Valid Option\n";
                    break;
                
            }
            }while(choice != 0);
            }
