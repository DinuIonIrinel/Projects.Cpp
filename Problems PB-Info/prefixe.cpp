using namespace std;

int main()
{
    char a[100],cpy[100];
    int i,j,n;

    cin.get(a,100);
    n=strlen(a);
    n--;
    for(i=0;i<=n-1;i++)
    {
        strcpy(cpy,a);
    }

    while(strlen(cpy)!=0)
    {
        cout<<cpy<<endl;
        strncpy(cpy+n,cpy+n+1,1);
        n--;
    }

    n=strlen(a);
    n--;
    j=0;

    while(n!=j-1)
    {
        cout<<a+j<<endl;
        j++;
    }

    return 0;
}
