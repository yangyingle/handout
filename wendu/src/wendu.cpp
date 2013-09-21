/*
 * wendu.cpp
 *
 *  Created on: 2013Äê9ÔÂ21ÈÕ
 *      Author: yangyingle
 */
#include <iostream>
using namespace std;

double FtoC(double x){
	double c=(x-32)*5/9;
	return c;
}
double CtoF(double y){
	double f=y*9/5+32;
	return f;
}
double CtoK(double z){
	double k=z+273.15;
	return k;
}
double KtoC(double w){
	double c=w-273.15;
	return c;
}
double KtoF(double u){
	double f=(u-273.15)*9/5+32;
	return f;
}
double FtoK(double v){
	double k=(v-32)*5/9+273.15;
	return k;
}
int main(){
	char s;
	char a;
	double b;
	cout<<"temperature changer(K,F,C)"<<endl;
	cout<<"pleast input source temperature type"<<endl;
	cin>>s;
	cout<<"piease input the temperature"<<endl;
	cin>>b;
	cout<<"pleast input aim temperature type"<<endl;
	cin>>a;
	if(s=='F'&&a=='C')
		cout<<FtoC(b)<<endl;
	else if(s=='C'&&a=='F')
		cout<<CtoF(b)<<endl;
	else if(s=='C'&&a=='K')
		cout<<CtoK(b)<<endl;
	else if(s=='K'&&a=='C')
		cout<<KtoC(b)<<endl;
	else if(s=='K'&&a=='F')
		cout<<KtoF(b)<<endl;
	else if(s=='F'&&a=='K')
		cout<<FtoK(b)<<endl;
	system("pause");
	return 0;
}




