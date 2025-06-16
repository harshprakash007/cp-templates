//sieve till root

ll n; 
vector<bool> sieve(n+1, true);
sieve[0] = sieve[1] = 0; 
for(int i = 2; i*i <= n; i++)
{
    if(sieve[i])
    {
        for(j = i*i; j<=n; j+=i)
        {
            sieve[j] = false;
        }
    }
}