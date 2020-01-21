#include <iostream>
#include <cmath>
using namespace std;
class OsobaBMI{
	private:
		
	public:
		double wzrost, waga, id;
		void wypisz(){
			
		}
		
		float bmi(){
			double wzrost2 = wzrost / 100;
			cout<< waga/(wzrost2*wzrost2);
		}
		
		double bmi2()
		{
			return waga / ((wzrost/100)*(wzrost/100));
		}
		
		void figura(){
			if(bmi2() < 18.5 ){
				cout<<"Niedowaga";
			}
			else if(bmi2()>=18.5 && bmi2()<=24.9){
			cout<<"Waga prawid³owa";
			}
			else if(bmi2()>=25 && bmi2()<=29.9){
			cout<<"Nadwaga";
			}
			else if(bmi2()>30){
			cout<<"Oty³osc";	
			}
		}
		
		void wpisz(){
			cout<<"Podaj wzrost:"<<endl;
			cin>>wzrost;
			cout<<"Podaj Wage:"<<endl;
			cin>>waga;
		}
};

int main(){
	OsobaBMI id1;
	id1.wpisz();
	id1.bmi();
	id1.figura();
	return 0;
}
