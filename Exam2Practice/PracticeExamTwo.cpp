//Practice Exam Two CS002
//
#include <iostream>
const int SIZE_OF_ARRAY = 8;

void populateArray(int a[], int size);
//a function that populates any array.

void displayArray(int a[], int size);
//a function that displays all the elements of an array

void sectionOneConsecutive(int a[], int size);
//a function that replaces the consecutive number with 0

int MultipleofThreeCounter(int a[], int size);
//a function that counts the numbers that are divisible by 3 

void populateArrayandCount(int a[][3],int size);
//a function that populates a 2-dimensional array and calculates the sum.

const int arraysize1(8), arraysize2(11), arraysize3(2);

int main( )
{
    using namespace std;
    int array1[8];
    //declare the array for function section 1 and use populateArray // function to fill it.
    cout << "-------------------------Function 1---------------------------------" << endl;
    populateArray(array1, arraysize1);
    displayArray(array1, arraysize1);
    sectionOneConsecutive(array1,arraysize1);
    displayArray(array1, arraysize1); 
    // declare the array for function section 2 and use the //populateArray function to fill it 
    cout << "-------------------------Function 2---------------------------------"<< endl;
    int array2[9];
    int section2Return;
    populateArray(array2, arraysize2);
    displayArray(array2, arraysize2);
    section2Return = MultipleofThreeCounter(array2, arraysize2);
    cout << "There are " << section2Return << " numbers that are multiples of three in this list (excluding 3)" << endl; 
   // declare the 2-d array and intialize it for function section 3
    cout << "-------------------------Function 3---------------------------------"<< endl;
    int array3[2][3];
    populateArrayandCount(array3,arraysize3);


}


//Definition of populateArray function
void populateArray(int a[], int size)
{
   using namespace std;
   for (int i=0; i< size; i++)
   {
     cout << "Enter a number :";
     cin >> a[i];
   }
}

// Definition of displayArray function
void displayArray(int a[], int size)

{
  using namespace std;

    for (int i=0; i< size; i++)
    {
        cout << a[i];
        if(i<size -1)
        {
            cout << ", ";
        }
    }
    cout << endl;

}

//Definition of section_1 function
void sectionOneConsecutive(int a[], int size)
{
    for(int i(1); i < arraysize1; i++ )
    {
        if (a[i] == a[i-1])
        {
            a[i] = 0;
        }
    }
}

//Definition of section_2 function
int MultipleofThreeCounter(int a[], int size)
{
    int count(0);
    for (int i(0); i < arraysize2; i++)
    {
        if (a[i] != 3)
        {
            if (a[i] % 3 == 0)
            {
                count++;
            }
        } 
    }
    return(count);
}   

// Definition of section_3 function
void populateArrayandCount(int a[][3],int size)
{
    #include <iostream>
    using namespace std;
    int sumrow1(0), sumrow2(0);

    for (int i(0); i < size; i++)
    {
        for(int j(0); j < size+1; j++)
        {
            cout << "Enter a number:";
            cin >> a[i][j];
            if (i==0)
            {
                sumrow1 = sumrow1 + a[i][j];
            }
            else if (i==1)
            {
                sumrow2 = sumrow2 + a[i][j];
            }
        }
    }
    cout << "The sum of the first row is: " << sumrow1 << endl
        << "The sum of second row is: " << sumrow2 << endl;

    if(sumrow2<sumrow1)
    {
        cout << "The sum of elements in the first row is larger" << endl;
    }
    else if (sumrow2>sumrow1)
    {
        cout << "The sum of elements in the second row are larger" << endl;
    }
    else
    {
        cout << "The sums are equal" << endl;
    }
}