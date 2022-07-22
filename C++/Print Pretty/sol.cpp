#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
	int T; cin >> T;
	cout << setiosflags(ios::uppercase);
	cout << setw(0xf) << internal;
	while(T--) {
		double A; cin >> A;
		double B; cin >> B;
		double C; cin >> C;

		/* Enter your code here */

//  printf( "0x%X\n", A);
cout<<hex<<showbase<<nouppercase<<left<<(long)A<<endl;

 cout<<setw(15)<<setprecision(2)<<showpos<<right<<setfill('_')<<fixed<<B<<endl;
 cout<<setprecision(9)<<left<<uppercase<<noshowpos<<left<<scientific<<C<<endl;
	}
	return 0;

}
