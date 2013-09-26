/* * xuankemain.cpp
 *
 *  Created on: 2013年9月26日
 *      Author: yangyingle
 */

#include<iostream>
#include<string>
using namespace std;

typedef struct  Student{
	char number[14];    //学号
	char name[20];      //学生姓名
	int chengji;       //学生成绩
	int  weizhi;      //用来判断是否为空位，1表示该位置已有人，0表示该位置为空位，可添加一人
}Student;

 struct Student CPP[150];               //创建一数组存储选上这门课程的学生

 int find(struct Student X){               //查找函数
	 int t=0;
	for(int i=0;i<150;i++){
		if(strcmp(X.number,CPP[i].number)==0){
			t=i;
			break;
		}

	}
	return t;
}                                           //查找学生，找到返回学生的序号，找不到返回0

 int panduan(){                             //判断空位函数
	 int t=0;
	for(int i=0;i<150;i++){
		if(CPP[i].weizhi==0){
			t=i;
			break;
		}

	}
	return t;
}                                       //判断是否有空位，有则返回空位序号

 void list(){                                //列出学生函数
 	cout<<"-----已选课学生名单-----"<<endl;
 	cout<<"学号\t\t姓名\t成绩\t"<<endl;
 	for(int i=0;i<150;i++){
 		if(CPP[i].weizhi==0){
 			break;
 		}
 		cout<<CPP[i].number<<"\t"<<CPP[i].name<<"\t"<<CPP[i].chengji<<endl;

 	}
 }                                           //列出所有学生

 void Xuanke(){                              //选课函数
	int y=panduan();
	if(y==149){cout<<"该课程人数已满！！"<<endl;}   //判断人数是否已经满了

	else{


 	struct Student News;
 	cout<<"请输入学号"<<endl;
 	cin>>News.number;
 	cout<<"请输入姓名"<<endl;
 	cin>>News.name;                        //输入选课的学生信息

 	int j=find(News);

 	if(j!=0){cout<<"该学生已存在！"<<endl;}     //判断学生是否已经选了该课程
 	else if(j==0){
 		strncpy(CPP[y].number,News.number,14);
 		strncpy(CPP[y].name,News.name,20);
 		CPP[y].weizhi=1;
 	}                                       //将学生加入该课程的序列


	}
 }

void out(){                                  //退选函数

	struct Student tuixuan;
	int j;
	int y;
	cout<<"输入退选学生学号"<<endl;
	cin>>tuixuan.number;
	j=find(tuixuan);
	cout<<"学生信息"<<endl;
	cout<<CPP[j].number<<endl;
	cout<<CPP[j].name<<endl;
	cout<<"确定要退选吗？"<<endl;
	cout<<"1:确 定"<<"-----"<<"2:取 消"<<endl;           //确认是否退选
	cin>>y;
	if(y==1){
		for(;j<150;j++){
		strncpy(CPP[j].number,CPP[j+1].number,14);
		strncpy(CPP[j].name,CPP[j+1].name,20);
		CPP[j].chengji=CPP[j+1].chengji;
		CPP[j].weizhi=CPP[j+1].weizhi;
		}                                          //退选后将其后的学生前移
    cout<<"退选成功！！"<<endl;
	}
}

void chengji(){                              //录入成绩
	cout<<"录入学生成绩"<<endl;
	 	for(int i=0;i<150;i++){             //循环一个一个录入成绩
	 		if(CPP[i].weizhi==0){
	 			break;
	 		}                               //判断当前位置是否有学生，若无，退出录入成绩
	 		int y;
	 		cout<<"学号\t\t姓名\t"<<endl;
            cout<<CPP[i].number<<"\t"<<CPP[i].name<<endl;
            cout<<"请输入分数"<<endl;
            cin>>CPP[i].chengji;
            cout<<"是否继续？"<<endl;
            cout<<"1：继续                       2:：退出"<<endl;
            cin>>y;
            if(y==2){break;}
	 	}                                 //选择是否继续录入成绩
	 	cout<<"录入完毕！！"<<endl;

}

int main(){                               //主函数
	int a;
	do{
		cout<<"菜单"<<endl;
		cout<<"1：查看学生"<<endl;
		cout<<"2：学生选课"<<endl;
		cout<<"3：学生退选"<<endl;
		cout<<"4：录入成绩"<<endl;
		cout<<"5：退出"<<endl;               //列出菜单
		cin>>a;                            //输入菜单选项
		switch(a){
		case 1:
			list();break;
		case 2:
			Xuanke();break;
		case 3:
			out();break;
		case 4:
			chengji();break;                 //选择分支，根据输入选项调用函数
		case 5:
			return 0;break;                  //返回0值退出while循环
		default:
			cout<<"输入错误！"<<endl;           //输入不合法的反馈
		}
	}while(1);
}







