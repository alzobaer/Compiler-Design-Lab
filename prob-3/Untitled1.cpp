#include<bits/stdc++.h>
using namespace std;
int main(){
	int p = 10;
	int *ptr;
	ptr = &p;
	cout << ptr << endl << ++ptr;
	*ptr = 5;
	cout << endl << ptr << endl << p;
}
