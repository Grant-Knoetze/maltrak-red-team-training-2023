// read-team-2023.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//Encrypt a string using XOR (represented by a caret ^ in C++)
#include <iostream>


void EncryptString(char* str, int length, char* buf, char key)
{
	for (int i = 0; i < length; i++)
	{
		buf[i] = str[i] ^ key;
	}
}
int main()
{
	char* str = (char*)"http://127.0.0.1:8888/beacon"; // Example string to encrypt
	int length = strlen(str);
	char* buf = (char*)malloc(length);

	// your encryption here
	EncryptString(str, length, buf, 0x01);

	printf("Encrypted String: %s", buf);

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
