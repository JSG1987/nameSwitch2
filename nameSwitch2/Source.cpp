
#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include <cctype>

using namespace std;

ifstream infile;
ofstream outfile;


int main()
{
	//Open files
	infile.open("namesLast.txt");
	outfile.open("Report.txt");


	//Validate files opening properly 
	if (!infile)
	{
		cout << "File did not open correctly\n";
	}



	//Declare v
	string input;

	while (infile)
	{
		//Declare variables 
		string name1;
		string name2;
		string name3;
		string name4;
		string lastname;
		string surname;


		infile >> name1 >> name2 >> name3 >> name4;

		//When reading in names, change name 1, 2, 3, and 4 to uppercase
		name1[0] = toupper(name1[0]);
		name2[0] = toupper(name2[0]);
		name3[0] = toupper(name3[0]);
		name4[0] = toupper(name4[0]);


		//If statements for arranging names 

		if (name1 == "Lastname" || name1 == "Surname")
		{
			outfile << name2 << ", " << name3 << " " << name4 << endl;
		}

		if (name2 == "Lastname" || name2 == "Surname")
		{
			outfile << name3 << ", " << name4 << " " << name1 << endl;

		}

		if (name3 == "Lastname" || name3 == "Surname")
		{
			outfile << name4 << ", " << name1 << " " << name2 << endl;
		}

	}

	//Close files
	infile.close();
	outfile.close();

	system("PAUSE");
	return 0;
}