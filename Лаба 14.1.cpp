//Однонаправленные списки. удаление элементов с четными номерами
#include <iostream>
using namespace std;
struct el{
double k;
el *next;
};
el *first;el *tek; el*d;

//Добавление
void add(int n){
if (first==NULL){first=new el;first->next=0;first->k=n;tek=first;}else{
tek->next=new el;tek=tek->next;tek->k=n;tek->next=0;
}}

//Печать
void print(){
  tek=first;cout<<"\nЭлементы списка:\n";
  while (tek!=NULL){
    cout<<tek->k<<" ";tek=tek->next;
  }cout<<endl;}

//Удаление с четными номерами
void del(){tek=first;int num=1;while(tek!=NULL){
if(num%2==1){tek=tek->next;} else {tek->k=0;tek=tek->next;}
num++;}

}

//Основа
int main()
{int x=1,v;
cout<<"1. Добавить элемент в конец списка\n2. Вывести список\n3. Удалить чет\n0. Выход\n";
  while(x!=0){
cin>>x;
switch(x){
case 1:{cout<<"\nВведите элемент ";cin>>v;cout<<endl;add(v);break;}
case 2:{print();cout<<endl;break;}
case 3:{del();cout<<endl;break;}
}
  }
}

