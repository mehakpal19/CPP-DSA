#include<iostream>
#include<string>
using namespace std;
void Count(string s) {
    int vowels = 0, consonants = 0;
    for(int i=0; i<s.length(); i++) {
        char ch = s[i];
        if((ch>='A' && ch<='Z') || (ch>='a' && ch<='z')) {
            ch = tolower(ch);
            if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
            vowels++;
            else 
            consonants++;
        }
    }
    cout << "Count of vowels : " << vowels << endl;
    cout << "Count of consonants : " << consonants << endl;
}
int main() {
    string s = "Hello World";
    Count(s);
    return 0;
}