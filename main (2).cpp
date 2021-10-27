#include <iostream>

using namespace std;

int main()
{
    char choice;
    int payment, pepsi = 100, drPepper = 120, cola = 95, change;
    
    cout << "Select your order" << endl << "[1]Pepsi (P100)" << endl << "[2]Dr.Pepper (P120)" << endl << "[3]Coca-cola (P95)" << endl;
    
    cout << "choice: ";
    cin >> choice;

    
    //switch statment
    switch(choice){
        case '1':
        cout << "Input Payment: ";
        cin >> payment;
        if(payment > pepsi)
        {
           cout << "You have purchased Pepsi." << endl;
           change = payment - pepsi;
           cout << "Change: " << change;
        } else
        {
            cout << "You don't have enough Funds.";
        }
        break;
        
        case '2':
        cout << "Input Payment: ";
        cin >> payment;
        if(payment > drPepper)
        {
           cout << "You have purchased Dr. Pepper." << endl;
           change = payment - drPepper;
           cout << "Change: " << change;
        } else
        {
            cout << "You don't have enough Funds.";
        }
        break;
        
        case '3':
        cout << "Input Payment: ";
        cin >> payment;
        if(payment > cola)
        {
           cout << "You have purchased Coca-cola." << endl;
           change = payment - cola;
           cout << "Change: " << change;
        } else
        {
            cout << "You don't have enough Funds.";
        }
        break;
        default:
        cout << "Invalid Input";
        break;
    }

    return 0;
}
