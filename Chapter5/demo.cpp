#include<iostream>
#include<string>
#include<array>
namespace practice_1
{
	using std::cout;
	using std::cin;
	using std::endl;

	void func5_1(void)
	{
		int first, second;
		cout << "Please input two number" << endl;
		cout << "first one :";
		cin >> first;
		cout << "second one :";
		cin >> second;
		int total = (first + second)*(second - first + 1) / 2;
		cout << "The number " << first << "to" << second << ", sum = " << total << endl;
	}
}
namespace practice_2
{
	using std::cout;
	using std::endl;
	using std::array;
	void func5_2(void)
	{
		array<long double, 101>factorials;
		factorials[0] = 1.0, factorials[1] = 1.0;
		for (int i = 2; i < 101; i++)
		{
			factorials[i] = i * factorials[i - 1];
		}
		for (int i = 0; i < 101; i++)
		{
			cout << i << "!=" << factorials[i] << endl;
		}
	}
}
namespace practice_3
{
	using std::cout;
	using std::endl;
	using std::cin;
	void func5_3(void)
	{
		int ch;
		int total = 0;
		cout << "please a data and 0 indicate the end :";
		cin >> ch;
		total += ch;
		if (ch == 0)
			cout << "now the end and the total number is " << total << endl;
		else
		{
			while (ch!=0)
			{
				cout << "now the total number is " << total << endl;
				cout << "please a data and 0 indicate the end :";
				cin >> ch;
				total += ch;
			}
		}
		cout << "now the end and the total number is " << total << endl;

	}
}
namespace practice_4
{
	using std::cout;
	using std::endl;
	void func5_4(void)
	{
		double Daphne_counts = 100;
		double Clea_counts = 100;
		int i = 0;
		while (Clea_counts <= Daphne_counts)
		{
			i++;
			Daphne_counts += 10;
			Clea_counts += Clea_counts * (0.05);
		}
		cout << "aftre " << i << " years,Clea'counts is more than Daphne's";
	}
}
namespace practice_5
{
	using std::cout;
	using std::endl;
	using std::string;
	using std::array;
	using std::cin;
	void func5_5(void)
	{
		string months[12] = { "Jan","Feb","Mar","Apr","May","June","July","Aug","Sep","Oct","Nov","Dec" };
		array<int, 12> sale;
		int total_sale = 0;
		cout << "Enter the sales of book <C++ for Fools> each month: " << endl;
		for (int i = 0; i < 12; i++)
		{
			cout << months[i] << ": ";
			cin >> sale[i];
			total_sale += sale[i];
		}
		cout << "The total sales is " << total_sale << endl;
		for (int i = 0; i < 12; i++)
		{
			cout << months[i] << ": " << sale[i] << endl;
		}

	}
}
namespace practice_6
{
	using std::cout;
	using std::endl;
	using std::string;
	using std::cin;
	void func5_6(void)
	{
		string months[12] = { "Jan","Feb","Mar","Apr","May","June","July","Aug","Sep","Oct","Nov","Dec" };
		int sale[3][12];
		int total_sale = 0;
		cout << "Enter the sales of book <C++ for Fools> each month: " << endl;
		int sale_per_year[3] = { 0 };
		for (int j = 0; j < 3; j++)
		{
			cout << "year" << j + 1 << " : " << endl;
			for (int i = 0; i < 12; i++)
			{
				cout << months[i] << " : ";
				cin >> sale[j][i];
				sale_per_year[j] += sale[j][i];
				total_sale += sale[j][i];
			}
		}
		cout << "The total sales is " << total_sale << endl;
		for (int i = 0; i < 3; i++)
		{
			cout << "year" << i + 1 << " : " << sale_per_year[i] <<endl;
		}

	}
}
namespace practice_7
{
	using std::cout;
	using std::endl;
	using std::string;
	using std::cin;
	struct car
	{
		string maker;
		int made_year;
	};
	void func5_7(void)
	{
		int size;
		cout << "How many cars do you wish to catalog?";
		cin >> size; //left a '/n' in cache
		char ch1, ch2;
		cin.get();
		car *data = new car[size];
		for (int i = 0; i < size; i++)
		{
			cout << "Car #" << i + 1 << ":" << endl;
			cout << "Please enter the make: ";
			getline(cin, data[i].maker);

			cout << "Please enter the year make: ";
			cin >> data[i].made_year;
			cin.get();
	
		}
		cout << "Here is your collection:" << endl;
		for (int i = 0; i < size; i++)
		{
			cout << data[i].made_year << " " << data[i].maker << endl;
		}
	}
}
namespace practice_8
{
	using std::cout;
	using std::endl;
	using std::cin;
	void func5_8(void)
	{
		char data[50];
		int word = 0;
		cout << "Enter words (to stop, type the word done):" << endl;
		while (cin>>data&&strcmp(data,"done"))
		{
			word++;
		}
		cin.get();
		cout << "You entered a total of " << word << " words." << endl;
	}
}
namespace practice_9
{
	using std::cout;
	using std::endl;
	using std::cin;
	using std::string;
	void func5_9(void)
	{
		string data;
		int word = 0;
		cout << "Enter words (to stop, type the word done):" << endl;
		while (cin >> data && data!="done")
		{
			word++;
		}
		cin.get();
		cout << "You entered a total of " << word << " words." << endl;
	}
}
namespace practice_10
{
	using std::cout;
	using std::endl;
	using std::cin;
	using std::string;
	void func5_10(void)
	{
		string data;
		int row;
		cout << "Enter number of rows: ";
		cin >> row;
		for (int i = 0; i < row; i++)
		{
			for (int j = 0; j < row - i - 1; j++)
				cout << '.';
			for (int k = 0; k < i+1; k++)
				cout << '*';
			cout << endl;
		}
	}
}
int main()
{
	using namespace practice_10;
	func5_10();
	std::cin.get();
	std::cin.get();
}
