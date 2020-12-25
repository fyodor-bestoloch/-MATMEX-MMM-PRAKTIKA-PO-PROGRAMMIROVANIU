#include <vector>
#include <iostream>
using namespace std;
int main() {
	int n,f;
	vector<int> temp;
	cin>>n;
	vector<int> A;
	for (int i=0;i<n;i++) {
		f=rand()%4534;
    cout<<f<<" ";
		A.push_back(f);
	}
	for (int i=0;i<n;i++) {
		if (A[i]%2!=0) temp.push_back(A[i]);
	}
	A.clear();
	A=temp;
  cout<<"\n";
	for(int i=0;i<A.size();i++) {
		cout<<A[i]<<" ";
	}
	return 0;
}

