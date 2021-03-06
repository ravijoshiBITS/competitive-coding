#include <vector>
#include <iostream>
using namespace std;
const int NMAX = 1e6;
bool isPrime[NMAX];
vector<int> primes;
int main()
{   
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);
    for(int i=1; i<NMAX; i++)
        isPrime[i] = true;
    for(int i=2; i<NMAX; i++)
    {   if(!isPrime[i])
            continue;
        primes.push_back(i);
        for(int j=2*i; j<NMAX; j+=i)
        {   isPrime[j] = false;
        }
    }
    int t=78000;
    cout << t<<'\n';
    while(t--)
    {   cout << primes.at(primes.size()-t-1)<<'\n';
    }
    
}
