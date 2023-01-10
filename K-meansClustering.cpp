#include<bits/stdc++.h>
using namespace std;

main(){
	vector<pair<float,float>> v={{2,10},{2,5},{8,4},{5,8},{7,5},{6,4},{1,2},{4,9}};

	pair<float,float> m1={3.67,9};
	pair<float,float> m2={7,4.33};
	pair<float,float> m3={1.5,3.5};

	for(auto &x:v){
		float mm1=abs(x.first-m1.first)+abs(x.second-m1.second);
		float mm2=abs(x.first-m2.first)+abs(x.second-m2.second);
		float mm3=abs(x.first-m3.first)+abs(x.second-m3.second);
		cout<<mm1<<"  "
		<<mm2<<"  "
		<<mm3<<"  ";
		if(min(mm1,min(mm2,mm3))==mm1)
			cout<<1;
		else if(min(mm1,min(mm2,mm3))==mm2)
			cout<<2;
		else
			cout<<3;
		cout<<endl;
	}

}