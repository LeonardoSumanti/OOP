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
		
		int num;
		cout<<"Enter the number of students: "; cin>>num;
		
	
		void enterStudent(num){
			for(int i = 0; i<=num; i++){
			
			cout<<"Name				:"; 
			cin>>Name;
			
			cout<<"Assignment		:"; 
			cin>>Assignment;
			
			cout<<"Quiz				:";
			cin>>Quiz;
			
			cout<<"Attendance		:";
			cin>>Attendance;
			
			cout<<"Mid Exam			:";
			cin>>Mid;
			
			cout<<"Final Exam		:";
			cin>>Final;
			}
		}
		
		void displayStudent(){
			
			Attendance = Attendance*10/100;
			Quiz = Quiz*10/100;
			Assignment = Assignment*20/100;
			Mid = Mid*30/100;
			Final = FInal*30/100;
			
			
			cout<<"\nStudent Grade";
			cout<<"\nName		:"<<Name;
			cout<<"\nAssignment	:"<<Assignment;
			cout<<"\nQuiz		:"<<Quiz;
			cout<<"\nAttendance	:"<<Attendance;
			cout<<"\nMid Exam	:"<<Mid;
			cout<<"\nFinal Exam	:"<<Final;
		}
};
int main(){
	
	
	Student.enterStudent(2);
	Student.displayStudent();
	
	
	return 0;
}
