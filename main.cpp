// Example program
#include <iostream>
#include <string>
#include <iomanip>
#include <cctype>

using namespace std;

int main()
{
  //1
//   double gl;
//   cout << "Введите кол-во галлонов: ";
//   cin >> gl;
//   cout << "Объем в куб. метрах: " << gl*7.481 << endl;
  
  
  //2
//   cout << setw(4) << 1990 << setw(6) << 135 << endl
//   << setw(4) << 1991 << setw(6) << 7290 << endl
//   << setw(4) << 1992 << setw(6) << 11300 << endl
//   << setw(4) << 1993 << setw(6) << 16200 << endl;
  
  //3
//   int n = 10;
//   cout << n << endl;
//   n += 10;
//   cout << n-- << endl << n << endl;
  
  //4
//   cout << "Ночевала тучка золотая\nНа груди утеса-великана;\nУтром в путь она умчалась рано,\nПо лазури весело играя;\n\nНо остался влажный след в морщине\nСтарого утеса. Одиноко\nОн стоит, задумался глубоко,\nИ тихонько плачет он в пустыне." << endl;
  
  //5
//   char a;
//   cout << "Введите заглавную или строчную букву: ";
//   cin >> a;
//   cout << islower(a) << endl;
  
  //6
//   double dollars;
//   cout << "Введите сумму в долларах: ";
//   cin >> dollars;
//   cout << dollars << " $ " << "равна:" << endl
//   << dollars/1.487 << "£" << endl
//   << dollars/0.172 << "₣" << endl
//   << dollars/0.584 << "ℳ'"<< endl
//   << dollars/0.00955 << "¥" << endl;
  
  //7
//   double cel;
//   cout << "Введите температура в градусах по Цельсию: ";
//   cin >> cel;
//   cout << "Температура в градусах по Фаренгейту: " << (cel*9)/5 + 32 << endl;
  
  //8
//   int n1 = 8425785, n2 = 47, n3 = 9761;
//   cout << setfill('_') << setw(10) << "Город" << setw(25) << "Население" << endl
//   << setw(9) << "Москва" << setw(15) << n1 << endl
//   << setw(9) << "Киров" << setw(16) << n2 << endl
//   << setw(9) << "Угрюмовка" << setw(12) << n3 << endl;
  
  //9
//   int a, b, c, d;
//   char s;
//   cout << "Введите 1ую дробь: ";
//   cin >> a >> s >> b;
//   cout << "Введите 2ую дробь: ";
//   cin >> c >> s >> d;
//   cout << "Сумма дробей: " << (a*d + b*c) << "/" << (b*d) << endl;
  
  //10
//   int f, s, p;
//   cout << "Введите кол-во фунтов: ";
//   cin >> f;
//   cout << "Введите кол-во шиллингов: ";
//   cin >> s;
//   cout << "Введите кол-во пенсов: ";
//   cin >> p;
//   cout << "Десятичных фунтов: £" << f+(static_cast<double>(s)*12+p)/240 << endl;
  
  //11
//   cout << setiosflags(ios::left) << setw(20) << "Surname" 
//   << setw(20) << "Name" 
//   << setw(20) << "Address" 
//   << setw(15) << "City" << endl;
  
//   cout << setfill('-') << setw(75) << "-" << endl;
  
//   cout << setfill(' ') << setiosflags(ios::left) << setw(20) << "Petrov" 
//   << setw(20) << "Vasiliy" 
//   << setw(20) << "Klenovaya 16" 
//   << setw(15) << "Saint-Petersburg" << endl;
  
//   cout << setiosflags(ios::left) << setw(20) << "Ivanov" 
//   << setw(20) << "Sergey" 
//   << setw(20) << "Ocinovaya 3" 
//   << setw(15) << "Nahodka" << endl;
  
//   cout << setiosflags(ios::left) << setw(20) << "Sidorov" 
//   << setw(20) << "Ivan" 
//   << setw(20) << "Beresovaya 21" 
//   << setw(15) << "Kaliningrad" << endl;
  
  //12
//   double decpounds;
//   int pounds;
//   double decfrac;
//   cout << "Введите число десятичных фунтов: ";
//   cin >> decpounds;
//   pounds = static_cast<int>(decpounds);
//   decfrac = (decpounds-pounds)*20;
  
//   decpounds = static_cast<int>((decfrac-static_cast<int>(decfrac))*12);
  
//   cout << "Эквивалентная сумма в старой форме записи: £" 
//   << pounds 
//   << "." << static_cast<int>(decfrac) 
//   << "." << decpounds << endl;
}
