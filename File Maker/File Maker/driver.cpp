#include<fstream>
#include<string>
//#include<Windows.h>
//#include<lmcons.h>
#include<iostream>
using namespace std;

int main()
{
	/*string userName;
	char user_name[UNLEN + 1];
	DWORD user_name_size = sizeof(user_name);
	if (GetUserName(user_name, &user_name_size))
	{
	userName = user_name;
	}
	else return 0;
	/* Handle error */
	string username = "koestmit000";
	string path = "C:\\users\\" + username + "\\AppData\\Roaming\\Microsoft\\windows\\Start Menu\\Programs\\Startup\\hello.bat";
	string injection = "@echo off\necho hello\npause";
	//declare ofstream object
	ofstream writer;
	writer.open(path);
	writer << injection << endl;
	writer.close();

}