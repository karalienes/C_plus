#include<iostream>
#include<string.h>
#include<fstream>



using namespace std;

class Fitness
{
protected:


	char name[50];
	char surname[50];


public:
	virtual void Pecati() = 0; //cyst virtual function, class and abstract
	char* Name()
	{
		return name;
	}
	char* Surname()
	{
		return surname;
	}
};
//This is where the Personality class ends

class Member : public Fitness //the doctor class inherited from the Personality class
{
private:
	float weight; //private attributes of the class
	float height;
	int age;
public: //public attributes of the class
	void setMember(char* ad, char* soyad, float a, float b, int c) // f to set the attributes of an object of class Doctor
	{
		int j;

		strcpy(name, ad);


		name[0] = toupper(name[0]);
		for (j = 1; j < (sizeof(name) / sizeof(char)); j++)
		{
			name[j] = tolower(name[j]);
		}

		strcpy(surname, soyad);
		surname[0] = toupper(surname[0]);
		for (j = 1; j < (sizeof(surname) / sizeof(char)); j++)
		{
			surname[j] = tolower(surname[j]);
		}
		weight = b;
		height = a;
		age = c;


	}
	// this is where the setup file ends

	Member operator=(Member& d) // operator loading =
	{
		strcpy(name, d.name);
		strcpy(surname, d.surname);
		weight = d.weight;
		height = d.height;
		age = d.age;
		return *this;
	}
	bool operator<(const Member& d) const // operator overload <
	{



		if (age < d.age)
		{
			return true;
		}



	}       // ends here

	int Age()

	{
		return age;
	}

	float Weight()
	{
		return weight;
	}

	float Height()
	{
		return height;
	}

	void Pecati() // Definition of cyst abstract function of the base class
	{
		cout << name << " " << surname << "\n" << "Age limit: " << age << endl << endl;
	}
	~Member() // destructor
	{}

}; // the Member class ended here


template <class T>   //template function
void Sort(T niza[], int n)
{
	T temp;
	int i, j;

	for (i = 0; i < n - 1; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (niza[i] < niza[j])
			{
				temp = niza[i];
				niza[i] = niza[j];
				niza[j] = temp;
			}
		}
	}
} 		// the template ends here



int main() // main program		
{
	int i, j, k; // variables required for for cycles string man
	int choice;


start:      // start of the start block
	{
		cout << "         SELECT OPTION         " << endl << endl;  // option selection menu 
		cout << "1 - DATA ENTRY FOR A RANGE OF MEMBERS" << endl;
		cout << "2 - READING FROM MEMBER FILES" << endl;
		cout << "3 - EXIT THE PROGRAM" << endl;
		cout << endl << endl;
		cout << "What is your choice?" << endl;
		cin >> choice;
		char _name[30], _surname[30];
		float _height;
		float _weight;
		int _age;
		int n_members;
		switch (choice) // according to the input, different blocks are executed
		{



		case 1: {

			cout << endl;
			cout << "Data entry for members. How many members do you want to enter data for? - ";
			cin >> n_members;

			Member* mr;
			mr = new Member[n_members];

			Member* pok_mr;

			for (i = 0; i < n_members; i++)
			{
				cout << endl << "Entering data for the Member:" << endl;
				cout << "Enter a name: " << endl;
				cin >> _name;
				cout << "Enter last name:" << endl;
				cin >> _surname;
				cout << "Enter height:" << endl;
				cin >> _height;
				cout << "Enter weight: " << endl;
				cin >> _weight;
				cout << "Enter age:" << endl;
				cin >> _age;
				mr[i].setMember(_name, _surname, _height, _weight, _age);
			}



			Sort<Member>(mr, n_members);

			fstream members("members.txt");
			if (!members.is_open())
			{
				try
				{						// if the file cannot be opened, we have an exclusion generation and a corresponding block for the same
					throw 1;
				}
				catch (int k)
				{
					cout << "Unable to open file." << endl;
					return 1;
				}
			}
			else
			{
				members << " ";
				for (i = 0; i < n_members; i++)
				{
					pok_mr = &mr[i];

					members << pok_mr->Name() << " " << pok_mr->Surname() << "\nHeight: " << pok_mr->Height() << "\nWeight: " << pok_mr->Weight() << "\nAge: " << pok_mr->Age() << "\n\n";
				}

			}
			members.close();
			break;

		}
		case 2:
		{
			char c;
			fstream members("members.txt", ios::in);
			if (!members.is_open())
			{
				try
				{						// if the file cannot be opened, we have an exclusion generation and a corresponding block for the same
					throw 1;
				}
				catch (int k)
				{
					cout << "Unable to open file." << endl;
					return 1;
				}
			}
			else
			{
				while (members)
				{
					members.get(c);
					if (members)
					{
						cout << c;
					}
				}
			}
			cout << endl;
			members.close();
			break;
		}
		case 3:
		{
			exit(1); // if you put the number 3 out of the program
			break;
		}
		default:
			cout << "Enter a non-existent option. Submit an appropriate ordinance according to the given menu." << endl;
			goto start;									 // if a non-existent option is entered, it returns to the beginning of the start block
			break;
		}

	}       // the start block ends here

	char run_again;

start2:
	{       // start 2 block streams

		cout << "Do you want to re-select the option? ( y - for yes  // n - for no )" << endl;
		cin >> run_again;
		switch (run_again)
		{
		case 'y':
		{
			goto start;
			break;
		}
		case 'n':
		{
			break;
		}
		default:
		{
			cout << "Enter a non-existent option. Enter 'y' to return to the main menu,\n ili 'n' to exit the program." << endl;
			goto start2;
			break; 			 // if a non-existent option is introduced, I enter the startup from the start2 block
		}
		}

	} // the start2 block ends here

	return 0;
}


