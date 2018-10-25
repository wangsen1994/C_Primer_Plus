#include<iostream>

namespace practice_1
{
	using std::cout;
	using std::cin;
	using std::endl;

	const int Foot2Inch = 12;
	void func3_1(void)
	{
		int input, output, foot;
		cout << "Please input your height in inch:___\b\b\b";
		cin >> input;
		foot = input / Foot2Inch;
		output = input % Foot2Inch;
		cout << "your height in inch is" << input << ", and it's " << foot << " foot" << output << "inch" << endl;
	}
}
namespace practice_2
{
	using std::cout;
	using std::cin;
	using std::endl;

	const int Foot2Inch = 12;
	const double Inch2m = 0.0254;
	const double kilo2Pound = 2.2;
	void func3_2(void)
	{
		double foot, inch, pound;
		cout << "Please input your height:" << endl;
		cout << "Please enter the foot: ";
		cin >> foot;
		cout << "Please enter the inch: ";
		cin >> inch;
		cout << "Please input your weight in pound : ";
		cin >> pound;
		double meter = (foot*Foot2Inch + inch)*Inch2m;
		double kil = pound / kilo2Pound;
		double BMI = kil / pow(meter, 2);
		cout << "your BMI is " << BMI << endl;
	}
}
namespace practice_3
{
	using std::cout;
	using std::cin;
	using std::endl;

	const double de2min = 60;
	const double min2se = 60;
	void func3_3(void)
	{
		double degrees, minutes, seconds;
		cout << "Enter a latitude in degrees, minute and seconds:" << endl;
		cout << "First, enter the degrees: ";
		cin >> degrees;
		cout << "Next, enter the minucts of arc: ";
		cin >> minutes;
		cout << "Finally, enter the seconds of arc: ";
		cin >> seconds;
		double total = (seconds / min2se + minutes) / de2min + degrees;
		cout << degrees << " degrees, " << minutes << " minutes, " << seconds << " seconds = " << total << " degrees." << endl;
	}
}
namespace practice_4
{
	using std::cout;
	using std::cin;
	using std::endl;

	const int change = 60;
	const int h2day = 24;
	void func3_4(void)
	{
		int day, hour, minute, second;
		long input;
		cout << "Enter the number of seconds: ";
		cin >> input;
		second = input % change;
		minute = input / change;
		hour = minute / change;
		day = hour / h2day;
		cout << input << " seconds = " << day << " days, "
			<< hour % change << " hours, " << minute % change << " minutes, " << second << " seconds" << endl;
	}
}
namespace practice_5
{
	using std::cout;
	using std::cin;
	using std::endl;

	void func3_5(void)
	{
		long long total_population, usa;
		cout << "Enter the world's population :";
		cin >> total_population;

		cout << "Enter the population of the US: ";
		cin >> usa;
		double rate = double(usa) / total_population;
		cout << "The population of the US is " << rate * 100 << "% of the world population." << endl;
	}
}
namespace practice_6
{
	using std::cout;
	using std::cin;
	using std::endl;

	void func3_6(void)
	{
		double mile, gallon, rate;
		cout << "Enter the distance in mile you drive: ";
		cin >> mile;
		cout << "Enter the comsumption of oil: ";
		cin >> gallon;
		rate = mile / gallon;
		cout << "Average fuel comsuption: " << rate << " mile/gallon" << endl;
	}
}
namespace practice_7
{
	using std::cout;
	using std::cin;
	using std::endl;

	void func3_7(void)
	{
		double eu_style, usa_style;
		cout << "Enter the fuel comsuption in Europ standard: ";
		cin >> eu_style;
		usa_style = eu_style / 19 * 12.41;
		cout << "the fuel comsuption in US standard is " << usa_style << "/100KM" << endl;
	}
}
int main()
{
	using namespace practice_7;
	func3_7();
	std::cin.get();
	std::cin.get();
}