#include<iostream>
using namespace std;
int main ()
{
	float x,c=0,a=0,N;
	cout<<"ingrese laa cantidad de numeros que vas a sumar:"; cin>>N;
	do{
		cout<<"ingrese el numero :"; cin>>x;
		c=c+1;
		a=a+x;
	}while(c<N);
	cout<<"suma total:"<<a;
	return 0;
}
