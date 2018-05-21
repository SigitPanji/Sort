//bubble sort
#include <iostream>
using namespace std;
int main()
{
int i, n, temp, data[7];
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
i=1;
while(i<=7) {
cout <<"Data ke"<<i<< " : "<< data[i-1]<<endl;
i++;
}
}

