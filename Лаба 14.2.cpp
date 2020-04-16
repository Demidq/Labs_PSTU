//Двунаправленные списки.Тип информационного поля char*. Добавить в список элементы с номерами 1, 3, 5 и т. д.
#include <iostream>
using namespace std;
struct el{
char k;
el *next;
el *pred;
};
el *first;el *tek; el* d;

//Добавление
void add(char n){
if (first==NULL){first=new el;first->next=0;first->k=n;tek=first;}else{d=tek;
tek->next=new el;tek=tek->next;tek->k=n;tek->pred=d;tek->next=0;
}}

//Печать
void print(){int z=1;
  tek=first;cout<<"\nЭлементы списка:\n";
  while (tek!=NULL){
    cout<<"№"<<z<<" "<<tek->k<<" ";tek=tek->next;z++;
  }cout<<endl;}

//Добавление с нечетными номерами
void del(){tek=first;d=tek;
tek->pred=new el;tek=tek->pred;tek->k='X';tek->next=d;first=tek;d->pred=tek;
tek=tek->next;
int num=2;while(tek!=NULL){
if(num%2==0){d=tek;tek=tek->next;} else {tek->pred=new el;
tek=tek->pred;tek->next=d->next;tek->pred=d;tek->k='X';
d->next=tek;
tek=tek->next;}
num++;}

}

//Основа
int main()
{int x=1;char v;
cout<<"1. Добавить элемент в конец списка\n2. Вывести список\n3. Добавить не-чет\n0. Выход\n";
  while(x!=0){
cin>>x;
switch(x){
case 1:{cout<<"\nВведите элемент ";cin>>v;cout<<endl;add(v);break;}
case 2:{print();cout<<endl;break;}
case 3:{del();cout<<endl;break;}
}
  }
}
