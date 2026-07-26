#include<iostream>
#include<string>
using namespace std;
//Two Pointer Approach -> TC : O(n) & SC : O(1)
// bool isPalindrome(string& s) {
//     int st = 0, end = s.length()-1;
//     while(st<end) {
//         if(s[st]!=s[end])
//         return 0;
//         st++,end--;
//     }
//     return 1;
// }

//Single Pointer -> TC : O(n) & SC : O(1)
// bool isPalindrome(string& s) {
//     int n = s.length();
//     for(int i=0; i<n/2; i++) {
//         if(s[i]!=s[n-i-1])
//         return 0;
//     }
//     return 1;
// }

//Inbuilt Function
// bool isPalindrome(string& s) {
//     return s==string(s.rbegin(),s.rend())?1:0;
// }

//Recursion -> TC : O(n) & SC : O(n)
bool isPalindrome(string& s, int st, int end) {
    if(st>end) return 1;
    else if(s[st]!=s[end])
    return 0;
    isPalindrome(s,st+1,end-1);
}
int main() {
    string s = "madam";
    cout << isPalindrome(s,0,s.length()-1);
    return 0;
}