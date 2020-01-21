#include <iostream>
using namespace std;

class trojkat{
	private:
		float bok1, bok2, bok3;
	public:
	float a,b,c,m;
	void czy_prostokatny(){
	cout<<"Sprawdzam czy trojkat jest prostokatny !"<<endl;
    cout<<"Podaj bok A: "<<endl;
    cin>>a;
    cout<<"Podaj bok B: "<<endl;
    cin>>b;
    cout<<"Podaj bok C: "<<endl;
    cin>>c;
     
    m=a;
    if(b>m) m=b;
    if(c>m) m=c;
     
    cout<<"Najwieksza wartosc: "<<m<<endl;
     

    if ( ( (a*a)+(b*b) )== ( m*m) ) {
        cout<<"Trojkat  jest prostokatny";
    }
    else {
        cout<<"Trojkat nie jest protokatny"<<endl;
    } 

     
	};
	
	void czy_rownoramienny(){
	if (a+b >c && a+c >b && c+b >a)
   {
    if ((a==b && a+b>c) && (a==c && a+c>b ) && (b==c && b+c>a))
        cout << "Podany trojkat to: Trojkat rownoramienny"<<endl;
        else cout<<"Nie jest rownoramienny"<<endl;}
	}
	
	bool czy_trojkat{
		if(a+b>c){
		
		}
	}
};

int main(){
	trojkat o1;
	o1.czy_prostokatny();
	o1.czy_rownoramienny();
	
	return 0;
}
