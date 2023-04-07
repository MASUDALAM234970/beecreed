// Online C++ compiler to run C++ program online
#include <iostream>
#include<iomanip>
using namespace std;
int main() {



  char name[100];
  cin>>name;
   double salary, comision, total;
  cin>>salary>>comision;

  total = salary+comision*.15;
  cout<<"TOTAL = R$ "<<fixed<<setprecision(2)<<total<<endl;
  return 0;
}

