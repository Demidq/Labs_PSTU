#include <iostream>
#include <string>
using namespace std;

class book {

private:
string* author=new string;
string* title=new string;
int* year=new int;

public:

//Конструктор копирования
book(const book &other)
{
*this->author =*other.author;
*this->title = *other.title;
*this->year = *other.year;

}
//Метод печати
void print(){
  cout<<"Автор "<<*author<<endl<<
"Название "<<*title<<endl<<
"Год издания "<<*year<<endl<<"___________________________"<<endl;
}


//Конструктор с заполнением объекта
book(string author, string title, int year){

*this->author = author;
*this->title=title;
*this->year=year;
cout<<"Автор "<<author<<endl<<
"Название "<<title<<endl<<
"Год издания "<<year<<endl<<"___________________________"<<endl;}



//Деструктор с очисткой памяти
~book(){
cout<<"Книга автора "<<*author<<" удалена"<<endl;
delete author;
}
};

int main() {
  setlocale(LC_ALL, "Russian");
string author;
string title;
int year;

author ="Иванов Иван";
title = "Золотой петушок";
year=10;
book Ivanov(author,title,year);

author ="Snoop Dog";
title = "Smoke every day ";
year=9;
book snoop(author,title,year);

//копируем
book snoop1(Ivanov);
snoop1.print();
}
