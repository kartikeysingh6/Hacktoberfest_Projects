#include<bits/stdc++.h>
using namespace std;

void LinRegr(vector<vector<int>> &v,int findx){
	double t0=0.0,t1=0.0;
	int run=100000;
	int m=v.size();
	double alpha=0.1;
	
	while(run--){
		for(auto &inp:v){
			double temp=t0-(alpha/m)*(t0+(t1*inp[0]) - 1.0*inp[1]);
			t1=t1-(alpha/m)*(t0+(t1*inp[0]) - 1.0*inp[1])*inp[0];
			t0=temp;
			//cout<<t0<<" "<<t1<<endl;
		}
	}
	cout<<"T0: "<<t0<<" "<<"T1: "<<t1<<endl;
	cout<<"{"<<findx<<","<<(int)(t0+t1*findx)<<"}"<<endl;
}

int main(){
	vector<vector<int>> v={{0,3},{1,5},{3,9},{4,11}};
	LinRegr(v,10);
}
