#include<iostream>
#include<cstdio>
#include<string>
#include<cstring>
using namespace std;
int main(){
freopen("���ܺ�.txt","r",stdin);
freopen("���ܺ�.txt","w",stdout); 
char s[1000];
gets(s);
for(int i=0;i<strlen(s);i++){
	s[i]-=3;
}
cout<<s;
return 0;
}
