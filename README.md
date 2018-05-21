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
    for(int a=0; a<n; a++)
   {
   for(int b=0; b<n-1; b++)
   {
   if(data[b]>data[b+1])
 {
int temp = data[b+1];
  data[b+1] = data[b];
  data[b] = temp;
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

