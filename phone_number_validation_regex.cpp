#include<bits/stdc++.h>
#include<regex>
using namespace std;


bool validate_phone_number(string s){
	const regex pattern("^[0][1][0-9-]{4,11}");
	if(regex_match(s, pattern))
  {
    return true;
  }
  else
  {
    return false;
  }
}

int main(){
	ios::sync_with_stdio(0); cin.tie(0);
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);
	string s;
	cin >> s;
	cout << validate_phone_number(s)<<endl;
}


//link for string operation with regex_match, regex_search, regex_replace:
//https://www.geeksforgeeks.org/regex-regular-expression-in-c/
