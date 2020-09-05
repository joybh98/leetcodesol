#include <iostream>
using namespace std;

int main() {
	char string[] = {'A','B','A','B','A','B','A','B'};
	int size = sizeof(string)/sizeof(string[0]);
	int count;
	for (int i = 0; i < size; ++i)
	{
		if (string[i]==string[i+1])
		{
			/* code */
			//cout << i << endl;
			count++;
			//remove(begin(string), end(string),string[i]);
		}
	}

	cout << count << endl;
}