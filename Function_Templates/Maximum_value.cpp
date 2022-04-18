#include <iostream>
using namespace std;

template<typename H> H Max_value (H x,H y)  
{ 
    return x > y ? x : y; 
} 

int main () 
{
    int value_1,value_2;
    double number_1,number_2;
    string str_1,str_2;

    cout<< "To Find the Maximum of value for different Data types "<<endl;

    cout << "Enter two interger values : " <<endl;
    cin>>value_1>>value_2;
    cout<< "The Maximum of "<< value_1 << " and " << value_2 << " is : "<< Max_value(value_1,value_2) << endl;

    cout<<"Enter two floating values : " <<endl;
    cin>>number_1>>number_2;
    cout<< "The Maximum of "<< number_1 << " and " << number_2 << " is : "<< Max_value(number_1,number_2) << endl;

    cout<<"Enter two strings : " <<endl;
    cin>>str_1>>str_2;
    cout<< "The Maximum of "<< str_1 << " and " << str_2 << " is : "<< Max_value(str_1,str_2) << endl;

    return 0;
}