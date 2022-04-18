#include <iostream>
using namespace std;

template <class SC> class calc 
{
    private:
        SC value_1, value_2;
    public:
        calc (SC number_1, SC number_2) 
        {
            value_1 = number_1;
            value_2 = number_2;
        }

        SC add() 
        { 
            return value_1 + value_2;
        }

        SC subtract() 
        { 
            return value_1 - value_2;
        }

        SC multiply() 
        { 
            return value_1 * value_2;; 
        }
        
        SC divide() 
        { 
            return value_1 / value_2; 
        }

        void print_result()
        {
            cout << "The operands are : " << value_1 << " and " << value_2 << endl;
            cout << value_1 << "+" << value_2 << " = " << add() << endl;
            cout << value_1 << "-" << value_2 << " = " << subtract() << endl;
            cout << value_1 << "*" << value_2 << " = " << multiply() << endl;
            cout << value_1 << "/" << value_2 << " = " << divide() << endl;
        }
};

int main() 
{
    cout<<"/ / / . . . Simple Calculator . . . / / /"<<endl;
    int i1,i2;
    cout<<"Enter two Integers to perform Calculation : "<<endl;
    cin>>i1>>i2;
    calc<int> iobj(i1,i2);
    iobj.print_result();

    double d1,d2;
    cout<<"Enter two Floating point Numbers to perform Calculation : "<<endl;
    cin>>d1>>d2;
    calc<double> dobj(d1,d2);
    dobj.print_result();
    return 0;
}