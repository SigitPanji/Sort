#include <iostream>
using namespace std;
void buble()
{
int i, n, temp, data[10];
while(i<=7) {
cout <<"Data ke "<<i<< " : "; cin >> data[i-1];
i++;
}
n=i-1;
for(int x=0; x<n; x++)
{
for(int y=0; y<n-1; y++)
{
if(data[y]>data[y+1])
{
int temp = data[y+1];
data[y+1] = data[y];
data[y] = temp;
}
}
}

cout<<endl<<"Data array sesudah sort :"<<endl;
i=0;
while(i<=7) {
cout <<"Data ke"<<i<< " : "<< data[i-1]<<endl;
i++;
}
}


void selection()
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


int main()
{
	int option;
	cout<<"MENU PILIHAN "<<endl;
	cout<<"1. Bubble Sort "<<endl;
	cout<<"2. Selection Sort"<<endl;
	cin>>option;
	system("CLS");
	switch(option)
	{
		case 1 : buble();
		break;
		case 2 : selection();
		break;
	}
	
}




