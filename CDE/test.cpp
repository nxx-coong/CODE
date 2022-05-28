#include <iostream>
#include <conio.h>
using namespace std;
int main()
{

int songay,sonam,sotuan,num1;
cout << "Nhap so ngay can chuyen doi : " << endl;
cin>>songay;
sonam=songay/365;
num1=songay-(sonam*365);
sotuan=songay/7;
num1=songay-(sotuan*7);
cout << " So ngay = " <<num1<< endl;
cout << " So tuan = " <<sotuan<< endl;
cout << " So nam = " <<sonam<< endl;
return 0;
}
