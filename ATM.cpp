
#include <bits/stdc++.h>
using namespace std;
class Bank
{
private:
    string NAME;
    long long ACCOUNTNO;
    char TYPE[15];
    long long AMOUNT = 0;
    long long VALUE = 0;

public:
    void ASSIGNVALUE()
    {
        cout << "PLEASE ENTER YOUR NAME" << endl;
        cin.ignore();
        getline(cin, NAME);
        cout << "PLEASE ENTER YOUR ACCOUNT NUMBER" << endl;
        ;
        cin >> ACCOUNTNO;
        cout << "PLEASE ENTER YOUR ACCOUNT TYPE" << endl;
        cin >> TYPE;
        cout << "PLEASE ENTER YOUR BALANCE" << endl;
        cin >> VALUE;
    }
    void SHOWDETAIL()
    {
        cout << "NAME:" << NAME << endl;
        cout << "ACCOUNT NUMBER:" << ACCOUNTNO << endl;
        cout << "ACCOUNT TYPE:" << TYPE << endl;
        cout << "BALANCE:" << VALUE << endl;
    }

    void DEPOSITEMONEY()
    {
        cout << "ENTER AMOUNT TO BE DEPOSITE MONEY :" << endl;
        cin >> AMOUNT;
        VALUE = VALUE + AMOUNT;
    }
    void WITHDRAWMONEY()
    {
        int a;
        cout << "ENTER AMOUNT TO WITHDRAW" << endl;
        cin >> a;
        if (a > VALUE)
        {
            cout << "WITHDRAW IS NOT POSSILE." << endl;
            // continue;
        }
        else
        {
            VALUE -= a;
        }
    }
};
int main()
{
    Bank bn;
    int OPERATION;
    while (true)
    {

        cout << "1. ENTER NAME, ACCOUNT "
             << "NUMBER, ACCOUNT TYPE" << endl;
        cout << "\t2. BALANCE ENQUIRY" << endl;
        cout << "\t3. DEPOSITE MONEY" << endl;
        cout << "\t4. WITHDRAW MONEY" << endl;
        cout << "\t5. EXIT" << endl;
        cout << "ENTER YOUR CHOICE" << endl;
        cin >> OPERATION;
        switch (OPERATION)
        {
        case 1:
            bn.ASSIGNVALUE();
            break;
        case 2:
            bn.SHOWDETAIL();
            break;
        case 3:
            bn.DEPOSITEMONEY();
            break;
        case 4:
            bn.WITHDRAWMONEY();
            break;
        case 5:
            exit(true);
            break;
        default:
            cout << "PLEASE ENTER THE OPERATION FROM 1 TO 5" << endl;
        }
    }
}