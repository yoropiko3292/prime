#include <iostream>
#include <string>
using namespace std;
int main(){
	long long p,i;
	i = 2;
	cin >> p;
	if(p == 1){
		cout << 1 << endl;
	}
	while(p > 1){
		while(p % i == 0){
			cout << i << endl;
			p /= i;
		}
		i++;
	}
	return 0;
}