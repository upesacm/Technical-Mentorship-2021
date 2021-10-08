#include<iostream>
using namespace std;

//Function for Addition of two matrices 

void add(int arr_1[][] , int arr_2[][] , int x,int y)
{
    int i,j;
    int sum[x][y];

    //calculating sum of two matrix

    for(i =0 ;i < x;i++)
    {
        for(j = 0;j < y;j++)
        
        {
            sum[i][j] = arr_1[i][j] + arr_2[i][j];
        }
    }

    //displaying sum of two matrix
    
    cout<<"\nThe sum of both the matrix is as follows:\n";

    for(i = 0;i < x;i++)
    {
        for(j = 0;j < y;j++)
        {
            cout<<sum[i][j]<<" ";

        }
            cout<<endl;
    }


}


//Function for Subtraction of two matrices 

void sub(int arr_1[][] , int arr_2[][],int x,int y)
{
    int i,j;
    int diff[x][y];

    //calculating difference of two matrix

    for(i =0 ;i < x;i++)
    {
        for(j = 0;j < y;j++)
        
        {
            diff[i][j] = arr_1[i][j] - arr_2[i][j];
        }
    }

    //displaying difference of two matrix
    
    cout<<"\nThe difference of both the matrix is as follows:\n";

    for(i = 0;i < x;i++)
    {
        for(j = 0;j < y;j++)
        {
            cout<<diff[i][j]<<" ";

        }
            cout<<endl;
    }


}

//Function for Multiplication of two matrices

void mul(int arr_1[][] , int arr_2[][],int x,int y)
{
    int i,j,k;
    int pro[x][x];

    for(i = 0;i < x;i++)
    {
        for(j = 0;j < y;j++)
        {
            pro[i][j] = 0;
            for(k = 0;k < y;k++)
            {
                pro[i][j]+=arr_1[i][k]*arr_2[k][j];
            }
        }
    }

    cout<<"\nThe product of both the matrices is as follows:\n";

    for(i = 0;i < x;i++)
    
    {
        for(j = 0;j < y;j++)
        {
            cout<<pro[i][j]<<" ";
        }
        cout<<endl;
    }

}

//Function for Transpose

void tran(int arr_1[][] , int arr_2[][],int x,int y)
{
    int i,j;

    //Displaying transpose of first matrix

    cout<<"\nThe transpose of first matrix is as follows:\n";

    for(i = 0;i < x;i++)
    {
        for(j = 0;j < y;j++)
        {
            cout<<arr_1[j][i]<<" ";
        }
            cout<<endl;
    }

    //Displaying transpose of second matrix

    cout<<"\nThe transpose of first matrix is as follows:\n";

     for(i = 0;i < x;i++)
    {
        for(j = 0;j < y;j++)
        {
            cout<<arr_2[j][i]<<" ";
        }
            cout<<endl;
    }   
}

int main()
{
    int r,c;

    cout<<"Enter the number  of rows\n";
    cin>>r;

    cout<<"Enter the number of columns\n";
    cin>>c;

    int a[r][c];
    int b[r][c];
    int ch;
    
    cout<<"Enter elements in first matrix";
    
    
    //Entering elements in first matrix
    
    for(int i = 0;i < r;i++)
    {
        for(int j = 0;j < c;j++)
        {
            cout<<"\nEnter element at: "<<i+1<<","<<j+1;
            cin>>a[i][j];
        }
    }
    
    
    //Entering elements in second matrix
    
    cout<<"\nEnter elements in second matrix(3x3)";
    
    for(int i = 0;i < r;i++)
    {
        for(int j = 0;j < c;j++)
        {
            cout<<"\nEnter element at: "<<i+1<<","<<j+1;
            cin>>b[i][j];
        }
    }
    
    cout<<"\nThe entered matrices are as follows:";
    
    //Displaying first matrix
    
    cout<<"\nThe first matrix is as follows:\n";
    
    for(int i = 0;i < r;i++)
    {
        for(int j = 0;j < c;j++)
        {
            cout<<a[i][j]<<" ";
        }
        
        cout<<endl;
    }
    
    //Displaying second matrix
    
    cout<<"\nThe second matrix is as follows:\n";
    
    for(int i = 0;i < r;i++)
    {
        for(int j = 0;j < c;j++)
        {
            cout<<b[i][j]<<" ";
        }
        
        cout<<endl;
    }
    
    cout<<"\nSelect any of the following operations you want to perform: \n 1.Addition \n 2.Subtraction \n 3.Multiplication \n 4.Transpose";
    cin>>ch;

    switch(ch)
    {
        case 1:

            add(a , b , r , c);

        
        break;

        case 2:

            sub(a , b , r , c);
        
        break;
        
        case 3:

            mul(a , b , r , c);
        
        break;
        
        case 4:

            tran(a , b , r , c);
        
        break;
        
        default:
        
        cout<<"\nWrong choice entered";
    }

    return 0;
}