#include <iostream>
#include <cstring>

using namespace std;
const int NAME_LEN = 20;

void ShowMenu(void);
void MakeAccount(void);
void DepositMoney(void);
void WithdrawMoney(void);
void ShowAccInfo(void);

enum {MAKE=1, DEPOSIT, WITHDRAW, INQUIRE, EXIT};

class Account
{
private:
    int accID;
    int balance;
    char * cusName;

public:
    Account(int ID, int money, char * name)
        : accID(ID), balance(money)
    {
        cusName=new char[strlen(name)+1];
        strcpy(cusName, name);
    }
    int GetAccID() { return accID; }

    void Deposit(int money)
    {
        balance+=money;
    }
    int Withdraw(int money)
    {
        if(balance<money)
            return 0;
        
        balance-=money;
        return money;
    }

    void ShowAccInfo()
    {
        cout<<"Account ID: "<<accID<<endl;
        cout<<"Name: "<<cusName<<endl;
        cout<<"Balance: "<<balance<<endl;
    }

    ~Account()
    {
        delete []cusName;
    }
};

Account * accArr[100];
int accNum = 0;

int main()
{
    int choice;

    while(1)
    {
        ShowMenu();
        cout<<"Choice: ";
        cin>>choice;
        cout<<endl;

        switch(choice)
        {
        case MAKE:
            MakeAccount();
            break;
        case DEPOSIT:
            DepositMoney();
            break;
        case WITHDRAW:
            WithdrawMoney();
            break;
        case INQUIRE:
            ShowAccInfo();
            break;
        case EXIT:
            for(int i = 0; i<accNum; i++)
                delete accArr[i];
            return 0;
        default:
            cout<<"Illegal selection.."<<endl;
        }
    }
    return 0;
}

void ShowMenu()
{
    cout<<"-----Menu-----"<<endl;
    cout<<"1. Create account"<<endl;
    cout<<"2. Deposit"<<endl;
    cout<<"3. Withdraw"<<endl;
    cout<<"4. Print account info"<<endl;
    cout<<"5. Exit program"<<endl;
}

void MakeAccount()
{
    int id;
    char name[NAME_LEN];
    int balance;

    cout<<"[Create account]"<<endl;
    cout<<"Account ID: "; cin>>id;
    cout<<"Name: "; cin>>name;
    cout<<"Deposit: "; cin>>balance;
    cout<<endl;

    accArr[accNum++]=new Account(id, balance, name);
}