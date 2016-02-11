#pragma hdrstop
#pragma argsused

#ifdef _WIN32
#include <tchar.h>
#else
  typedef char _TCHAR;
  #define _tmain main
#endif

#include <stdio.h>
#include <iostream.h>
#include <conio.h>
#include <vector>
#include <iterator>
#include <algorithm>  // reverse()

using namespace std;

int main()
{
	vector<int> mainArr(9);
	for (int i = 0; i < mainArr.size(); i++) mainArr[i] = i;

	vector<int> MixedArr = mainArr;
	cout << "Original - ";
	copy(mainArr.begin(), mainArr.end(), ostream_iterator<int>(cout," "));

	for (int i = 1; i < mainArr.size(); i++)
	{
		reverse(MixedArr.begin() + i, MixedArr.end());
	}

	cout << "\n" << "Mixed - ";
	copy(MixedArr.begin(), MixedArr.end(), ostream_iterator<int>(cout," "));

	getch();
	return 0;
}
