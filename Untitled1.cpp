#include<bits/stdc++.h>
using namespace std;
class Hang;
class DATE {
	char D[10];
	char M[10];
	char Y[10];
	public:
	char * GetY()
		{ return Y;}
	void SetY(char* nam)
	{strcpy(Y,nam);}
	char * GetD()
		{ return D;}
	void SetD(char* ngay)
	{strcpy(D,ngay);}
	char * GetM()
		{ return M;}
	void SetM(char* thang)
	{strcpy(M,thang);}
	friend class Hang;
};
class Hang {
	char MH[10];
	char Ten[10];
	DATE Ngaysx;
	public :
		void nhap();
		void xuat();
		friend void In2017(Hang a[],int n);
};
void Hang::nhap(){
	cout<<"nhap ma hang : ";fflush(stdin);gets(MH);
	cout<<"nhap ten hang : ";fflush(stdin);gets(Ten);
	cout<<"nhap ngay sx : ";fflush(stdin);gets(Ngaysx.GetD());
	cout<<"nhap thang sx : ";fflush(stdin);gets(Ngaysx.GetM());
	cout<<"nhap nam sx : ";fflush(stdin);gets(Ngaysx.GetY());
}
void Hang::xuat(){
	cout<<"ma hang : "<<MH<<endl;
	cout<<"ten hang : "<<Ten<<endl;
	cout<<"ngay sx : "<<Ngaysx.GetD()<<endl;
	cout<<"thang sx : "<<Ngaysx.GetM()<<endl;
	cout<<"nam sx : "<<Ngaysx.GetY()<<endl;
}
void In2017(Hang a[],int n){
	for(int i=0 ; i<n;i++){
		if(strcmp(a[i].Ngaysx.GetY(),"2017")==0){
			a[i].xuat();
		}
	}
}
int main(){
	Hang a[30];
	int n ;cout<<"n :";cin>>n;
	for(int i=0 ; i<n ;i++){
		a[i].nhap();
	}
	for(int i=0 ; i<n ;i++){
		a[i].xuat();
	}
	cout<<"Mat Hang duoc sx nam 2017 la : ";
	In2017(a,n);
}
