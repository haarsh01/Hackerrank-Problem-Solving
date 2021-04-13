void insertionSort1(int n, vector<int> arr) {
int num, j;
//Loop through the array
for(int i=1; i<n;  i++){
    num =arr[i], j = i -1;
    //perform shifting of elements 
    while(j >= 0 && arr[j] > num){
        arr[j+1] = arr[j];
        j--;
        //Print array 
        for(int k=0; k<n; k++)
        cout << arr[k] << " ";
        cout << "\n";
    }
    arr[j+1] = num;
}
// final sorted array
for(int k=0; k<n;k++)
cout <<  arr[k] <<  " ";

}