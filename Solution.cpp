#include <iostream>
#include <string>
#include <cstddef>
 
 
using namespace std;
 
int main()
{
	int n;
	string s;
	int i;
	int a;
	int d;
	i = 0;
	a = 0;
	d = 0;
	cin >> n;
	cin >> s;
	if (n != 0) {
		
		while (i < n) {
			if (s[i] == 'A') {
				a++;
			}
			else if(s[i] == 'D'){
				d++;
			}
			i++;
		}
 
 
	}
	
	if (a > d) {
		cout << "Anton" << endl;
	}
	else if (d > a) {
		cout << "Danik" << endl;
	}
	else {
		cout << "Friendship" << endl;
	}
 
 
	return 0;
}
