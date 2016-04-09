#define _CRT_SECURE_NO_WARNINGS
#include <ios>
#include <iostream>
#include <algorithm>
#include <vector>
#include <stack>
#include <deque>
#include <queue>
#include <set>
#include <map>
#include <cmath>
#include <chrono>
#include <cstdlib>
#include <future>

using namespace std;

struct Input
{
	friend istream& operator >> (istream& lsh, Input& rhs)
	{
	}
};

struct Output
{
	friend ostream& operator << (ostream& lhs, const Output& rhs)
	{
	}
};

Output solve(Input input)
{
}

int main(void)
{
	ios_base::sync_with_stdio(false);
	int t;
	cin >> t;
	vector<future<Output>> tasks;
	while (t-- > 0)
	{
		Input input;
		cin >> input;
		tasks.push_back(std::async(solve, input));
	}
	for (auto& task : tasks)
	{
		cout << task.get() << endl;
	}
	return 0;
}