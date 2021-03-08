#include<iostream>

using namespace std;

class TollBooth{   
	private:
    int cars;
    double money;
    
	public:
    TollBooth(): cars(0), money(0) {}
    void payingCar()
    {
         cars=cars+1;
         money=money+1;
    }
    void nopayCar()
    {
         cars=cars+1;
         money=money+0;
    }
    void display()
    {
         cout<<"\n Total uang yang dikumpulkan tooBooth = "<<money<<endl;
    }
    void get()
    {
         cout<<" Total mobil tooBooth = "<<endl;
    }
	};
 
int main()
{
       char x;
       TollBooth d;
       cout<<"pilih 1 untuk mobil membayar tol dan pilih 2 untuk mobil non bayar tol = ";
       cout<<"";
cin>>x;

switch (x)
   {
       case '1':
                 d.payingCar();
                 d.display();
                 d.get();
                 break;
        case '2':
                 d.nopayCar();
                 d.display();
                 d.get();
                 break;
   }
return 0;
}
