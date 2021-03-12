#include<bits/stdc++.h>
using namespace std;
int ff(string str,char ch){//把str全变成ch 
	int cnt=0;
	for(int i=0;i<str.size();i++){
		if(str[i]!=ch) cnt++;
	}
	return cnt;
}
int dfs(string str,char ch){//带返回值的dfs函数 
	if(str.length()==1){
		if(str[0]==ch) return 0;
		return 1;
	}
	int len=str.size();
	string s1=str.substr(0,len/2);
	string s2=str.substr(len/2,len);
	int cnt1=ff(s1,ch);//把前半段变成ch
	int cnt2=ff(s2,ch);//把后半段变成ch 
	int q1=dfs(s2,ch+1);//把后半段变成ch+1串 
	int q2=dfs(s1,ch+1); //把前半段变成ch+1串
	return min(q1+cnt1,q2+cnt2); 
}
int main(){
	int t;
	cin>>t;
	string s;
	while(t--){
		int n;
		cin>>n>>s;
		cout<<dfs(s,'a')<<endl;
	}
}
