//UVA100 - The 3n+1 problem

#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    while(cin>>a>>b){
        
        vector<int> s;
        s.clear();

        cout<<a<<" "<<b<<" ";
        if(a>b){
            int t;
            t=b;
            b=a;
            a=t;
        }
        
        for(int i=a;i<=b;i++){
            int temp,ct=0;
            temp=i;
            
            while(temp!=1){
                if(temp%2==1){
                    temp=3*temp+1;
                }
                else{
                    temp=temp/2;
                }
                ct++;
            }
            s.push_back(++ct);
        }
        sort(s.begin(),s.end());
        cout<<s[s.size()-1]<<endl;
    }


    return 0;
}