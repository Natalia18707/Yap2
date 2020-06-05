#include"Libraries.h"
#include"Prototypes.h"
void Seminarchoice()
{
	MenuSeminars();
	while (true)
	{
		char seminar;

		while (true)
		{
			cout << "\n\tEnter seminar number--> ";
			cin >> seminar;
			if (seminar < '3' || seminar>'5')/////////
				cout << "\n\tEror!!";
			else
				break;
		}
		switch (seminar)
		{
		case '3':
			Seminar3();
			break;

		case '4':
			Seminar4();
			break;
		case '5':
			Seminar5();
			break;

		}
		char flag;
		cout << "\nChoose another seminar (1),to complete any\n\t Enter -->  ";
		cin >> flag;
		if (flag != '1')
			break;
		else
			MenuSeminars();
	}
}