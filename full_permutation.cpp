#include<iostream>
unsigned* FindMaxForOne(unsigned *p,unsigned *q)
{
    unsigned *p1 = p;
    unsigned *p2 = q;
    while (*p2 <= *p1) p2--;
    return p2;
}

void Swap(unsigned *p,unsigned *q)
{
    *p=*p^*q;
    *q=*p^*q;
    *p=*p^*q;
}

void Reverse(unsigned *p,unsigned *q)
{
    while(p<q)
    {
        Swap(p++,q--);
    }
}

void Print(unsigned *q)
{
    

}

void Prem( )   //full_permutation function
{

    unsigned *pEnd = mid + midn - 1;
    unsigned *p = pEnd;  //p is the next replace point
    //q is the point one past p, pMax is The minimum number  larger than p
    unsigned *q ,*pMax;

    while (p !=  mid)          //p == s over
    {
        q = p;

        p--;

        if (*p < *q)
        {
            pMax = FindMaxForOne(p,pEnd);  //find the piont that swap with p
            Swap(p,pMax);         
            Reverse(q,pEnd);       //Inversion of all Numbers after p
            Print(q);              
            p = pEnd;             //replace p with the end, next loop
        }


        if (mid == p) break;           


    }
}

int main(int argc,char *argv[])
{
	return 0;
}
