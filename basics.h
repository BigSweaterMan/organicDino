#include <iostream>
#include <string>
#include <fstream>

void getFormula(){
    std::cout<<"getting formula";
}
void molarMassCalc(){
    std::string outPutThing;
    getFormula();
    std::ifstream mMassDat;
    mMassDat.open("mMass.data"); //yes, I did type these by hand :')
    while (getline(mMassDat,outPutThing)){
        std::cout<<outPutThing;
    }
    mMassDat.close();
}
class element {
public:
    std::string elementName,elementSymbol;
    static double elementMolarMass;
};