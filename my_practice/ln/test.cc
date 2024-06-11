
#pragma hls_top
int compare(int x, int y) { 
    
    if (x > y) {
        #pragma hls_unroll yes
        for (int i = 0; i < 10; i++) {
            x += i;
        }
        
    } else {
        return y;
    }
    
    y = y + 1;
    return x + y;
}0