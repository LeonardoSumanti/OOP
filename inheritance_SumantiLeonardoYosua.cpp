#include <iostream>
#include <conio.h>

using namespace std;


class Orang {
	protected:
		string nama;
		char gender;
	
	public:
		Orang(){
		}
		void setNama (string nama){
		}
		void setGender (char gender){
		}
		string getName (){
			return nama;
		}
		char getGender (){
			return gender;
		}
		
};

class Guru : public Orang {
	private:
		string falkutas;
		int nik;
		
	public:
		void setNik (int nik){
		}
		int getNik (){
		}
		void setFalkutas (string fakultas){
		}
		string getFalkutas (){
			return falkutas;
		}
		void setData (){
		}
		void displayData(){
		}
		
};

class Siswa : public Orang {
	private:
		int nim;
		string registration_number;
		string prodi;
		
	public:
		void setNim (int nim){
		}
		void setRegistrationNumber (string registration_number){
		}
		void setProdi (string prodi){
		}
		int getNim(){
		}
		string getRegistrationNumber(){
			return registration_number;
		}
		string getProdi(){
			return prodi;
		}
};

int main (){
	
	return 0;
	
}
