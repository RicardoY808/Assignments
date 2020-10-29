#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
	cout<<"**********************************************"<<endl;
	cout<<"*       欢迎使用学生成绩管理系统1.1          *"<<endl;
	cout<<"*     王小明   计算机2003班 2020.10.29       *"<<endl;
	cout<<"*     1、输入4个同学的代号和成绩             *"<<endl;
	cout<<"*     2、显示4个同学的代号和成绩列表         *"<<endl;
    cout<<"*     3、求4人平均分                         *"<<endl;
    cout<<"*     4、求4人总分                           *"<<endl;
    cout<<"*     5、查询某同学的分数                    *"<<endl;
    cout<<"*     6、统计及格率                          *"<<endl;
    cout<<"*     7、退出                                *"<<endl;
    cout<<"*     请输入(1-5)选择：                      *"<<endl;
    cout<<"*                                            *"<<endl;
    cout<<"**********************************************"<<endl;
    system("pause");
	return 0;
}
















#include <iostream>
#include <stdlib.h> 
#include <time.h>  
using namespace std;
int main() 
{int a,A,B,C,D,n=0,s1,s2,s3,s4;
char q1,q2,q3,q4;
cin>>a;
	cout<<"**********************************************"<<endl;
	cout<<"*       欢迎使用学生成绩管理系统1.1          *"<<endl;
	cout<<"*     王小明   计算机2003班 2020.10.29       *"<<endl;
	cout<<"*     1、输入4个同学的代号和成绩             *"<<endl;
	cout<<"*     2、显示4个同学的代号和成绩列表         *"<<endl;
    cout<<"*     3、求4人平均分                         *"<<endl;
    cout<<"*     4、求4人总分                           *"<<endl;
    cout<<"*     5、查询某同学的分数                    *"<<endl;
    cout<<"*     6、统计及格率                          *"<<endl;
    cout<<"*     7、退出                                *"<<endl;
    cout<<"*     请输入(1-5)选择：                      *"<<endl;
    cout<<"*                                            *"<<endl;
    cout<<"**********************************************"<<endl;
cin>>q1>>s1>>q2>>s2>>q3>>s3>>q4>>s4;
switch (a)
{case 2 :cout<<'A'<<" "<<A<<" "<<'B'<<" "<<B<<" "<<'C'<<" "<<C<<" "<<'D'<<" "<<D<<endl;    break;
 case 4 :         cout<<A+B+C+D;	break;
 case 6 :     {if(A>=60) n+=1 ;
                if(B>=60) n+=1 ;
                if(C>=60) n+=1 ;
                if(D>=60) n+=1 ;
                cout<<n/4*100<<"%"<<endl;
	                break;}

}
}
