#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

void showbalance(double money);
double deposit(double money);
double withdraw(double money);

int main(){
    long double money = 999.99;
    char choice;

    

    do
    {
        cout << "********************\n";
        cout << "ATM Royal\n";
        cout << "Your balance : " << '$' << setprecision(2) << fixed << money << '\n';
        cout << "********************\n";
        cout << "1. Deposit\n";
        cout << "2. Withdraw\n";
        cout << "3. Exit\n";
        cout << "Choose the option:";

        cin >> choice;

    
        switch(choice){
            case '1': ;
             money = deposit(money);
                    break;

            case '2': ;
            money = withdraw(money);
                    break;

            case '3': cout << "Goofyass";
                    return 0;
                    break;
            
            default: cout << "Nigger";
                    break;
        }
    } while (choice != 3);
    


    return 0;
}


double deposit(double money){
    cout << "Enter money you want to deposit: ";
    double dep;
    cin >> dep;
    if (dep < 0)
    {
        cout << "Nigger X2\n\n";
        return money - 0;
    }
    
    return money + dep;
}

double withdraw(double money){
    cout << "Enter money you want to deposit: ";
    double with;
    cin >> with;
    if (with > money || cin.fail() || with < 0)
    {
        cout << "Goofy ass nigga!\n\n";
        return money - 0;
    }
    
    return money - with;
}