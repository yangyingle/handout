/*
 * zuhe.cpp
 *
 *  Created on: 2013Äê9ÔÂ21ÈÕ
 *      Author: yangyingle
 */
#include <iostream>
using namespace std;

int jiecheng(int x){
	int t;
	if(x==1)
		t=1;
	else
		t=x*jiecheng(x-1);
	return t;
}
int zuheshu(int u,int v){
	int a=jiecheng(u)/(jiecheng(v)*jiecheng(u-v));
	return a;
}

int main()
{
	int n;
	int m;
	cout<<"please input the number of element:"<<endl;
	cin>>n;
	cout<<"pleasr input the number you want:"<<endl;
	cin>>m;
	cout<<"C("<<n<<","<<m<<")="<<zuheshu(n,m)<<endl;
	system("pause");
	return 0;

}




