#include <QCoreApplication>
#include "iostream"

using namespace std;

int main(int argc, char *argv[])
{
    cout << "Please enter your name: ";
    string userName = "blankUserName";
    cin >> userName;
    cout << "\n Hello " << userName <<endl;
    cout << "Please enter your gender: M for male, F for female"<<endl;
    char gender;
    cin >> gender;
    gender = toupper(gender);
    cout << "Please enter your height in cm: ";
    int height = 0;
    cin >> height;
    signed short int idealWeight = 0;
    float minWeight = 0;
    float maxWeight = 0;
    const float tolerance = 0.05;
    char answer;

    if(gender=='F'){
        idealWeight = height*height*0.00224;
        cout << "\n Your ideal weight is " << idealWeight << endl;
    }
    if(gender=='M'){
        idealWeight = height*height*0.00226;
        cout << "\n Your ideal weight is " << idealWeight << endl;
    }

    cout << "Would you like to know if your current weight is healhty?" << endl;
    cout << "Enter 'Y' for yes or 'N' for no: ";
    cin >> answer;
    answer = toupper(answer);
    if(answer=='Y'){
        cout << "Enter your current weight in kg: ";
        int currentWeight = 0;
        cin >> currentWeight;
        minWeight = idealWeight*(1-tolerance);
        maxWeight = idealWeight*(1+tolerance);
        cout << "DEBUG: the mininum weight for " << userName << " is: " << minWeight << " And the maximum weight is " << maxWeight << endl;
        if((currentWeight>minWeight)&&(currentWeight<idealWeight)){
            cout << "You are clearly underweight. It's time to eat some cake!" << endl;
        }
        if((currentWeight>minWeight)&&(currentWeight<maxWeight)){
            cout << "You are perfect, keep doing!";
        }
        if(currentWeight>maxWeight){
            cout << "You are a bit overweight. It's time to go jogging."<< endl;
        }
    }
    if(answer=='N'){
        cout << "Thanks for coming. See you later alligator!" <<endl;
    }


    return 0;
}
