#include <iostream>
#include <string>

using namespace std;

class Text{
private:
    string text;
public:
    Text(string _t) : text(_t) {}
};

class FancyText: public Text{
private:
    string left_brac;
    string right_brac;
    string connector;

public:
    FancyText(string _t, string _lb, string _rb, string _con):
    Text::Text(_t), left_brac(_lb), right_brac(_rb), connector(_con){

    }
};

class FixedText : public Text{
public:
    FixedText() : Text::Text("FIXED"){}
};