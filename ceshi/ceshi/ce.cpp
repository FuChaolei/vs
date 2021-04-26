#include<iostream>
#include<vector>
#include<string>
using namespace std;
vector<int> diffWaysToCompute(string input)
{
	//input = "1 + 5";
	vector<int> ways;
	for (int i=0; i < input.length(); ++i)
	{
		char c = input[i];
		if (c == '+' || c == '-' || c == '*')
		{
			vector<int> left = diffWaysToCompute(input.substr(0, i));
			vector<int> right = diffWaysToCompute(input.substr(i + 1));
			for (int i : left)
			{
				for (int j : right)
				{
					//cout << i - '0' << end;
					//cout << j - '0' << endl;
					switch (c)
					{
					case '+':
						ways.push_back(i + j);
						break;
					case '-':
						ways.push_back(i - j);
						break;
						 case '*':
						     ways.push_back(i * j);
						     break;
					}
				}
			}
		}
	}
	if (ways.empty()) {
		//cout << "1" << endl;
		ways.push_back(stoi(input));
		for (int i = 0; i < ways.size(); i++)
			cout << "  " << ways[i];
		cout << endl;
	}
	
	 
	return ways;
	//cout << endl;
}
int main()
{
	vector<int> n=diffWaysToCompute("2*3");
	cout << "------------------------" << endl;
	for (int i = 0; i < n.size(); i++)
		cout << "  " << n[i]<<endl;
	system("pause");
	return 0;
}
