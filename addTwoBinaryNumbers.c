// a[] is the first binary, b[] is the second binary and c[] is the result
int addBinary(int a[],int b[], int c[],int n){
    for(int i = n-1;i>=0;i--)
        c[i+1] = a[i] + b[i];
    for(int i = n;i>=0;i--){
        if(c[i] == 2){
            c[i-1] = c[i-1] + 1;
            c[i] = 0;
        }
        else if(c[i] == 3){
            c[i - 1] = c[i- 1] + 1;
            c[i] = 1;
        }
    }
    return 0;
}
