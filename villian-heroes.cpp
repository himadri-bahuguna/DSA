#include <iostream>
#include<vector>
using namespace std;
int calc(int N,int M,int H,vector<int>&V)
{
    int c=M;
    int win=0,h=H;
    
for(int i = N-1; i >= 0 ; i--)
{
    if(h > V[i])
    {
        h -= V[i];
        win++;
    }
    else if(h < V[i] && V[i]<=H)
    {
        c--;
        h=H;
    }
    else  // h == V[i]
    {
        c--;
        win++;
        h=H;
    }
    if(c==0) break;
}
return N - win;


}
int main()
{
    int N,M,H;
    cin>>N;
    cin>>M;
    cin>>H;
    vector<int>V(N);
    for(int i=0;i<N;i++)
    {
        cin>>V[i];
    }

    cout<<calc(N,M,H,V)<<endl;
    return 0;
}