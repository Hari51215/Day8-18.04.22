#include<iostream>
#define potheri 9.8
#define egmore 20
#define guduvacherry 11.7
#define marina 22.7
#define velacherry 15
#define tambaram 17.4
#define chengalpattu 7

using namespace std;

template<typename T> T train_ticket (T destination,int passengers)  
{ 
    return destination*passengers;
} 

int main()
{
    int destination,passengers;

    cout<<"\n## ## ## _ _ _ Train Ticket Booking System _ _ _ ## ## ##"<<endl;
    cout<<"1.Chengalpattu\n2.Potheri\n3.Guduvacherry\n4.Velacherry\n5.Tambaram\n6.Egmore\n7.Marina"<<endl;
    
    cout<<"Choose your destination : "<<endl;
    cin>>destination;

    cout<<"Total Number of Passengers : "<<endl;
    cin>>passengers;

    if(destination==1)
        cout<<"Ticket Charge is : "<<train_ticket(chengalpattu,passengers)<<endl;
        
    else if(destination==2)
        cout<<"Ticket Charge is : "<<train_ticket(potheri,passengers)<<endl;
        
    else if(destination==3)
        cout<<"Ticket Charge is : "<<train_ticket(guduvacherry,passengers)<<endl;
    
    else if(destination==4)
        cout<<"Ticket Charge is : "<<train_ticket(velacherry,passengers)<<endl;
        
    else if(destination==5)
        cout<<"Ticket Charge is : "<<train_ticket(tambaram,passengers)<<endl;

    else if(destination==6)
        cout<<"Ticket Charge is : "<<train_ticket(egmore,passengers)<<endl;
    
    else if(destination==7)
        cout<<"Ticket Charge is : "<<train_ticket(marina,passengers)<<endl;

    else
        cout<<"Sorry, Currently No trains are Available for your Destination."<<endl;

    return 0;
}