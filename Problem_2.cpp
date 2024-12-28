#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<string> emails = {"test.email+alex@leetcode.com","test.e.mail+bob.cathy@leetcode.com","testemail+david@lee.tcode.com"};
    unordered_set<string> uniqueCount;
    bool indomain = false;
    bool plus = false;


    for(string email : emails){
        string filteredEmail;
        for(char c : email){
            if(c == '@'){
                indomain = true;
                plus = false;
            }

            if(!indomain){
                if(c == '.'){
                    continue;
                }
                else if(c == '+'){
                    plus = true;
                }
            }

            if(!plus || indomain){
                filteredEmail += c;
            }
        }
        uniqueCount.insert(filteredEmail);
    }

    cout<<"total Count : "<<uniqueCount.size();

    return 0;
}