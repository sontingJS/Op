#include<bits/stdc++.h>
using namespace std;
class SINHVIEN {
	char MSV[30] ; 
	char HOTEN[50];
	int TUOI;
	int DIEM;
	public:
		void nhap();
		void xuat();
};
	void SINHVIEN::nhap(){
		cout<<"Nhap ma SV :"<<endl;
		fflush(stdin);gets(MSV);
		cout<<"Nhap ho va ten :"<<endl;
		fflush(stdin);gets(HOTEN);
		cout<<"Nhap Tuoi : "<<endl;cin>>TUOI;
		cout<<"Nhap Diem : "<<endl;cin>>DIEM;
	}
	void SINHVIEN::xuat(){
		cout<<"Ma SV la :";cout<<MSV<<endl;
		cout<<"ho va ten la :";cout<<HOTEN<<endl;
		cout<<"Tuoi la : ";cout<<TUOI<<endl;
		cout<<"Diem la : ";cout<<DIEM<<endl;
	}
int main(){
	SINHVIEN x;
	x.nhap();
	x.xuat();
	return 0 ; 
}
