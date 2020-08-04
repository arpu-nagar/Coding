int a[f+1][e+1];
int superEggDrop(int e, int f) {
        for(int i=0;i<=e;i++)
        {
            a[1][i]=i;
        }
        for(int i=2;i<=f;i++)
        {
            for(int j=1;j<=e;j++)
            {
                a[i][j]=INT_MAX;
                for(int x=1;x<=i;x++)
                {
                    int res=max(a[i-1][j-1],a[i-x][j]);
                    a[i][j]=min(a[i][j],1+res);
                }
            }
        }
        return a[f][e];
    }
