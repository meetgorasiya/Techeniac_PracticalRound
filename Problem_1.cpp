#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> distance={1,2,3,4};
    int start=0;
    int end;
    int total=0;
    int clockwise=0;
    

    cout<<"Enter the destination:";
    cin>>end;

    for(int d : distance){
        total += d;
    } 

    for(int i=start; i!=end; i=(i+1)%4){
        clockwise += distance[i];
    }
   
   int ctrClockwise = total - clockwise;
   int minimum = min(clockwise,ctrClockwise);

   cout<<"Minimum distance :"<<minimum;
    
    return 0;
}