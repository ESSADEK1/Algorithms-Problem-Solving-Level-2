#include<iostream>
#include<string>
using namespace std;

string ReadText()
{
	string Text;
	cout << "Please enter Text ? \n";
	getline(cin, Text);

	return Text;
}

string EncryptText(string Text, short EncryptionKey)
{

	for (int i = 0;i <= Text.length();i++)
	{
		Text[i] = char((int)Text[i] + EncryptionKey);

	}
	return Text;
}

string DecryptText(string Text, short EncryptionKey)
{
	for (int i = 0;i <= Text.length();i++) {
		Text[i] = char((int)Text[i] - EncryptionKey);
	}
	return Text;}

int main()
{
	const short EncryptionKey = 4;

    string TextAfterEncryption, TextAfterDecryption;  
    string Text = ReadText();

    TextAfterEncryption = EncryptText(Text, EncryptionKey);

    TextAfterDecryption = DecryptText(TextAfterEncryption, EncryptionKey);

    // Display the original text.
    cout << "\nText Before Encryption : " << Text << endl;
    // Display the encrypted text.
    cout << "Text After Encryption  : " << TextAfterEncryption << endl;
    // Display the decrypted text.
    cout << "Text After Decryption  : " << TextAfterDecryption << endl;

    return 0; // Return 0 to indicate successful program execution.
}
