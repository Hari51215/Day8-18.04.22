#include <iostream>
using namespace std;

template<class CM> class minimum 
{
    private:
        CM value_1,value_2;
    public:
        minimum (CM data_1,CM data_2)
            {
                value_1=data_1; 
                value_2=data_2;
            }
            
        CM get_min_value();
};

template<class CM> CM minimum<CM> :: get_min_value()
{
    CM min_value;
    min_value = (value_1 > value_2) ? value_2 : value_1;
    return min_value;
}

int main () 
{
    int i1,i2;
    double d1,d2;
    string s1,s2;

    cout << "Enter two interger values : " <<endl;
    cin>>i1>>i2;

    minimum <int> iobj (i1,i2);
    cout << "The Minimum Value of "<< i1 << " and " << i2 << " is : " << iobj.get_min_value() << endl;

    cout<<"Enter two floating values : " <<endl;
    cin>>d1>>d2;

    minimum <double> dobj (d1,d2);
    cout << "The Minimum Value of " << d1 << " and " << d2 << " is : " << dobj.get_min_value() << endl;

    cout<<"Enter two Strings : " <<endl;
    cin>>s1>>s2;

    minimum <string> sobj (s1,s2);
    cout << "The Minimum Value of " << s1 << " and " << s2 << " is : " << sobj.get_min_value() << endl;

    return 0;
}