#include <iostream>
#include <vector>

using namespace std;

int main(){
	int n; 
	cin >> n;
	double ele;
	vector <double> vec;
	for(int i=0; i<n; i++){
		cin >> ele;
		vec.push_back(ele);
	}
	int sum = 0;
	for(int i=0; i<vec.size(); i++){
		sum = sum + vec[i];
	}
	double avg = sum / n;
	double exp = 0;
	for(int i=0; i<vec.size(); i++)
		if(avg > vec[i])
			exp = exp + (avg - vec[i]);

    cout << "$" << exp << endl;
}