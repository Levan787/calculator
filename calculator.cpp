#include <iostream>
#include<stdlib.h>
using namespace std;

void Menu();

int main() {
    double* x = new(nothrow) double(), * y = new(nothrow) double();
    char* operand = new(nothrow) char();

    if (!x || !y || !operand) {
        cout << "Fail there is not enough space" << endl;
    }
    else {
        cout << "Achieved" << endl;
    }

    cout << "\n\t\t\t Calculator" << endl;
    Menu();
    do {
        cin >> *operand;
        switch (*operand) {
            case '+':

                cout << "\n\tYou can enter numbers separated space : " << endl;
                cin >> *x >> *y;
                cout<<"\t\t"<<*x<<" "<<*operand<<" "<<*y<<" = "<<*x+*y<<endl;
                Menu();
                break;

            case '-':

                cout << "\n\tYou can enter numbers separated space: " << endl;
                cin >> *x >> *y;
                cout<< "\t\t" << *x << " " << *operand << " " << *y << " = "<<*x-*y<<endl;
                Menu();
                break;

            case '*':

                cout << "\n\tYou can enter numbers separated space: " << endl;
                cin >> *x >> *y;
                cout<< "\t\t" << *x << " " << *operand << " " << *y << " = "<<*x*(*y) << endl;
                Menu();
                break;

            case '/':

                cout << "\n\tYou can enter numbers separated space: " << endl;
                cin >> *x >> *y;
                if (*y == 0) {
                    cout << "\t\tCalculator is not allowed to divide number by 0" << endl;
                }
                else {
                    cout << "\t\t" << *x << " " << *operand << " " << *y << " = " << *x/(*y) << endl;
                }
                Menu();
                break;

            case 'Q':
            case 'q':

                cout << "\n\n\t\tYou quit" << endl;
                break;

            default:

                cout << "\n wrong symbol, try again" << endl;
                Menu();
                break;
        }

    } while (*operand!='Q' && *operand!='q' );

    delete x;
    delete y;
    delete operand;
}

void Menu() {
    cout << endl << "Choose operation" << endl;
    cout << "+ (addition), - (substarction), * (multiplication), / (division)" << endl;
    cout << "Q (quit)" << endl;
}
