#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

int main()
{
	//int guest1;
	//int guest2;
	//int guest3;
	//int guest4;
	//int guest5;

	int guest;
	int chance = 8;

	srand(time(nullptr));

	int answer = rand() % 1000 + 1;

	cout << answer << endl;

	//cout << "guest a number between 1 and 100" << endl;

	while (chance > 0)
	{
		cout << "guest a number between 1 and 100" << endl;
		cin >> guest;

		if (guest == answer)
		{
			cout << "you win" << endl;
			system("pause");
			return 0;
		}
		if (guest != answer)
		{
			cout << "you guest wrong" << endl;
			chance--;
			cout << "you have " << chance << " chance left" << endl;
		}
	}
	
	cout << "gameover" << endl;
	system("pause");
	return 0;

	//cin >> guest1;

	//if (guest1 == answer)
	//{
	//	cout << "you guest it" << endl;
	//	system("pause");
	//	return 0;
	//}
	//if (guest1 != answer)
	//{
	//	cout << "you guest wrong" << endl;
	//	cout << "try to guest again, you have 4 tries left" << endl;
	//	cin >> guest2;
	//}


	//if (guest2 == answer)
	//{
	//	cout << "you guest it" << endl;
	//	system("pause");
	//	return 0;
	//}
	//if (guest2 != answer)
	//{
	//	cout << "you guest wrong" << endl;
	//	cout << "try to guest again, you have 3 tries left" << endl;
	//	cin >> guest3;
	//}


	//if (guest3 == answer)
	//{
	//	cout << "you guest it" << endl;
	//	system("pause");
	//	return 0;
	//}
	//if (guest3 != answer)
	//{
	//	cout << "you guest wrong" << endl;
	//	cout << "try to guest again, you have 2 tries left" << endl;
	//	cin >> guest4;
	//}	
	//

	//if (guest4 == answer)
	//{
	//	cout << "you guest it" << endl;
	//	system("pause");
	//	return 0;
	//}
	//if (guest4 != answer)
	//{
	//	cout << "you guest wrong" << endl;
	//	cout << "try to guest again, you have 1 tries left" << endl;
	//	cin >> guest5;
	//}


	//if (guest5 == answer)
	//{
	//	cout << "you guest it" << endl;
	//	system("pause");
	//	return 0;
	//}
	//if (guest5 != answer)
	//{
	//	cout << "you guest wrong" << endl;
	//	cout << "gameover" << endl;
	//	system("pause");
	//	return 0;
	//}
}