#include <iostream>

using namespace std;

class employee{
	private:
  	int emp_num;
    float emp_comp;
  
    public:
    void entData(){
    cout << "Masukkan Employee Number ";
    cin >> emp_num;
    cout << "Masukkan Employee Salary " ;
    cin >> emp_comp;
  }
  
    void display(){
    cout << Emplye Number " << emp_num << endl;
    cout << "Employee Salary " << emp_comp << endl;
  }
  
};
int main(){
 
 	employee emp1, emp2, emp3;
 	cout << "Masukkan data dari employee 1" << endl;
 	emp1.entData();
 	cout << "Masukkan data dari employee 12" << endl;
 	emp2.entData();
 	cout << "Masukkan data dari employee 1" << endl;
 	emp3.entData();
 	cout << "Total Data yang masuk adalah" << endl;
 	
	emp1.display();
 	emp2.display();
 	emp3.display();
}


