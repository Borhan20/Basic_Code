#include<bits/stdc++.h>
using namespace std;

int permu(int n){
	if(n==1) return 1;
	return n*permu(n-1);
}

int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	freopen("in.txt","r",stdin);
	freopen("out.txt","w",stdout);

	int n,m;
	cin >> n >> m;

	int ara[10];
	for(int i=0; i<n; i++){
		cin >> ara[i];
	}

	int total = permu(n);
	int hor = permu(n-m);

	int original = total/hor;
	cout << original<<endl;
	int count =0;
	for(int i=0; i<total/hor; i++){
		int qoutiont  = i;
		vector<int> li;
		for(int k=0; k<n; k++) li.push_back(ara[k]);
		vector<int> res;

		for(int j=n; j>0; j--){

			int remainder = (qoutiont+m) % j;
			res.push_back(li[remainder]);
			li.erase(li.begin()+remainder);
			qoutiont = qoutiont/j;
			
		}
		count++;
		for(int j=0; j<m; j++){
			if(j>0) cout << " ";
			cout << res[j];
		}
		cout << endl;
		
	}

}