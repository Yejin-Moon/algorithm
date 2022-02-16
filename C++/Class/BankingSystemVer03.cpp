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

    Account(const Account & ref)
        : accID(ref.accID),balance(ref.balance)
    {
        cusName=new char[strlen(ref.cusName)+1];
        strcpy(cusName, ref.cusName);
    }

    int GetAccID() {return accID;}

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

void DepositMoney()
{
    int money;
    int id;
    cout<<"[Deposit]"<<endl;
    cout<<"Account ID: "; cin>>id;
    cout<<"Deposit: "; cin>>money;

    for(int i = 0; i< accNum; i++)
    {
        if(accArr[i]->GetAccID()==id)
        {
            accArr[i]->Deposit(money);
            cout<<"Deposit complete"<<endl<<endl;
            return;
        }
    }
    cout<<"invalid id"<<endl<<endl;
}

void WithdrawMoney()
{
    int money;
    int id;
    cout<<"[Withdraw]"<<endl;
    cout<<"Account ID: "; cin>>id;
    cout<<"Withdraw: "; cin>>money;

    for(int i = 0; i< accNum; i++)
    {
        if(accArr[i]->GetAccID()==id)
        {
            if(accArr[i]->Withdraw(money)==0)
            {
                cout<<"no balance"<<endl<<endl;
                return;
            }
            cout<<"Withdraw complete"<<endl<<endl;
            return;
        }
    }
    cout<<"invalid id"<<endl<<endl;
}

void ShowAccInfo()
{
    for(int i = 0; i<accNum;i++)
    {
        accArr[i]->ShowAccInfo();
        cout<<endl;
    }
}