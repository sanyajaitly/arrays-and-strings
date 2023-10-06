/* Name-Sanya Jaitly
PRN-22070123100
Exp-7(Part-A)
String display
*/
#include<iostream>
using namespace std;

int main()
{
    string name[10];
    int i;

    cout<<"Enter the string to display :";

    for(i=0;i<=10;i++)
    {
        cin>>name[i];
        cout<<"The name is :"<<name[i]<<endl;
        break;
    }
    return 0;
}
/*
OUTPUT
Enter the string to display :Symbiosis
The name is :Symbiosis
*/

/*
Exp-7(Part-B)
String Length
*/
#include<iostream>
using namespace std;

int main()
{
    char str[10] = "Symbiosis";
    int i,length = 0;

    for(i=0; str[i] !='\0'; ++i)
    {
        length++;
    }
    cout<<"Length of string is :"<<length;

    return 0;
}
/*Output
Length of string is :9
*/

/*
Exp-7(Part-B)
String Length
*/
#include<iostream>
using namespace std;
#include<bits/stdc++.h>
int main()
{
string str1;

    int length = 0, j=0,i,n;
    cout << "Enter name: ";
    cin >> str1;
    cout << "The inputted string is: " << str1 << endl;
    for (int i = 0; str1[i] != '\0'; i++)
    {
        length += 1;
    }
    
    cout << "The size of the string is: " << length << endl;
}
/*
OUTPUT
Enter name: symbiosis
The inputted string is: symbiosis
The size of the string is: 9
*/

/*Exp-7(Part-C)
String concatenation*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str1 = "Symbiosis";
    string str2 = "Technology";
    string str3 = str1 + str2;
    int i,len,temp;
    cout<<str3<<endl;
    cout<<"Length of string is :"<<str3.length()<<endl;;
    len=str3.size();
    for(i=0; i<len/2; i++)
    {
        temp=str3[i];
        str3[i]=str3[len-i-1];
        str3[len-i-1]=temp;
    }
   cout<<"Given String is reversed :"<<str3;

    return 0;
}
/*Output
SymbiosisTechnology
Length of string is :19
Given String is reversed :ygolonhceTsisoibmyS
*/


/*
Exp-7(Part-D)
String Palindome or not*/

#include <iostream>
using namespace std;

int main()
{
    string str;
    int i, len;

    cout << "Enter a string: ";
    cin >> str;

    len = str.size();

    for (i = 0; i < len / 2; i++)
    {
        char temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }

    cout<<str<<endl;

    if (str == str)
    {
        cout << "Palindrome" << endl;
    }
    else if(str != str)
    {
        cout << "Not a Palindrome" << endl;
    }

    return 0;


    

}
/* OUTPUT
Enter a string: Symbiosis
sisoibmyS
Palindrome
*/


/*Exp-7(Part-E)
Enter The marks of 10 subjects and display it.
*/
#include<iostream>
using namespace std;
int main()
{
    int marks[10] = {90,89,78,87,86,85,78,98,97,100};
    int i;
    for(int i = 0;i<10;++i)
    cout<<"\nMarks"<<":"<<marks[i];
}
/*Output
Marks:90 
Marks:89 
Marks:78 
Marks:87 
Marks:86 
Marks:85 
Marks:78 
Marks:98 
Marks:97 
Marks:100
*/

/*EXP=7(PART F)
Enter the marks of subjects from user and display it.
*/

#include<iostream>
using namespace std;
int main()
{
    int marks[10];
    int i;
    for(i=0;i<10;i++){
        cout<<"Enter the marks of each subjects:"<<endl;
        cin>>marks[i];
    }
    cout<<"\n Enter the marks of subjects are:\n";
    for(i=0;i<10;i++){
        cout<<"\n marks"<<":"<<marks[i];
    }
} 
/*
Output
Enter the marks of each subjects:
98 
Enter the marks of each subjects:
93
Enter the marks of each subjects:
92
Enter the marks of each subjects:
94
Enter the marks of each subjects:
95
Enter the marks of each subjects:
96
Enter the marks of each subjects:
91
Enter the marks of each subjects:
97
Enter the marks of each subjects:
99
Enter the marks of each subjects:
100

 Enter the marks of subjects are:

 marks:98
 marks:93
 marks:92
 marks:94
 marks:95
 marks:96
 marks:91
 marks:97
 marks:99
 marks:100
*/


//EXP=7(PART F)
# include <iostream>
using namespace std;
int main()
{
 int marks[10] = {98, 99, 89, 96, 80, 94, 96, 82, 94, 100};
    int search_mark, found, position_found;
    found = 0;
    
    cout << "Enter the mark you want to search for: ";
    cin >> search_mark;
    for (int i = 0; i < 10; i++)
    {
        if (marks[i] == search_mark)
        {
            found = 1;
            position_found = i+1;
            cout << "The mark was found on the position: " << position_found <<endl;
        }
        
    }
    if (found == 0)
    {
        cout << "The value was not found.";
    }
}




/*
Output:
Enter the mark you want to search for: 96
The mark was found on the position: 4
The mark was found on the position: 7
*/

/*
PART G
C++ program to find the maximum and the minimum value from the given array.
*/

 {
    int marks[10] = {60, 67, 89, 96, 80, 45, 96, 82, 94, 100};
    int max =0;
    for (int i = 0; i < 10; i++)
    {
        if (marks[i]>max)
        {
            max = marks[i];
        }
        
    }
    int min = max;
    for (int j = 0; j < 10; j++)
    {
        if (marks[j]<min)
        {
            min = marks[j];
        }
        
    }
    
    cout << "The greatest number is: " << max << endl;
    cout << "The smallest number is: " << min<<endl;
}
/*
Output:
The greatest number is: 100
The smallest number is: 45
*/

/*PART = H
C++ program to find Array_Sum_Average*/
{
    int data[10] = {90, 89, 95, 98, 99,82,89,87,88,96};
    int sum =0;
    int i,avg;
    for( i = 0; i < 11; i++)
    {
        sum = sum + data[i];
        avg = sum/10;
    }
    cout<<"sum of the array is:"<<sum<<endl;
    cout<<"average of the array is:"<<avg<<endl;
}
/*OUTPUT
sum of the array is:1009
average of the array is:100
*/

/*PART = I
To Flip Element*/
 {
    int marks[10] = {98, 90, 99, 96, 80, 92, 94, 95, 93, 100};
    int flip[10];
    int j = 0;
    for (int i = 9; i >= 0; --i)
    {
        flip[j] = marks[i];
        j++;
    }
    for (int i =0; i<10; i++) {
        cout << flip[i] << " "; 
    }
    // cout << flip[9];
    return 0;
}
/*
Output:100 93 95 94 92 80 96 99 90 98
*/