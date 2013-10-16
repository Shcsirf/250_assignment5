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
	int min=0;
	for(int i=0; i<vec.size();i++){
		if(vec.at(i)<vec.at(min)){
			min = i;
		}
	}
	if(k==1){
		return vec.at(min);
	}
	vec.erase(vec.begin()+min);
	recursive_kth_element(vec,k-1);
}
//problem 3
int make_change(int n){
	//pennies 1
	//nickels 5
	//dimes 10
	//quaters 25
	//dollar 100
	//five 500
	//ten 1000
	//twenty 2000
	//hundred 10000
}
int main(){
	vector<int> vec;
	vec.push_back(1);
	vec.push_back(4);
	vec.push_back(3);
	vec.push_back(2);
	vec.push_back(9);
	vec.push_back(8);
	vec.push_back(15);
	vec.push_back(5);
	int ret=recursive_count(vec,2,0);
	int ret2=iterative_count(vec,2);
	int ret3=iterative_kth_element(vec,4);
	int ret4=recursive_kth_element(vec,4);
	cout << ret3 << endl << ret4 << endl;
	return 0;
}
