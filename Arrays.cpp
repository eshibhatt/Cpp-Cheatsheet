#include <iostream>
using namespace std;

void myfuncn(int *arr, int n);

int main(){
    int n;
    cin >> n;
    // Array declaration by user specified size 
    int arr[n];

    //Array declaration of predefined size
    string people[4] = {"Aman","Rahul","Riya","Arti"};
    
    //taking input
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int badArray[5];//uninitialised array, with no value assigned in place
    cout<<badArray[2]; // garbage value

    //dynamically creating array= pointer_variable = new data_type;
    int *a = new int[100];
    int *b= new int[n]; //of user-defined size n
    delete[] a; //releasing the memory hold by a dynamic array
    
    //Accessing elements of an array using indices= Array_name[index];
    cout << people[1];
    myfuncn(arr,n);

}

void myfuncn(int *arr, int n) {
    /* The pointer arr is pointing to the first element of
     the array, and the n is the size of the array. */
    for (int i = 0; i < n; i++) {
        cout << "Value of var_arr " << i << " is: " << * arr << endl;
        /*increment pointer for next element fetch*/
        arr++;
    }
}




/* Notes:

1. The elements of arrays are stored in consecutive memory locations.

2. The name of the array has the address of the first element of the array.

3. Arrays must always be initialised with values. 
If the array is not initialized, the respective memory locations will contain garbage by default.
Hence, any operation on an uninitialized array will lead to unexpected results.
NOTE: If you do not initialize an array, you must mention ARRAY SIZE.

4. Arrays can be passed to functions just like values.
   i)Pass by value method: In this type of function call,
    the actual parameter is copied to the formal parameters.
    function_name(array_name[], array_size); declaring
    function_name(array_name, array_size); calling
    **Square brackets ‘[ ]’ are not used at the time of function call.

   ii)Pass by reference method:
   Passing the address of the array to the function parameters,
   instead of copying the actual parameter is called pass by reference.
   -the formal parameter is declared as a pointer, such that name of the array itself
    represents the address of the array i.e address of the first element of the array.
    eg-
     *(a+2) == a[2], as *a=a[0]
*/