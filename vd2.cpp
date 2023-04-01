#include<bits/stdc++.h>
using namespace std; 
class Tacgia {
	char tenTG[50];
	char DC[50];
	public:
		void input();
		void output();
};
	void Tacgia::input(){
		cout<<"nhap ten tg : "<<endl;fflush(stdin);gets(tenTG);
		cout<<"nhap dia chi : "<<endl;fflush(stdin);gets(DC);
	}
	void Tacgia::output(){
		cout<<"ten tg la : "<<tenTG<<endl;
		cout<<"dia chi la : "<<DC<<endl;
	}
class NXB {
	char TenNXB[30];
	char Diachi[30];
	public:
		char * GetTenNXB()
		{ return TenNXB;}
	void SetTenNXB(char* Ten)
	{strcpy(TenNXB,Ten);}
	char * GetDiachi()
		{ return Diachi;}
	void SetDiachi(char* dc)
	{strcpy(TenNXB,dc);}
};
class sach{
	char tensach[30];
	Tacgia x;
	NXB y;
	public :
		void input();
		void output();
};
void sach::input(){
	cout<<"nhap ten sach : "<<endl;fflush(stdin);gets(tensach);
	x.input();
	cout<<"nhap ten NXB : "<<endl;fflush(stdin);
	gets(y.GetTenNXB());
	cout<<"nhap dia chi NXB : "<<endl;fflush(stdin);
	gets(y.GetDiachi());
	}
void sach::output(){
	cout<<"ten sach la : "<<tensach<<endl;
	x.output();
	cout<<"Ten NXB la : "<<y.GetTenNXB()<<endl;
	cout<<"Dia chi NXB la : "<<y.GetDiachi()<<endl;

}
int main (){
	sach a;
	a.input();
	a.output();
	return 0 ;
}
