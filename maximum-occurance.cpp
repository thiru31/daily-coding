#include<bits/stdc++.h>
using namespace std;

// Given a string(lowercase), find the maximum occurance of a character in the string. 

int main(){

    string s;
    cin>>s;
    int n = s.length();
    int count[26] = {0};
    for(int i=0;i<n;i++){
        count[s[i]-'a']++;
    }
    int max = 0;
    char result;
    for(int i=0;i<26;i++){
        if(count[i]>max){
            max = count[i];
            result = i+'a';
        }
    }
    cout<<result<<" "<<max<<endl;

    return 0;
}