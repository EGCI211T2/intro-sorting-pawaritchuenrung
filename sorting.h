void swap(int &a,int &b);
void sort(int *a,int N);
void display(int *a,int N);
void SelectSort(int *a, int N);

void swap(int &a, int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}


void SelectSort(int *a, int N)//select (find the smallest and swap w/ the first one)
{
    int i,j; 
    int loc;// location of a[i]
    for(j=0;j<N-1;j++){ // always swap w/ the jth loc
        int min = a[j]; // can be any value, set it to swap
        loc = j ; 
        for(i=j+1;i<N;i++) // start w/ the lowest value location
        {
            if(min > a[i])
            {
                min = a[i]; // 
                loc = i; // set the location on the 
            } swap(a[0],a[loc]); // swap min with the first location
        }
     }

}


void sort(int *a, int N)//bubble
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


void display(int *a,int N)
{
    int i;
    for(i=0;i<N;i++)
    {
        cout<< a[i] <<" ";
    }
}