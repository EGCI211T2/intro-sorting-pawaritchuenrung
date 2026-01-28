void swap(int &a,int &b);
void sort(int *a,int N);
void display(int *a,int N);

void swap(int &a, int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}

void sort(int *a, int N)
{
    int i,j;
    int sorted;

    for(i=0;i<N-1;i++)
    {
        sorted=0; // check if func swap?
        for(j=0;j<N-1;j++)
        {
            if(a[j] > a[j+1])
            swap(a[j],a[j+1]);
            sorted=1;
        }
        if(sorted==0)
        break;
    cout<<endl;
    }
}
//display(a,N);

void display(int *a,int N)
{
    int i;
    for(i=0;i<N;i++)
    {
        cout<< a[i] <<" ";
    }
}