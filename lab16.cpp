// Code to implement the gcf function goes here

int gcf(int a, int b) {
    while(b != 0) {
        int r = b;
        b = a % b;
        a = r;
    }
    return a;
}

