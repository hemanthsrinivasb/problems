#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;cin>>t;
  int count=0;
	while(t--){
	    int days;cin>>days;


	    int cf[days];
	    for(int i=0;i<days;i++){
	        cin>>cf[i];
	    }
	   //  int m;cin>>m;
	    int cfna[days];
	    for(int i=0;i<days;i++){
	        cin>>cfna[i];

	    }

	    for(int j=0;j<days;j++){
	        if(cf[j]>0 && cfna[j]>0){
	            count++;
	        }
	        else{
	            count=0;
	        }
	    }
      cout<<count<<endl;


	}

	return 0;
}
