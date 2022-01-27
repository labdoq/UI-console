#include <iostream>
#include <vector>
#include <string>
#include <conio.h>

using namespace std;

void dosomething(){
	cout << "\n\nDoing something\n\n";
}
int main()
{
	int counter = 1, chosen_option = counter;
	
	vector<string> options;
		
	options.push_back("Something");
	options.push_back("Something more");
	options.push_back("Exit");
	
	while (chosen_option != 3)
	{
		system("cls");
		
		for (size_t i = 0; i < options.size(); ++i)
		{
			if ((i + 1) == counter) cout << "> " << options[i] << endl;
			else					cout << options[i] << endl;
		}
		
		
		
		char pressed = _getch();
	
		if (pressed == 119 && counter != 1) counter--;
		if (pressed == 115 && counter != options.size()) counter++;
	
		if (pressed == '\r' || pressed == '\n'){
			chosen_option = counter;
			system("cls");
		
			switch(chosen_option)
			{
				case 1: dosomething(); break;
				case 2: dosomething(); break;
				case 3: return 0;			}
		
				_getch();
			}
	

	}

	_getch();
}
