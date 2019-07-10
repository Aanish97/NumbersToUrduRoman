#include<iostream>
#include<string>
using namespace std;

string getUrduPhrase(int num, string *arr)
{
	string str;

	if (num == 0)
	{
		return arr[0];
	}
	if (num > 999)
	{
		int xThousand = num / 1000;
		str = arr[xThousand] + " hazaar";
		num = num - (xThousand * 1000);
	}
	if (num > 99)
	{
		int xHundred = num / 100;
		str = str + " " + arr[xHundred] + " so";
		num = num - (xHundred * 100);
	}
	if (num != 0)
	{
		str = str + " " + arr[num];
	}
	
	return str;
}

void main()
{	
	string arr[100] = 
	{
		"sifr", "aik", "do", "teen", "chaar", "paanch",
		"chay", "saat", "aath", "nau", "das",

		"giarah", "barah", "terah", "chaudah", "pandrah",
		"solah", "satarah", "atharah", "unees", "bees",

		"ikkees", "baees", "taees", "chaubees", "pachees",
		"chabees", "staees", "athaees", "untees", "tees",

		"iktees", "batees", "tantees", "chauntees", "pantees",
		"chatees", "santees", "arthees", "untaalees", "chalis",

		"iktalis", "bialis", "tantalis", "chavalis", "pantalis",
		"chiyalis", "santalis",	 "artalis", "unchaas",	 "pachas",

		"ikyavan", "bavan", "taripan", "chawwan", "pachpan",
		"chappan", "stavan", "athavan", "unsath", "saath",

		"iksath", "basath", "traisath", "chaunsath", "painsath",
		"chiyasath", "sarsath", "arsath", "unhattar", "sattar",

		"ikyavan", "bavan", "taripan", "chawwan", "pachpan",
		"chappan", "stavan", "athavan", "unsath", "saath",

		"ikaasi", "byasi", "tirasi", "chaurasi", "pachasi",
		"chiaasi", "sathasi", "athasi", "navasi", "naway",

		"ikanvey", "banvey", "tiranvey", "chauranvey", "pachanvey",
		"chiyanvey", "sataanvay", "ninnanvey", "ninanvey" };
	
	while (1)
	{
		cout << "Please enter your number = ";
		int num;
		cin >> num;

		string ans = "";
		if (num > 9999 || num < 0)
		{
			cout << "Invalid Input";
		}
		else
		{
			ans = getUrduPhrase(num, arr);
		}
		cout << ans << endl;
	}

	system("pause");
}