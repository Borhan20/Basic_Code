#include<bits/stdc++.h>
using namespace std;

int main(){

	ios::sync_with_stdio(0); cin.tie(0);
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);
	int n;
	int k;
	cin >> n >> k;
	//from n lenth to k lenth subset
	int ara[10];
	for(int i=0; i<n; i++){
		cin >> ara[i];
	}
	int p = (1<<n);
	//cout << p <<endl;
	for(int i=0; i<p; i++){
		//std::string binary = std::bitset<32>(i).to_string();
		bitset<32>biting(i);
		
		//cout << biting.count() <<endl;
		list<int>set;

		if(biting.count()==k){

			
			for(int j=0; j<n; j++){
				if(i & 1<<j){
					set.push_back(ara[j]);
				}
			}

		}
		else continue;
		
		int count =0;
		//cout << i << "th element" <<endl;
		while(!set.empty()){
			if(count>0) cout << " ";
			cout << set.front();
			set.pop_front();
		}
		cout << endl;
		set.clear();
	}
}