
#include <math.h>
#include <vector>
#include <iostream>
using namespace std;
int main(){
	int n, a;
	cin >> n;
	vector<int> sosTAV, temp;
	for (int i=0;i<n;i++) {
		sosTAV.push_back(i);
	}
	for (int a=2;a<(sqrt(n));a++) {
		if (sosTAV[a]!=0) {
			for (int i=a*a;i<n;i+=a) {
				sosTAV[i]=0;
			}
		}
	}
	for (int i=4;i<n;i++) {
		if (sosTAV[i]==0) {
			temp.push_back(i);
			cout<<i<<' ';
		}
	}
	sosTAV.clear();
	sosTAV=temp;
  return 0;
}
