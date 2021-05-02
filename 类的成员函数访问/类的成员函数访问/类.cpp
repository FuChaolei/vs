#include<iostream>
#include<vector>
using namespace std;
class NumMatrix
{
public:
	NumMatrix() {}
	NumMatrix(vector<vector<int>> &matrix)
	{
		int count = matrix.size();
		int count1 = matrix[0].size();
		for (int i = 0; i < count; i++)
		{
			for (int j = 0; i < count1; j++)
			{
				a[i].emplace_back(matrix[i][j]);
			}
		}
	}

	int sumRegion(int row1, int col1, int row2, int col2)
	{
		//vector<vector<int>> k;
		int s = 0;
		for (int i = row1; i <= row2; i++)
		{
			for (int j = col1; i <= col2; j++)
			{
				s += a[i][j];
			}
		}
		return s;
	}
	vector<vector<int>> a;
};
int main()
{
	vector<vector<int>> matrix = { {3, 0, 1, 4, 2},{5, 6, 3, 2, 1},{1, 2, 0, 1, 5},{4, 1, 0, 1, 7},{1, 0, 3, 0, 5} };
	NumMatrix *sm=new NumMatrix();
	//sm.sumRegion(2, 1, 4, 3);
	int t = sm->sumRegion(2, 1, 4, 3);
	cout << t;
	return 0;
}
