map<int,int> g[MaxN];

int DFS_Bosques(int p , int h){
	// g[p] los hijos de pabre (p);
	//  cout << "nodo actual :"<< h << endl; 
	// cout << "padre : " << p << endl;
	// cout << "# hijos de h: " << g[h].size() << endl;
	if(g[h].size() < 1 ){
		return 1;
	}
	int res = 1;
	// Calculo los bosques de sus hijos y los sumo;
	 for (map<int,int>::iterator it=g[h].begin(); it!=g[h].end(); ++it){

	 	// cout << "hijo h: " << it->first  << endl;
		if(  it->first != p){
			
			// Calculo los hijos de mi i-esimo hijo
			g[h][it->first] = DFS_Bosques(h,it->first);
			
			 // cout << "bosque de hijo i de h: " << it->second << endl;

			res += g[h][it->first];
		}
	}
	return res;
}