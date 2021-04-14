void insertionSort2(int n, vector<int> arr) {
for(int i=1; i<n ; i++){
    int current = arr[i];
    int j;
    for(j=i-1; j>=0;j--){
        if(current < arr[j]){
         arr[j+1] = arr[j];
    }
    else{
        break;
    }
}
arr[j+1] = current;
for(int k=0; k<n;k++)
cout << arr[k] << " ";
cout <<"\n";
}

}