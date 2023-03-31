#include <assert.h>
#include <iostream>
#include <string.h>

#include "DoubleLinkedList.h"

using namespace std;

int main()
{
	string input;
	int num;

	while (true)
	{
		cin >> input;
		cout << '\n';


		if (input == "1") {
			cin >> num;

			Node* node = (Node*)malloc(sizeof(Node));

			assert(node == nullptr);

			node->data = num;
			Add(node);
			continue;
		}

		if (input == "2")
		{

		}
	}

	return 0;
}