int modulo(int a, int b)
{
    if(b <= 0) {
        return -1;
    }
    int div = a / b;
    return a - div * b;
}
