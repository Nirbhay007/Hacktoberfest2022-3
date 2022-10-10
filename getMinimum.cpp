bool check(long long mi,vector<long long> v,long long m)
{
long long op=0;
	for(long long i=0;i<v.size();i++)
	{
		op=op+v[i]/v[mi];
		if(v[i]%v[mi] > 0)
			op++;

	}
	if(op>m)return false;
	return true;
}
long long getMinimum(int n,long long m,vector<long long> A)
{
		long long ans;
sort(v.begin(),v.end());
	long long i=0;
	long long j=n-1;
	while(i<=j)
	{
		long long mi=(i+j)/2;
		if(check(mi,v,m))
		{
			ans=v[mi];
			j=m-1;
		}
		else i=m+1;
	}
	return ans;

}
