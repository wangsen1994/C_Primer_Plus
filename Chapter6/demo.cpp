#include<iostream>
#include<string>
#include<cctype>
#include<array>

namespace practice_1
{
	using std::cout;
	using std::cin;
	using std::endl;
	using std::string;

	void func6_1(void)
	{
		char ch;
		string data;
		cout << "please enter data : " << endl;
		while ((ch=cin.get())!='@')
		{
			if (islower(ch))
			{
				ch = toupper(ch);
				data += ch;
			}
			else if (isupper(ch))
			{
				ch = tolower(ch);
				data += ch;
			}
		}
		cout << "result : " << data << endl;
	}
}
namespace practice_2
{
	using std::cout;
	using std::cin;
	using std::endl;
	using std::array;

	void func6_2(void)
	{
		array<double, 10 > data = { 0 };
		cout << "please enter data, not more than ten doubel value : " << endl;
		double total = 0;
		int i, flag = 0;
		for (i = 0; (i < 10 && cin >> data[i]); i++)
		{
			total += data[i];
		}
		double avg = total / i;
		for (int j = 0; j < i; j++)
		{
			if (data[j] > avg)
			{
				flag++;
			}
		}
		cout << "the average of the data is : " << avg << endl;
		cout << flag << " numbers are more than the avg. "<< endl;
	}
}

namespace practice_3
{
	
	using std::cout;
	using std::cin;
	using std::endl;

	void func6_3(void)
	{
		char ch;
		cout << "Please enter one of the following choices: " << endl;
		cout.flags(std::ios::left);
		cout.width(16);
		cout << "c) carnivore";
		cout.width(16);
		cout << "p) pianist" << endl;
		cout.width(16);
		cout << "t) tree";
		cout.width(16);
		cout << "g) game" << endl;
		bool flag = true;

		while (cin>>ch&&flag)
		{
			switch (ch)
			{
			case 'c':
				cout << "c: always lakers is the championship" << endl;
				flag = false;
				break;
			case 'p':
				cout << "p: always lakers is the championship" << endl;
				flag = false;
				break;
			case 't':
				cout << "t: always lakers is the championship" << endl;
				flag = false;
				break;
			case 'g':
				cout << "g: always lakers is the championship" << endl;
				flag = false;
				break;
			default:
				cout << "plase try agagin" << endl;
				break;
			}
		}

	}
}
#include<iomanip>
namespace practice_4
{
	using std::cout;
	using std::cin;
	using std::endl;
	using std::setw;
	const int strsize = 50;
	struct bop
	{
		char fullname[strsize];
		char title[strsize];
		char bopname[strsize];
		int perference;
	};

	void func6_4(void)
	{
		
		cout << "Benevolent Order of Proframers Report" << endl;
		cout.flags(std::ios::left);;
		cout << setw(30) << "a. display by name" << "b. display by title" << endl;
		cout << setw(30) << "c. display by bopname" << "d. display by preference" << endl;
		cout << setw(30) << "q. quit" << endl;
		cout << "Please enter one of the following choices: " << endl;
		char ch;
		bool flag = true;
		bop data[5] = {
			{"xiaoming","MAP","joke",1},
		    {"xiaohong","MOP","rose",2},
			{"xiaozhang","MDP","flower",1},
			{"xiaoliang","MIP","dog",2},
			{"xiaoer","MYP","cat",3}
		};
		while (flag&&cin>>ch)
		{
			switch (ch)
			{
			case 'a':
				for (int i = 0; i < 5; i++)
					cout << data[i].fullname << endl;
				break;
			case 'b':
				for (int i = 0; i < 5; i++)
					cout << data[i].title << endl;
				break;
			case 'c':
				for (int i = 0; i < 5; i++)
					cout << data[i].bopname<< endl;
				break;
			case 'd':
				for (int i = 0; i < 5; i++)
				{
					switch (data[i].perference)
					{
					case 1:
						cout << data[i].fullname << endl;
						break;
					case 2:
						cout << data[i].title << endl;
						break;
					case 3:
						cout << data[i].bopname << endl;
						break;
					default:
						break;
					}
				}
				break;
			case 'q':
				flag = fabsl;
				break;
			default:
				cout << "try again :";
				break;
			}
		}

	}
}
namespace practice_5
{
	using std::cout;
	using std::cin;
	using std::endl;

	void func6_5(void)
	{
		cout << "please enter your income: ";
		double income, tax;
		while (cin>>income&&income>0)
		{
			if (income < 5001)
				cout << "pay no tax" << endl;
			if (income > 5000 && income < 15001)
			{
				tax = income * 0.1;
				cout << "pay " << tax << " tvarp" << endl;
			}
			if (income > 15000 && income < 35001)
			{
				tax = income * 0.15;
				cout << "pay " << tax << " tvarp" << endl;
			}
			if (income > 35000)
			{
				tax = income * 0.2;
				cout << "pay " << tax << " tvarp" << endl;
			}
			cout << "next onne,enter your income: ";
		}
		
	}
}
#include<iomanip>
#include<cctype>
namespace practice_6
{
	using std::cout;
	using std::cin;
	using std::endl;
	using std::string;
	using std::setw;
	struct donater
	{
		string name;
		double number;
	};
	void func6_6(void)
	{
		int donaters;
		cout << "Enter the number of contributors: ";
		cin >> donaters;
		cin.get();
		donater *data = new donater[donaters];
		for (int i = 0; i < donaters; i++)
		{
			cout << "Enter the " << i + 1 <<"th donater's name: ";
			getline(cin, data[i].name);

			cout << "and his/her donation: ";
			cin >> data[i].number;
			cin.get();
		}
		int tmp = 0;
		cout << "Grand Pators:" << endl;
		cout << setw(10) << "name" << setw(10) << "amount" << endl;
		for (int i = 0; i < donaters; i++)
		{
			if (data[i].number > 10000)
			{
				cout << setw(10) << data[i].name << setw(10) << data[i].number << endl;
				tmp++;
			}
		}
		if (tmp == 0)
			cout << setw(10) << "None" << endl;

		tmp = 0;
		cout << "Pators:" << endl;
		cout << setw(10) << "name" << setw(10) << "amount" << endl;
		for (int i = 0; i < donaters; i++)
		{
			if (data[i].number <= 10000)
			{
				cout << setw(10) << data[i].name << setw(10) << data[i].number << endl;
				tmp++;
			}
		}
		if (tmp == 0)
			cout << setw(10) << "None" << endl;
		
	}
}
namespace practice_7
{
	using std::cout;
	using std::cin;
	using std::endl;
	using std::string;

	void func6_7(void)
	{
		int type1 = 0, type2 = 0, type3 = 0;
		string data;
		cout << "Enter words (q to quit): " << endl;
		while (cin>>data)
		{
			if (data == string("q"))
				break;
			if (isalpha(data[0]))
			{
				
				if (data[0] == 'a' || data[0] == 'e' || data[0] == 'i' || data[0] == 'o' || data[0] == 'u')
					type1++;
				else if (data[0] == 'A' || data[0] == 'E' || data[0] == 'I' || data[0] == 'O' || data[0] == 'U')
					     type1++;
				else
					type2++;

			}
			else
				type3++;
		}

		cout << type1 << " words beginning with vowels" << endl;
		cout << type2 << " words beginning with consonants" << endl;
		cout << type3 << " otners" << endl;

		return;
	}
}
#include<fstream>
namespace practice_8
{
	using std::cout;
	using std::endl;
	using std::cin;
	using std::string;
	using std::ifstream;

	void func6_8(void)
	{
		string filename;
		ifstream file;
		int num = 0;
		char ch = 0;

		cout << "Enter the file name:";
		getline(cin, filename);

		file.open(filename.c_str());

		while ((ch = file.get()) != EOF)
		{
			num++;
		}

		cout << "There are " << num << " characters in " << filename << " file." << endl;
	}
}
namespace practice_9
{
	using std::cout;
	using std::cin;
	using std::endl;
	using std::string;
	using std::setw;
	using std::ifstream;
	struct donater
	{
		string name;
		double number;
	};
	void func6_9(void)
	{
		string filename;
		cout << "Enter the file name:";
		getline(cin, filename);
		ifstream file;
		file.open(filename.c_str());

		int donaters;
		file >> donaters;
		file.get();
		donater *data = new donater[donaters];
		for (int i = 0; i < donaters; i++)
		{
			getline(file, data[i].name);

			file >> data[i].number;
			file.get();
		}
		int tmp = 0;
		cout.flags(std::ios::left);
		cout << "Grand Pators:" << endl;
		cout << setw(25) << "name" << setw(25) << "amount" << endl;
		for (int i = 0; i < donaters; i++)
		{
			if (data[i].number > 10000)
			{
				cout << setw(25) << data[i].name << setw(25) << data[i].number << endl;
				tmp++;
			}
		}
		if (tmp == 0)
			cout << setw(25) << "None" << endl;
		cout << endl;
		tmp = 0;
		cout << "Pators:" << endl;
		cout << setw(25) << "name" << setw(25) << "amount" << endl;
		for (int i = 0; i < donaters; i++)
		{
			if (data[i].number <= 10000)
			{
				cout << setw(25) << data[i].name << setw(25) << data[i].number << endl;
				tmp++;
			}
		}
		if (tmp == 0)
			cout << setw(25) << "None" << endl;

	}
}
int main()
{
	using namespace practice_9;
	func6_9();
	while (cin.get());
	return 0;
}