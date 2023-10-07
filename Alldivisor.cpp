 void print_divisors(int n) {
        // Code here.
        set<int> s;
     for(int i=1; i<= sqrt(n); i++){
         if(n%i==0){
             s.insert(i);
              if(n/i != i){
              s.emplace(n/i);
         }
         
         }
     }
   // using iterator here
    for(auto it : s){
        cout<<it<<" ";
    }
    }
