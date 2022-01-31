#include <iostream>
using namespace std;

class FruitSeller
{
private:
    const int APPLE_PRICE;
    int numOfApples;
    int myMoney;
public:
    FruitSeller(int price, int num, int money)
        : APPLE_PRICE(price), numOfApples(num), myMoney(money)
    {
    }
    int SaleApples(int money)
    {
        int num = money/APPLE_PRICE;
        numOfApples -= num;
        myMoney += money;
        return num;
    }
    void ShowSalesResult() const
    {
        cout<<"remaining apples: "<<numOfApples<<endl;
        cout<<"sales result: "<<myMoney<<endl<<endl;
    }
};

class FruitBuyer
{
private:
    int myMoney;
    int numOfApples;
public:
    FruitBuyer(int money)
        :myMoney(money), numOfApples(0)
    {
    }
    void BuyApples(FruitSeller &seller, int money)
    {
        numOfApples+=seller.SaleApples(money);
        myMoney-=money;
    }
    void ShowBuyResult() const
    {
        cout<<"current money: "<<myMoney<<endl;
        cout<<"number of apples: "<<numOfApples<<endl<<endl;
    }
};

int main()
{
    FruitSeller seller(1000, 20, 0);
    FruitBuyer buyer(5000);
    buyer.BuyApples(seller, 2000);

    cout<<"seller's result"<<endl;
    seller.ShowSalesResult();
    cout<<"buyer's result"<<endl;
    buyer.ShowBuyResult();
    return 0;
}