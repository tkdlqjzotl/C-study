#include <stdio.h>
#include <string>
#include <iostream>
using namespace std;

int main()
{
	string s ;

	std::cin >> s;
	/*
	if (s.length() < 2 || s.length() > 15)
	{
		return 0;
	}
	for (int i = 0; i < s.length(); i++)
	{
		if (int(s[i]) < 65 || int(s[i])>92)
		{
			return 0;
		}
	}*/
	int min_time=0;
	
	for (int i = 0; i < s.length(); i++)
	{
		//printf("%c %d\n",s[i], s[i]);
		switch (int(s[i]))
		{
		case 65:
		case 66:
		case 67:
			min_time += 3;
			break;
		case 68:
		case 69:
		case 70:
			min_time += 4;
			break;
		case 71:
		case 72:
		case 73:
			min_time += 5;
			break;
		case 74:
		case 75:
		case 76:
			min_time += 6;
			break;
		case 77:
		case 78:
		case 79:
			min_time += 7;
			break;
		case 80:
		case 81:
		case 82:
			min_time += 8;
			break;
		case 83:
		case 84:
		case 85:
			min_time += 9;
			break;
		case 86:
		case 87:
		case 88:
			min_time += 10;
			break;
		case 89:
		case 90:
		case 91:
		case 92:
			min_time += 11;
			break;
		}
	}

	//printf("%d\n", min_time);
	std::cout << min_time;

}