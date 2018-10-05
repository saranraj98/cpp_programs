#include<map>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int j=0 ;j<n;j++){
    string s1 , s2;
    cin>>s1>>s2;
    map<char, long long int> ma,mb;
    bool status=false;

    for(int i =0 ;i<s1.length();i++){
        if(ma.count(s1[i])==0){
            ma[s1[i]]==1;
        }
        else{
            ma[s1[i]]++;
        }
    }
    for(int i =0 ;i<s1.length();i++){
        if(mb.count(s2[i])==0){
            mb[s2[i]]==1;
        }
        else{
            mb[s2[i]]++;
        }
    }
    for(int i =0;i<s1.length();i++){
        status = true;
        if(ma[s1[i]] == mb[s1[i]])
          continue;
        else{
            status = false;
            break;
        }  
    }
    if(status == true)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
    
}
return 0;
}