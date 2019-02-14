string randDNA ( int seed, string l, int num)

{
	 
    	 std::mt19937 eng1(seed);
	 

	int min = 0;
	int max= l.size()-1;

	std::uniform_int_distribution<> unifrm(min, max);
		

	string dseq="";
	for(int n=1 ; n <= num; n++) 
  	{
        	dseq+=unifrm(eng1);// l
		
   	}

	return dseq;
}

	


	

