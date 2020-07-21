int oglindit(int n)
{
    int inv = 0;
    while ( n != 0 ) {
        inv = inv * 10 + n % 10;
        n = n / 10;
    }
    return inv;
}
