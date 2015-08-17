struct trie {
	map <char, int> sig ;
	bool final ;
};
trie t[MaxN] ;
int n;
void initTrie(){
	n = 1;
	t[0].sig.clear () ;
	t[0].final = false ;
}
void insertar( string st  ) {
	int pos = 0;
	for (int i = 0 ;i <st.size () ; i ++){
		if(t[pos].sig.find(st[i]) == t[pos].sig.end()){
			t[pos].sig[st[i]] = n;
			t[n].sig.clear() ;
			t[n].final = false ;
			n++;
		}
		pos = t[pos].sig[st[i]] ;
		
	}
	t[pos].final = true ;
}