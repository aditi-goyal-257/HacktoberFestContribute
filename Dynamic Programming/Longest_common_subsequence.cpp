//C++ program for longest common subsequnce problem

#include<bits/stdc++.h>  
using namespace std; 
  

  
/* Returns length of LCS for X[0..m-1], Y[0..n-1] */
int lcs( char *X, char *Y, int m, int n )  
{  
    int L[m + 1][n + 1];  
    int i, j;  
      
    // L[i][j] contains length of LCS of X[0..i-1] and Y[0..j-1] 
    for(i = 0;i <= m; i++)
    {
       L[i][0] = 0;
     }
     for(i = 0;i <= n; i++)
    {
       L[0][i] = 0;
     }
    for (i = 1; i <= m; i++)  
    {  
        for (j = 1; j <= n; j++)  
        {  
      
        if (X[i - 1] == Y[j - 1])  
            L[i][j] = L[i - 1][j - 1] + 1;  
      
        else
            L[i][j] = max(L[i - 1][j], L[i][j - 1]);  
        }  
    }  
          
    return L[m][n];  
}  
  
int main()  
{  
    char X[] = "ABCABCDE";  
    char Y[] = "DABCEFG";  
      
    int m = strlen(X);  
    int n = strlen(Y);  
      
    cout << "Length of LCS is " 
         << lcs( X, Y, m, n );  
      
    return 0;  
}
//code contributed by Aditi Goyal
  
