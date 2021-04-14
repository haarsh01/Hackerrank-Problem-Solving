int start =0, end = arr.size() - 1, middle;
while(start <= end){
    middle = start + (end-start) / 2;
    if(arr[middle] == V){
        return middle;
    }
    if(arr[middle] < V){
        start = middle + 1;
    }
    else{
        end = middle -1;
    }
}
return -1;
}