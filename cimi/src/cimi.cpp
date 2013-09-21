/* * cimi.cpp
 *
 *  Created on: 2013Äê9ÔÂ21ÈÕ
 *      Author: yangyingle
 */




#include <iostream>
using namespace std;

int digui(int m,int n){
	int t;
	if(n==1)
		t=m;
	else
		t=m*digui(m,n-1);
	return t;
}
int main()
{
	int x;
	int y;
	cout<<"please input the base:"<<endl;
	cin>>x;
	cout<<"please input the power:"<<endl;
	cin>>y;
	cout<<"the power of "<<x<<"is"<<digui(x,y)<<endl;
	system("pause");
	return 0;
}
