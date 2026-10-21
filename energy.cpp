#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool comp(int a, int b)
{
    return a>b;
}

int calMinExer(int E, int N, vector<int>Ai)
{
  sort(Ai.begin(),Ai.end(), comp);
  int c=0;
  for(int i=0;i<N;i++)
  {
   int r=2;
    while(r>0)
    {
        if(E<=Ai[i])
        {
            return c+1;
        }
        E=E-Ai[i];
        c++;
        r--;
    }
  }
  return -1;
}
int main()
{
    int E,N;
    scanf("%d",&E);
    scanf("%d",&N);
    vector<int>Ai(N);
    for(int i=0;i<N;i++)
    {
        scanf("%d",&Ai[i]);
    }
    printf("%d\n", calMinExer(E, N, Ai));
    return 0;
}
