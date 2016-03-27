#include<iostream>
#include<algorithm>

template<typename T>
T* FindMaxForOne(T *p,T *q)
{
    T *p1 = p;
    T *p2 = q;
    while (*p2 <= *p1) p2--;
    return p2;
}

template<typename T>
void Swap(T *p,T *q)
{
	T temp;
	temp = *p;
	*p = *q;
	*q = temp;

	/**p=*p^*q;
    *q=*p^*q;
    *p=*p^*q;*/
}

template<typename T>
void Reverse(T *p,T *q)
{
    while(p<q)
    {
        Swap(p++,q--);
    }
}

template<typename T>
void Print(T *num, unsigned n)
{
  for(unsigned i=0;i<n;i++)
  {
      std::cout<<num[i];
  }
    std::cout<<std::endl;
}

template<typename T>
void Prem( T *num, unsigned n )   //full_permutation function
{

    T *pEnd = num + n - 1;
    T *p = pEnd;  				  //p is the next replace point

    T *q ,*pMax;				  //q is the point one past p, pMax is The minimum number  larger than p

    std::stable_sort( num, num+n );
    Print(num,n);

    while (p !=  num)          //p == s over
    {
        q = p;

        p--;

        if (*p < *q)
        {
            pMax = FindMaxForOne(p,pEnd);  //find the piont that swap with p
            Swap(p,pMax);
            Reverse(q,pEnd);       //Inversion of all Numbers after p
            Print(num,n);
            p = pEnd;             //replace p with the end, next loop
        }


        if (num == p) break;


    }
}

int main(int argc,char *argv[])
{
    int a[5]={9,8,7,6,5};


    Prem( a, 5 );

     int n=5,p[5]={ 3, 0, 1, 2, 4 };

    //it do some thing like the code blow
    /*std::stable_sort(p,p+n);
    do{
        for(int i=0;i<n;i++)
            std::cout<<p[i];

          std::cout<<std::endl;
    }while(std::next_permutation(p,p+n));*/

	return 0;
}
