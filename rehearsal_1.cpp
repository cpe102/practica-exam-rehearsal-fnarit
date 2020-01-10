#include <iostream>
using namespace std;
int main (){
    string name;
    double grade;
    cout << "What is your name?: ";
    cin >> name;
    cout << "What is your GPA?: ";
    cin >> grade;
    if(grade >= 3.5){
        cout << name << " " << "InW Jrim Jrim!!!";
    }else{
        cout << "Try harder, " << name << "!!!";
    }
    return 0;
}