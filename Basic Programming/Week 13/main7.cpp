/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
using
string
###End banned keyword*/

#include <iostream>
#include <cmath>
#include <cstring>

using namespace std;

struct DATE
{
    int day, month, year;
};
typedef struct STUDENT
{
    char id[11];
    char name[35];
    DATE dob;
    float math, phy, chem, aver;

} SV;

//###INSERT CODE HERE -
void inputArrayStudents(SV a[], int &n)
{
    cin >> n;
    for (int i=0; i<n; i++)
    {
        cin.ignore();
        cin.getline(a[i].id,11);
        cin.getline(a[i].name,35);
        cin >> a[i].dob.day >> a[i].dob.month >> a[i].dob.year;
        cin >> a[i].math >>  a[i].phy >>  a[i].chem ;
        a[i].aver = (a[i].math +  a[i].phy +  a[i].chem )/3;
    }
}
void outputArrayStudents(SV a[], int n)
{
    for (int i=0; i<n; i++)
    {
        cout << a[i].id << "\t|";
        cout << a[i].name << "\t|";
        cout << a[i].dob.day << '/' << a[i].dob.month <<'/' << a[i].dob.year <<"\t|";
        cout <<  a[i].math << "\t|" << a[i].phy << "\t|" <<  a[i].chem << "\t|" << a[i].aver;
        cout << endl;
    }
    
}
void sortbyName(SV a[], int n)
{
    for (int i=0;i<n-1; i++)
        for (int j=i+1; j<n; j++)
            if (strcmp(a[i].name, a[j].name)>0)
            {
                SV temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
}



int main()
{
    STUDENT a[100];
    int n,i;
    char name[35];

    inputArrayStudents(a,n);

    sortbyName(a,n);
    cout<<"\nList of students sorted: ";
    cout<<"\nID\t|Fullname\t|Date of birth\t|Maths\t|Phys\t|Chemis\t|Average score\n";
    outputArrayStudents(a,n);

    return 0;
}

