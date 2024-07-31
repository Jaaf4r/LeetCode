int scoreOfString(char* s)
{
    int i = 0;
    int bag = 0;
    int res = 0;

    while (i < strlen(s) - 1)
    {
        bag = (s[i] - s[i + 1]);
        if (bag < 0)
            bag *= -1;
        res += bag;
        i++;
    }
    return (res);
}
