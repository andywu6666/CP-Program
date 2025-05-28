#include <iostream>
#include <vector>

using namespace std;

vector<int> sent;
vector<bool> sum, check;
int times = 0;

void dfs(int num)
{
	times++;

	check[num] = true;
	sum[num] = check[num];
	int nextMan = sent[num];

	if (!check[nextMan])
	{
		dfs(nextMan);
	}
}

int main()
{
	int T = 0;
	cin >> T;

	for (int g = 1; g <= T; g++)
	{
		int N;
		cin >> N;
		sum.assign(N + 1, false);
		sent.assign(N + 1, -1);

		for (int h = 0; h < N; h++)
		{
			int u, v;
			cin >> u >> v;
			sent[u] = v;
		}

		int ftimes = 0, fnum = sent[0];

		for (int j = 1; j <= N; j++)
		{
			if (!sum[j])
			{
				check.assign(N + 1, false);
				check[j] = true;
				times = 0;

				dfs(sent[j]);

				if (times > ftimes)
				{
					ftimes = times;
					fnum = j;
				}
				else if (times == ftimes)
					if (j < fnum)
						fnum = j;
			}
		}

		cout << "Case " << g << ": " << fnum << endl;
	}

	return 0;
}