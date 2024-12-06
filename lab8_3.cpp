#include <iostream>
#include <string>
using namespace std;

int main(){
    int age,height,bounty;
    string name;
    cout << "Enter your age: ";
    cin >> age;
    if(age<=25){
        cout << "Enter your height: ";
        cin >> height;
        if(height<100) name = "Chopper"; 
        else if(height<180) name = "Usopp";
        else {
            cout << "Enter your bounty: ";
            cin >> bounty;
            if(bounty<=1100000000) name = "Sanji";
            else name = "Zoro"; 
        }
    }
    else{
        if(age<=60){
            cout << "Enter your bounty: ";
            cin >> bounty;
            if(bounty<=500000000) name = "Franky";
            else name = "Jinbe"; 
        }
        else name = "Brook";
    }

    cout << "Your character = " << name ;

return 0;
}