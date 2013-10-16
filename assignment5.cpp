//Assignment 5.1
#include <iostream>
#include <vector>

using namespace std;

//iterative solution
int iterative_count(const vector<int>& vec, int key){
	int ret=0;
	for(int i=0; i < vec.size(); i++){
		if(vec.at(i) == key){
			ret++;
		}
	}
	return ret;
}
//recursive solution
int recursive_count(const vector<int>& vec, int key, size_t start){
	if(start ==  vec.size()){
		return ret;
	}
	else{
		if(vec.at(start) == key){
			ret++;
		}
		recursive_count(vec,key,start+1);
	}
}
int main(){
	vector<int> vec;
	vec.push_back(1);
	vec.push_back(2);
	vec.push_back(3);
	vec.push_back(2);
	int ret=recursive_count(vec,3,0);
	cout << ret << endl;
	return 0;
}
