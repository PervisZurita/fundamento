#include<iostream>
using namespace std;
int main ()
{
	float A,B;
	cout<<"ingrese los valores A B :"; cin>>A>>B;
	if(A==B) {
		cout<<"son iguales:";
	}else{
		if(A>B) { cout<<"A es mayor";
		}else{ cout<<"B es mayor";
		}
	}
}
