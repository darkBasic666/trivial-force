map<int,int> g[MaxN];


int centroide(int pos,int p,int m){
	bool cent = true;
 	// cout << "pos : " << pos << endl;
 	// cout << "p : " << p << endl;
 	for (map<int,int>::iterator it=g[pos].begin(); it!=g[pos].end(); ++it){
 		// cout << "bosque de hijo " << it->first << " : " << it->second << endl; 
 		if(  it->first != p && it->second > m/2 )
 			cent = false;
 	}

 	 // cout << "centroide : " << cent << endl;
 	if(cent){
 		return pos;
 	}else{
 		for (map<int,int>::iterator it=g[pos].begin(); it!=g[pos].end(); ++it){
 			if( it->first != p )
 				return centroide(it->first,pos,m);
 		}
 	}
} 