#include <iostream>
using namespace std;

int main(){
	int n;
	char c;
	for(n = 32; n < 126; n++){
		c = char(n);
		cout<< n << "=" << c << " ";
		if (n % 10 == 0)cout<<"\n";
	}

}
