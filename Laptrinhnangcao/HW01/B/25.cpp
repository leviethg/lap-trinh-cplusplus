#include <iostream>
#include <cmath>
using namespace std;
int nhonhat(int x, int y){
	return (x+y-abs(x-y))/2;
}
int lonnhat(int x, int y){
	return (x+y+abs(x-y))/2;
}
int main(){
	int a, b, c, d, e;
	cin >> a >> b >> c >> d >> e;
	int s1 = a + b, s2 = a + c, s3 = a + d, s4 = a + e, s5 = b + c, s6 = b + d, s7 = b + e, s8 = c + d, s9 = c + e, s10 = d + e;
	int max = lonnhat(lonnhat(lonnhat(lonnhat(lonnhat(lonnhat(lonnhat(lonnhat(lonnhat(s1, s2), s3), s4), s5), s6), s7), s8), s9), s10);
	int min = nhonhat(nhonhat(nhonhat(nhonhat(nhonhat(nhonhat(nhonhat(nhonhat(nhonhat(s1, s2), s3), s4), s5), s6), s7), s8), s9), s10);
	
	cout << a + b + c + d + e - min - max;
	}
