#include <iostream>
using namespace std;


int main()
{
	int N;
	double *x, *y, *r;

	cout << "Enter amount of elements (N) = ";
	cin >> N;

	x = new double[N];
	y = new double[N];
	r = new double[N];

	cout << "Enter x, y and r parameters: " << endl;
	for (int i = 0; i < N; i++)
	{
		cout << i + 1 << "):" << endl;
		cout << " x = ";
		cin >> x[i];
		cout << " y = ";
		cin >> y[i];
		cout << " r = ";
		cin >> r[i];
	}
	bool isExists = true;
	for (int i = 0; i < N - 1 && isExists; i++)
	{
		for (int j = i + 1; j < N && isExists; j++)
		{
			if (r[i] + r[j] < sqrt((x[j] - x[i]) * (x[j] - x[i]) + (y[j] - y[i]) * (y[j] - y[i])))
			{
				isExists = false;
			}
		}
	}
	if (isExists)
	{
		cout << "Point exists";
	}
	else
	{
		cout << "Point does not exist";
	}
	return 0;
}
