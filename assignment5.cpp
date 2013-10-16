//Assignment 5
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

//problem 1
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
	int ret=0;
	if(start ==  vec.size()){
		return ret;
	}
	else{
		if(vec.at(start) == key){
			ret++;
		}
		ret += recursive_count(vec,key,start+1);
	}
	return ret;
}
//problem 2
//iterative solution
int iterative_kth_element(vector<int>& vec, size_t k){
	vector<int> temp(vec);	//copy of vec
	sort(temp.begin(),temp.end());	//sort temp
	return temp.at(k-1);
}
//recursive solution
int recursive_kth_element(vector<int>& vec, size_t k){
	int min=vec.at(k-1);
	if(k>0){
		

}
int main(){
	vector<int> vec;
	vec.push_back(1);
	vec.push_back(4);
	vec.push_back(3);
	vec.push_back(2);
	int ret=recursive_count(vec,2,0);
	int ret2=iterative_count(vec,2);
	int ret3=iterative_kth_element(vec,2);
	cout << ret << endl << ret2 << endl << ret3 << endl;
	return 0;
}
