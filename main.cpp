#include <iostream>
#include <fstream>
#include <string>
#include "basics.h"
using namespace std;

int main(){
    int programNum=1;
    while(programNum<2){
        cout<<"What program do you want to run? Type \"1\" to see your options. Type \"0\" to end."<<endl;
        //cin>>programNum;
        if(programNum<0){
            cout<<endl<<"dawg you really want a negative number? nah."<<endl;
        }
        switch(programNum){
            case 0:
                cout<<endl<<"Ending program..."<<endl;
                return 1;
            case 1:
                cout<<endl<<"This function is not yet completed."<<endl<<"0-End Program /n 1-Help /n 2-Molar Mass Calc"<<endl;
                break;
        }

    }
    switch(programNum){
        case 2:
            molarMassCalc(); //currently prints molar mass data

    }

    return 0;
}