int sub(int x) {
    return x - 4;
}
int add(int x) {
    if ( x > 2)
     return sub(x);
    else 
      return 0;
}
#pragma hls_top
int compare(int x, int y) { 
    if (x > y) {
        #pragma hls_unroll yes
        for (int i = 0; i < 5; i++) {
            // x += i;
            x += add(x);
        }
        
    } else {
        return y;
    }
    y = y + 1;
    return x + y;
}