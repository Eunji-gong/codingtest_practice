#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(string skill, vector<string> skill_trees) {
	int answer = 0;
	bool check = true;
	for (int i = 0; i < skill_trees.size(); i++) {
		int tmp = -1;
		for (int j = 0; j < skill_trees[i].size(); j++) {
			for (int k = 0; k < skill.size(); k++) {
				if (skill_trees[i][j] == skill[k]) {
					if (k == tmp + 1)
						tmp++;
					else
						check = false;
					break;
				}
			}
			if (check == false) {
				check = true;
				break;
			}
			if (tmp == skill.size() - 1 || j == skill_trees[i].size() - 1) {
				answer++;
				break;
			}
		}
	}
	return answer;
}

int main() {
	string skill = "CBD";
	vector<string>skill_trees = { "BACDE","CBADF","AECB","BDA" };
	cout << solution(skill, skill_trees) << endl;
	return 0;
}