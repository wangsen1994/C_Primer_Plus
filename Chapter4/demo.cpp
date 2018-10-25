#include<iostream>
#include<string>
#include<array>

namespace practice_1
{
	using std::cin;
	using std::cout;
	using std::endl;
	void func4_1()
	{
		char first_name[30];
		char last_name[30];
		char grade;
		int age;
		cout << "What is your first name? ";
		cin.getline(first_name, 30); //getline will drop out '\n'

		cout << "What is your last name? ";
		cin.getline(last_name, 128);

		cout << "What letter grade do you deserve? ";
		cin >> grade;

		cout << "What is your age? ";
		cin >> age;

		cout << "Name: " << last_name << ", " << first_name << endl;
		cout << "Grade: " << char(grade + 1) << endl;
		cout << "Age: " << age << endl;
	}
}
namespace practice_2
{
	using std::cin;
	using std::cout;
	using std::endl;
	using std::string;
	void func4_2()
	{
		string name;
		string dessert;

		cout << "Enter your name:\n";
		cin >> name;

		cout << "Enter your favourite dessert:\n";
		cin >> dessert;

		cout << "I have some delicious " << dessert;
		cout << " for you, " << name << endl;

	}
}
namespace practice_3
{
	using std::cin;
	using std::cout;
	using std::endl;
	void func4_3()
	{
		char first_name[30];
		char last_name[30];

		cout << "Enter your first name: ";
		cin.get(first_name,30);
		cin.get(); // drop '\n'

		cout << "Enter your last name: ";
		cin.get(last_name, 30);
		cin.get();

		cout << "Here's your infomation is a single string: " << last_name << ", " << first_name << endl;
	}

}
namespace practice_4
{
	using std::cin;
	using std::cout;
	using std::endl;
	using std::string;
	void func4_4()
	{
		string first_name;
		string last_name;

		cout << "Enter your first name: ";
		getline(cin,first_name);

		cout << "Enter your last name: ";
		getline(cin, last_name);

		cout << "Here's your infomation is a single string: " << last_name << ", " << first_name << endl;
	}

}
namespace practice_5
{
	using std::cout;
	using std::endl;
	using std::string;
	struct CandyBar
	{
		string label;
		double weight;
		int Calorie;
	};
	void func4_5()
	{
		CandyBar snack = { "Mocha Munch", 2.3, 350 };

		cout << "CandyBar snack: " << endl;
		cout << "label = " << snack.label << ", weight = " << snack.weight << ", Calorie = " << snack.Calorie <<endl;
	}

}
namespace practice_6
{
	using std::cout;
	using std::endl;
	using std::string;
	struct CandyBar
	{
		string label;
		double weight;
		int Calorie;
	};
	void func4_6()
	{
		CandyBar snack[3] = {
		{ "Mocha Munch", 2.3, 350 }, 
		{ "Dove", 2.3, 350 },
		{ "HuaWei", 2.3, 350 },
		};

		cout << "CandyBar snack: " << endl;
		for (int i = 0; i < 3; i++)
		{
			cout << "label = " << snack[i].label << ", weight = " << snack[i].weight << ", Calorie = " << snack[i].Calorie << endl;
		}
	}
}

namespace practice_7
{
	using std::cout;
	using std::endl;
	using std::string;
	using std::cin;
	struct Pizza
	{
		string name;
		double weight;
		double R;
	};
	void func4_7()
	{
		Pizza Dicos;

		cout << "Please Enter the company name: ";
		cin >> Dicos.name;
		cout << "and the pizza weight: ";
		cin >> Dicos.weight;
		cout << "and the pizza size: ";
		cin >> Dicos.R;
		cout << "The pizza company is " << Dicos.name << ", their pizza size is " << Dicos.R << ", and the weight is " << Dicos.weight << endl;

	}
}
namespace practice_8
{
	using std::cout;
	using std::endl;
	using std::string;
	using std::cin;
	struct Pizza
	{
		string name;
		double weight;
		double R;
	};
	void func4_8()
	{
		Pizza *Dicos = new Pizza;

		cout << "and the pizza size: ";
		cin >> Dicos->R;
		cout << "Please Enter the company name: ";
		cin >> Dicos->name;
		cout << "and the pizza weight: ";
		cin >> Dicos->weight;
		cout << "The pizza company is " << Dicos->name << ", their pizza size is " << Dicos->R << ", and the weight is " << Dicos->weight << endl;

	}
}
namespace practice_9
{
	using std::cout;
	using std::endl;
	using std::string;
	struct CandyBar
	{
		string label;
		double weight;
		int Calorie;
	};
	void func4_9()
	{
		CandyBar *snack = new CandyBar[3]{
		{ "Mocha Munch", 2.3, 350 },
		{ "Dove", 2.3, 350 },
		{ "HuaWei", 2.3, 350 },
		};

		cout << "CandyBar snack: " << endl;
		for (int i = 0; i < 3; i++)
		{
			cout << "label = " << snack[i].label << ", weight = " << snack[i].weight << ", Calorie = " << snack[i].Calorie << endl;
		}
	}
}
namespace practice_10
{
	using std::cout;
	using std::endl;
	using std::cin;
	using std::array;
	void func4_10()
	{
		array<double, 3> grade;
		double total = 0;

		printf("Enter three results time of runing 40 meters: ");
		for (int i = 0; (( (i < 3)&&cin >> grade[i]) ); i++)  // exchange the i<3 and cin >> grade[i] will be wrong
		{
			total += grade[i];
		}

		double avg_time = total / 3;
		cout << "Result: " << grade[0] << ", " << grade[1] << ", " << grade[2] << endl;
		cout << "Average result: " << avg_time;

	}
}


int main()
{
	using namespace practice_10;
	func4_10();
	std::cin.get();
	std::cin.get();
}