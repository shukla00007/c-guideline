// pattern printing Quesitons 
// nested loops 
// print the given pattern 
// *****
// *****
// *****
// for square pattern printing
// for numbers in square pattern printing
// 1234
// 1234
// 1234
// 1234
//for numbers in square pattern printing
//1111
//2222
//3333
//4444
//for alphabet in square pattern printing
//ABCD
//ABCD
//ABCD
//ABCD
// for alphabet in square pattern printing
//AAAA
//BBBB
//CCCC
//DDDD
// for alphabet in square pattern printing
//abcd
//abcd
// abcd
// abcd
// for alphabet in square pattern printing
//aaaa
//bbbb
//cccc
// dddd
//print the given pattern
//*
//**
//***
//****
// print the given pattern
// 1
// AB
// 123
// abcd
// 12345

#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the number of rows:";
    cin >> n; 
    // int m;
    // cout << "Enter the number of col: ";
    // cin >> m;  
    // for(int i=1;i<=n;i++){//rows=n
    //     for(int j=1;j<=n;j++){//col=m
    //         cout<<"* "; 
    //     }
    // for(int i=1;i<=n;i++){//rows=n
    //     for(int j=1;j<=n;j++){//col=m
    //         cout<<j<<" "; // Print numbers in square pattern
    //     }
    // 
    // for(int i=1;i<=n;i++){//rows=n
    //     for(int j=1;j<=n;j++){//col=n
    //         cout<<(char)(j+64)<<" "; // Print alphabet in square pattern
    //     }
    //  for(int i=1;i<=n;i++){//rows=n
    //     for(int j=1;j<=n;j++){//col=n
    //         cout<<(char)(i+64)<<" "; // Print alphabet in square pattern
    //     }
    //for(int i=1;i<=n;i++){//rows=n
    //  for(int j=1;j<=n;j++){//col=n
    //     cout<<(char)(j+96)<<" "; // Print alphabet in square pattern
    // }
    // cout<<endl;
    // for(int i=1;i<=n;i++){//rows=n
    //     for(int j=1;j<=n;j++){//col=n
    //         cout<<(char)(i+96)<<" "; // Print alphabet in square pattern
    //     }
    //     cout<<endl;
    // for(int i=1;i<=n;i++){//rows=n
    //     for(int j=1;j<=i;j++){//col=n
    //         cout<<"* "; // Print alphabet in square pattern
    //     }
    //     cout<<endl;
        
    // }
    // for(int i=1;i<=n;i++){//rows=n
    //     for(int j=1;j<=i;j++){//col=n
    //         cout<<j<<" "; // Print alphabet in square pattern
    //     }
    //     cout<<endl;
    // }
    // for(int i=1;i<=n;i++){//rows=n
    //     for(int j=1;j<=i;j++){//col=n
    //         cout<<i<<" "; // Print alphabet in square pattern
    //     }
    //     cout<<endl;
    // }
    // for(int i=1;i<=n;i++){//rows=n
    //     for(int j=1;j<=i;j++){//col=n
    //         cout<<(char)(j+64)<<" "; // Print alphabet in square pattern
    //     }
    //     cout<<endl;
    // }
    // for(int i=1;i<=n;i++){//rows=n
    //     for(int j=1;j<=i;j++){//col=n
    //         cout<<(char)(i+64)<<" "; // Print alphabet in square pattern
    //     }
    //     cout<<endl;
    // }
    // for(int i=1;i<=n;i++){//rows=n
       
    //     if(i%2!=0){
    //         for(int j=1;j<=i;j++){//col=n
    //             cout<<j<<" ";
    //         }
    //     }else {
    //         for(int j=1;j<=i;j++){//col=n
    //             cout<<(char)(j+64)<<" ";
    //     }
    //     }
    //     cout<<endl;
    //  for(int i=1;i<=n;i++){//rows=n
    //     for(int j=1;j<=n-i;j++){//col=n
    //         cout<<"* "; // Print alphabet in square pattern
    //     }
    //     cout<<endl;
    // for(int i=1;i<=n;i++){//rows=n
    //     for(int j=1;j<=n-i+1;j++){//col=n
    //         cout<<j<<" "; // Print alphabet in square pattern
    //     }
    //     cout<<endl;
    // }
    // for(int i=1;i<=n;i++){//rows=n
    //     for(int j=1;j<=n-i+1;j++){//col=n
    //         cout<<i<<" "; // Print alphabet in square pattern
    //     }
    //     cout<<endl;
    // }
    // for(int i=1;i<=n;i++){//rows=n
    //     for(int j=1;j<=n-i+1;j++){//col=n
    //         cout<<(char)(j+64)<<" "; // Print alphabet in square pattern
    //     }
    //     cout<<endl;
    // }
    //  for(int i=1;i<=n;i++){//rows=n
    //     for(int j=1;j<=n-i+1;j++){//col=n
    //         cout<<i<<" "; // Print alphabet in square pattern
    //     }
    //     cout<<endl;
    // }
    //  for(int i=1;i<=n;i++){//rows=n
    //     for(int j=1;j<=n-i+1;j++){//col=n
    //         cout<<(char)(i+64)<<" "; // Print alphabet in square pattern
    //     }
    //     cout<<endl;
    // }
    //  for(int i=1;i<=n;i++){//rows=n
    //     for(int j=1;j<=2*i-1;j+=2){//col=n
    //         cout<<j<<" "; // Print alphabet in square pattern
    //     }
    //     cout<<endl;
    // }
    //  for(int i=1;i<=n;i++){//rows=n
    //     for(int j=1;j<=i;j++){//col=n
    //         cout<<2*j-1<<" "; // Print alphabet in square pattern
    //     }
    //     cout<<endl;

    // }
    //  for(int i=1;i<=n;i++){//rows=n
    //     int a=1;
    //     for(int j=1;j<=i;j++){//col=n
    //         cout<<a<<" "; 
    //         a+=2; 
    //     }
    //     cout<<endl;
    // }
    // int a=1;
    //  for(int i=1;i<=n;i++){//rows=n
    //     for(int j=1;j<=i;j++){//col=n
    //         cout<<a<<" "; // Print alphabet in square pattern
    //         a++;
    //     }
    //     cout<<endl;
    // }
    //  for(int i=1;i<=n;i++){//rows=n
    //     for(int j=1;j<=i;j++){//col=n
    //         if((i+j)%2==0)cout<<1<<" ";
    //         else cout<<0<<" ";
    //     }
    //     cout<<endl;
    // }
    // int mid=n/2 + 1; // Calculate the middle index for the pattern
    //  for(int i=1;i<=n;i++){//rows=n
    //     for(int j=1;j<=n;j++){//col=n
    //        if(i==mid||j==mid) cout<<"* ";
    //        else cout<<"  "; 
    //     }
    //     cout<<endl;
    // }
    //   int mid=n/2 + 1; // Calculate the middle index for the pattern
    //  for(int i=0;i<n;i++){//rows=n
    //     for(int j=0;j<n;j++){//col=n
    //        if(i==0||i==n-1||j==0||j==n-1) cout<<"* ";
    //        else cout<<"  "; 
    //     }
    //     cout<<endl;
    // }
    //   int mid=n/2 + 1; // Calculate the middle index for the pattern
    //  for(int i=0;i<n;i++){//rows=n
    //     for(int j=0;j<n;j++){//col=n
    //        if(i==j||i+j==n-1) cout<<"*";
    //        else cout<<"  "; 
    //     }
    //     cout<<endl;
    // }
    //   int mid=n/2 + 1; // Calculate the middle index for the pattern
    //  for(int i=1;i<=n;i++){//rows=n
    //     for(int j=1;j<=n-i;j++){//col=n
    //        cout<<"  ";
    //     }
    //      for(int j=1;j<=i;j++){//col=n
    //        cout<<"* ";
    //     }
    //     cout<<endl;
    // }
    //   int mid=n/2 + 1; // Calculate the middle index for the pattern
    //  for(int i=1;i<=n;i++){//rows=n
    //     for(int j=1;j<=n-i;j++){//col=n
    //        cout<<" ";
    //     }
    //      for(int j=1;j<=i;j++){//col=n
    //        cout<<"* ";
    //     }
    //     cout<<endl;
    // }
    //   int mid=n/2 + 1; // Calculate the middle index for the pattern
    //  for(int i=1;i<=n;i++){//rows=n
    //     for(int j=1;j<=n-i;j++){//col=n
    //        cout<<"  ";
    //     }
    //      for(int j=1;j<=n;j++){//col=n
    //        cout<<"* ";
    //     }
    //     cout<<endl;
    // }
    




}