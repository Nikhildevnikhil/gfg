pair<long long, long long> getMinMax(long long a[], int n) {
    long long max = INT_MIN;
    for(int i = 0 ; i < n ; i++){
        if(max < a[i]){
            max = a[i];
        }
    }
    long long min = INT_MAX;
    for(int i = 0 ; i < n ; i++){
        if(min > a[i]){
            min = a[i];
        }
    }
    return{min,max};
}
