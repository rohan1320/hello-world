#include <iostream>
#include <vector>
using namespace std;

int main(){
	int i, j;
	int count = 1;
	cin >> i >> j;
	int n = 0;
	vector <int> vec;
	if(i > j){
		int temp = i; 
		i = j;
		j = temp;
	}
	for(int a=i; a<=j; a++){
		n = a;
		while(n != 1){
			if(n % 2 == 0){
				n = n / 2;
				count++;
			}
			else{
				n = (3 * n) + 1;
				count++;
			}
		}
		vec.push_back(count);
		count = 1;
	}
    
	int max = vec[0];
	for(int i=0; i<vec.size(); i++)
		if(vec[i] > max)
			max = vec[i];

	cout << i << " " << j << " " << max << endl;

	return 0;
}