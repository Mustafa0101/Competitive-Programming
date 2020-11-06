#include<iostream>
using namespace std;

bool helper(char s[],int low,int high)
{
    if(low>=high)
    {
        return true;
    }
    else if(s[low]==s[high])
    {
        return false;
    }
    helper(s,low+1,high-1);
}
bool palindrome(char str[], int len)
{
    int l=0;
    int h=len;
    return helper(str,l,h);
}
int main()
{
    int n;
    cout<<"How long is the word going to be : ";
    cin>>n;
    char word[n];
    cout<<"Enter the word : ";
    cin>>word;
    if(palindrome(word,n))
    {
        cout<<"The Word is a palindrome.";
    }
    else
    {
        cout<<"The Word is not a palindrome.";
    }
}
