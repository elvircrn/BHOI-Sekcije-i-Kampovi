#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>

using namespace std;

deque <int> elements;

int main()
{
	elements.push_back(1);
	elements.push_back(2);
	elements.push_back(3);
	elements.push_back(4);

	for (int i = 0; i < elements.size(); i++)
		cout << elements [i] << " ";

	cout << endl;

	elements.push_front(-123);
	elements.push_front(-123);
	

	for (int i = 0; i < elements.size(); i++)
		cout << elements [i] << " ";

	cout << endl;

	return 0;
}
