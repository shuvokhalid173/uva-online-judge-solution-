
    #include <iostream>
    using namespace std;

    main ()
    {
        long long a, p, x, sq;
       
        while (cin >> a >> p && (a!=-1 || p!=-1))
        {
            x=a%p;
            sq=0;
            while (sq*sq<x) 
			sq++;
            if (sq*sq==x) 
			cout << "Yes\n";
            else
		    cout << "No\n";
        }
        return 0;
    }
