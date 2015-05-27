// Test_Project.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "GetRepoName.h"
#include<iostream>
#include<string>
//#include "main.cpp"
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	string greeting = "hello ";
	//string repo_name = "Github";

	cout << greeting << GetRepoName() << endl;

	system("pause");
	return 0;
}

