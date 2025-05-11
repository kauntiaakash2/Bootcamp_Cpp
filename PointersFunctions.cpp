#include<bits/stdc++.h>
using namespace std;
int add(int a, int b){
	return a+b;
}
int main(){
	int (*p)(int, int);
	p=&add;
	int result=(*p)(5, 10);
	cout<<result<<endl;
	return 0;
}
