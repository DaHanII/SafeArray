#include<iostream>
#include<stdlib.h>
using namespace std;
#define MAXSIZE 10
int i;
class SafeArray{
public:
	int SetArray(int item);
	void GetArray(int count);
	bool IsInBound(int i);
private:
	int a[MAXSIZE];
};
int SafeArray::SetArray(int item){
	if(IsInBound(i)){
		a[i]=item;		
	    i++;
	    return 1;
	}
	else{
		cout<<"�±�Խ�磬��ע��"<<endl;
		return 0;
	}
}
void SafeArray::GetArray(int count){
	for(int i=0;i<count;i++){
		cout<<"\t"<<a[i]<<endl;
	}
}
bool SafeArray::IsInBound(int i){
	if(i<MAXSIZE)
		return true;
	else
		return false;
}
int main(){
	int item,count1=0,count2=0;
	SafeArray s1,s2;
	cout<<"��������������"<<endl;
	i=0;
	for(int j=0;j<5;j++){
		item=j;
		if(!s1.SetArray(item))
			break;
		count1++;
	}
	i=0;
	for(int k=0;k<40;k++){
		item=2*k;
		if(!s2.SetArray(item))
			break;
		count2++;
	}
	cout<<"��ʾ��������"<<endl;
	s1.GetArray(count1);
	cout<<"\n";
	s2.GetArray(count2);
	system("pause");
}