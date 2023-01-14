#include<iostream>

using namespace std;

string myName, myEyes, myTeeth, myHair;
int myAge, myHeight, myWeight;





int main()
{
    myName = "Zed A. Shaw";
    myAge = 35;     // not a lie
    myHeight = 74;  // inches
    myWeight = 180; // lbs
    myEyes = "Blue";
    myTeeth = "White";
    myHair = "Brown";


    cout<<"Let's talk about " << myName <<" .\n";
    cout<<"He's " << myHeight <<" inches(or"<< myHeight*2.54 << "cm) tall.\n";
    cout<<"He's " << myWeight <<" pounds(or"<< myWeight*0.453 << "kg) heavy.\n";
    cout<<"Actually, that's not too heavy.\n";
    cout<<"He's got " << myEyes <<" eyes and "<< myHair <<" hair.\n";
    cout<<"His teeth are usually " << myTeeth <<" depending on the coffee.\n";
    cout<<"If I add " << myAge << ", " << myHeight << ", and " << myWeight
            <<"." <<" I get " << (myAge + myHeight + myWeight) << ".";
    
}