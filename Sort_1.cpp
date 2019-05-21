/** 
*Description: [ Kth number ] - https://programmers.co.kr/learn/courses/30/lessons/42748
*Author : drxpsi
*Last Modified on: 2019.05.21
**/

#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {

	vector<int>answer;
	vector<int>temp;


	for (int i = 0; i <commands.size(); i++) {

		temp.clear();	//clear the vector for the next command

		for (int j = commands.at(i).at(0) - 1; j <= commands.at(i).at(1)-1; j++) {   //complete the temp vector
			temp.push_back(array[j]);
		}
		sort(temp.begin(), temp.end());

		answer.push_back(temp.at(commands.at(i).at(2)-1));

	}
	return answer;
}

int main() {

	vector<int> v = {1, 5, 2, 6, 3, 7, 4};
	vector<vector<int>> k = { {2, 5, 3} ,{4, 4, 1},{1, 7, 3} };
	vector<int>ans = solution(v, k);
	for (unsigned int i = 0; i < ans.size(); i++) {
		cout << ans[i] << " ";
	}

}