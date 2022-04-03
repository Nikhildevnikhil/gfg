string reverseWord(string str){
    int n = str.length()-1;
    char temp;
    for(int i = 0 ; i <= n/2 ; i++){
        temp = str[i];
        str[i] = str[n-i];
        str[n-i] = temp;
    }
    return str;
}
