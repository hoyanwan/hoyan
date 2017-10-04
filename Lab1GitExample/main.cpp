#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

int main()
{
	int guest;
	int chance = 8;

	srand(time(nullptr));

	//set the answer between 1 to 1000
	int answer = rand() % 1000 + 1;

	cout << answer << endl;

	//while we still have chance
	while (chance > 0)
	{
		//we are allow to guest
		cout << "guest a number between 1 and 100" << endl;
		cin >> guest;

		//if we guest it right
		if (guest == answer)
		{
			//we win
			cout << "you win" << endl;
			system("pause");
			return 0;
		}

		//if not
		if (guest != answer)
		{
			//we go to guest again
			cout << "you guest wrong" << endl;
			chance--;
			cout << "you have " << chance << " chance left" << endl;
		}
	}
	
	//if we don't have chance anymore, it is gameover
	cout << "gameover" << endl;
	system("pause");
	return 0;
}