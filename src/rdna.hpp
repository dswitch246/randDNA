string randDNA ( int seed, string l, int num)

{
	 std::random_dna rd;
    	 std::mt19937 eng1(seed);
	 std::normal_int_distribution<> norm(min, max);

	int min = 1;
	int max= 4;

	for(int n=1 ;  n < 5 ; n++) 
  	{
        	cout<<norm(l)<<" ";
   	}


	

