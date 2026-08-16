bool isPalindrome(int x) {
    if(x>=0)
    {
        int n=x;
        long long sum=0;
        int d;
        while(n>0)
        {
            d=n%10;
            sum=sum*10+d;
            n=n/10;
        }
        if((long long)x==sum)
        {
            return true;
        }
        else
        {
            return false;
        }
    }   
    else
    {
        return false;
    }
}