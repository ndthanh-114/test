#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;

int main(){
	cout<< "He va ten: Nguyen Duc Thanh -MSSV: 20183991-699226"<< endl;
	cout<< "** Thao tac voi cac vector**"<< endl;
	cout<< "**1. Nhap cac vector  **"<< endl;
	cout<< "** Tinh cacs thong so Vector**"<<endl;
	cout<< "**0. Thoat"<<endl;
	cout<<"=============================="<<endl;
	cout<< "** Nhap lua chon cua ban"<< endl;

	float xa, ya, za;
	float xb, yb, zb;
	float xc, yc, zc;


	int choice = 9;
	while(choice!=0){
		cin >> choice;
		if(choice ==1){
			cout<< "Nhap thong tin vector a:"<< endl;
			cout<<"x:";
			cin>> xa;
			cout<<"y:";
			cin>> ya;
			cout<<"z:";
			cin>> za;

			cout<< "Nhap thong tin vector b:"<< endl;
			cout<<"x:";
			cin>> xb;
			cout<<"y:";
			cin>> yb;
			cout<<"z:";
			cin>> zb;

			cout<< "Nhap thong tin vector c:"<< endl;
			cout<<"x:";
			cin>> xc;
			cout<<"y:";
			cin>> yc;
			cout<<"z:";
			cin>> zc;
			cout<< "Nhap lua chon cua ban";
		}
		if(choice == 2){
			cout<< "vector a("<<xa<<","<<ya<<","<<za<<")"<< endl;
			cout<< "vector b("<<xb<<","<<yb<<","<<zb<<")"<< endl;
			cout<< "vector c("<<xc<<","<<yc<<","<<zc<<")"<< endl;
			cout<< "tong 3 vector: ("<<xa+xb+xc<<","<<ya+yb+yc<<","<<za+zb+zc<<")"<< endl;

			float vab = xa*xb+ya*yb+za*zb;
			float vcb = xc*xb+yc*yb+zc*zb;
			float vac = xa*xc+ya*yc+za*zc;

			float cab = vab/(xa*xa+ya*ya+za*za)*(xb*xb+yb*yb+zb*zb);
			float cac = vac/(xa*xa+ya*ya+za*za)*(xc*xc+yc*yc+zc*zc);
			float ccb = vcb/(xc*xc+yc*yc+zc*zc)*(xb*xb+yb*yb+zb*zb);

			cout<< "Goc giua 2 vector ab la goc";
			if(cab > 0){
				cout<< "goc nhon"<< endl;

			}
			if(cab = 0){
				cout<< "goc vuong"<< endl;

			}
			if(cab < 0){
				cout<< "goc tu"<< endl;
			}

			cout<< "Goc giua 2 vector ac la goc";
			if(cac > 0){
				cout<< "goc nhon"<< endl;

			}
			if(cac = 0){
				cout<< "goc vuong"<< endl;

			}
			if(cac < 0){
				cout<< "goc tu"<< endl;
			}

			cout<< "Goc giua 2 vector bc la goc";
			if(ccb > 0){
				cout<< "goc nhon"<< endl;

			}
			if(ccb = 0){
				cout<< "goc vuong"<< endl;

			}
			if(ccb < 0){
				cout<< "goc tu"<< endl;
			}


			cout<< "Tich vo huong cua 2 vecto ab : "<< vab<< endl;
			cout<< "Tich vo huong cua 2 vecto ac : "<< vac<< endl;
			cout<< "Tich vo huong cua 2 vecto cb : "<< vcb<< endl;

			cout<< "Tich co huong cua 2 vector ab: ("<<fabs(ya*zb-yb*za)<<","<<fabs(xa*zb-xb*za)<<","<<fabs(xa*yb-ya*zb)<<")"<< endl;
			cout<< "Tich co huong cua 2 vector bc: ("<<fabs(yc*zb-yb*zc)<<","<<fabs(xc*zb-xb*zc)<<","<<fabs(xc*yb-yc*zb)<<")"<< endl;
			cout<< "Tich co huong cua 2 vector ac: ("<<fabs(ya*zc-yc*za)<<","<<fabs(xa*zc-xc*za)<<","<<fabs(xa*yc-ya*zc)<<")"<< endl;

			cout<< "TVec to 3a+5b-2c: ("<<3*xa+5*xb-2*xc<<","<<3*ya+5*yb-2*yc<<","<<3*za+5*zb-2*zc<<")"<< endl;
		}
	}



}
