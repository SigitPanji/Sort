#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	int temp,pertama;
	int a;
	int i,j;
	int length = 8;
	int angka[7];
	for(a=0;a<=7;a++)
{
	cout<<"masukkan angka ke  "<<a<<" : "; cin>>angka[a];
     
	
	

}
for (i= length - 1; i > 0; i--) 
{ pertama = 0;
for (j=1; j<=i; j++)
{
	if(angka[j] < angka[pertama])
	pertama = j;
	}
	temp = angka[pertama];
	angka[pertama] = angka[i];
	angka[i] = temp;
}
for (i = 0; i <=7; i++)
{
cout << angka[i] << endl;
}}
