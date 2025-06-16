const ll n = 1e7;

vector<ll> spf(n+1);

for(int i = 0; i <= n; i++)
{
    spf[i] = i;
}

for(int i = 2; i*i<=n; i++)
{
    if(spf[i]==i)
    {
        for(int j = i*i; j<=n; j+=i)
        {
            if(spf[j]==j){spf[j]=i;}
        }
    }
}