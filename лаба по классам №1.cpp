//Вывести количество денег подсчитывая номиналы купюр
#include <iostream>
using namespace std;
  class money{

public:
int k=0;
int summa(int z,int x){
k=k+z*x;return k;
}};

int main(){
  int first;
int second;
  money Tom;
cout<<"Введите кол-во купюр:";
cout<<"\n1$: ";cin>>second;first=1;cout<<Tom.summa(second,first);
cout<<"\n2$: ";cin>>second;first=2;cout<<Tom.summa(second,first);
cout<<"\n5$: ";cin>>second;first=5;cout<<Tom.summa(second,first);
cout<<"\n10$: ";cin>>second;first=10;cout<<Tom.summa(second,first);
cout<<"\n50$: ";cin>>second;first=50;cout<<Tom.summa(second,first);
cout<<"\n100$: ";cin>>second;first=100;cout<<Tom.summa(second,first);
cout<<"\n500$: ";cin>>second;first=500;cout<<Tom.summa(second,first);
cout<<"\n1000$: ";cin>>second;first=1000;cout<<Tom.summa(second,first);
cout<<"\n Общая сумма денег = "<<Tom.summa(0,0);
