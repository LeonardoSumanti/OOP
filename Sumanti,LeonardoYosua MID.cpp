#include<iostream>
#include <conio.h>
using namespace std;

class Student{
	public:
		char Name[25];
		int Assignment;
		int Quiz;
		int Attendance;
		int Mid;
		int Final;
		
		void displayStudent(){
			
			int grade[10];
			char huruf[20];
			int num;
			cout<<"Enter the number of students: "; cin>>num;
			for(int i = 1; i<=num; i++){
				cout<<"\nEnter Grade for Student "<<i <<endl;
				cout<<"Name			:"; 
				cin>>Name;
				cout<<"Assignment		:"; 
				cin>>Assignment;
				cout<<"Quiz			:";
				cin>>Quiz;
				cout<<"Attendance		:";
				cin>>Attendance;
				cout<<"Mid Exam		:";
				cin>>Mid;
				cout<<"Final Exam		:";
				cin>>Final;
				
				float at = (Attendance * 10) /100;
				float qu = (Quiz * 10) /100;
				float as = (Assignment * 20) /100;
				float me = (Mid * 30) /100;
				float fe = (Final * 30) /100;
				
				grade[i]= at + qu + as + me +fe;
				
			}
			
			Attendance = Attendance*10/100;
			Quiz = Quiz*10/100;
			Assignment = Assignment*20/100;
			Mid = Mid*30/100;
			Final = Final*30/100;
			
			cout<<"--------------------------------";
			cout<<"\nStudent Grade";
			cout<<"\n--------------------------------";
			cout<<"\nStudent\t \t GRADE";
			cout<<"\n--------------------------------";
			for(int i = 1; i<=num; i++){
				cout<<"\n"<<i;
				cout<<"\t \t "<< grade[i];
				if(grade[i]<=100 && grade[i]>=91){
					cout<<"(A)";
				}else if(grade[i]<=90 && grade[i]>=85){
					cout<<"(A-)";
				}else if(grade[i]<=84 && grade[i]>=82){
					cout<<"(B+)";
				}else if(grade[i]<=81 && grade[i]>=78){
					cout<<"(B)";
				}else if(grade[i]<=77 && grade[i]>=75){
					cout<<"(B-)";
				}else if(grade[i]<=74 && grade[i]>=70){
					cout<<"(C+)";
				}else if(grade[i]<=69 && grade[i]>=67){
					cout<<"(C)";
				}else if(grade[i]<=66 && grade[i]>=60){
					cout<<"(C-)";
				}else if(grade[i]<=59 && grade[i]>=40){
					cout<<"(D)";
				}else if(grade[i]<=39 && grade[i]>=0){
					cout<<"(F)";
				}else{
					cout<<"\nnilai salah input!!";
				}
				cout<<endl;
			}
			cout<<"\n--------------------------------";
		}
};
int main(){
	
	
	Student siswa;
	siswa.displayStudent();
	
	
	return 0;
}
