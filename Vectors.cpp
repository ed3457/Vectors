// Vectors.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
using namespace std;


void print(vector<int> vec1)
{
	for (int i = 0;i < vec1.size();i++)
	{
		cout << vec1[i] << endl;

	}

}

int main()
{
	vector<int> vec1;

	vec1.push_back(4);
	vec1.push_back(5);
	vec1.push_back(6);
	vec1.push_back(7);

	//print(vec1);

	//vec1.clear();
	//print(vec1);

	//cout << vec1.back() << endl;

	//vec1.pop_back();
	vec1.erase(vec1.begin(),vec1.begin()+2);
	print(vec1);

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
