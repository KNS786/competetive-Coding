#include<iostream>
using namespace std;
class UF{
	private :
	  vector<int>id;
	public:
	 UF(int n){
		 for(int i=0;i<n;i++)
		 {   cin>>id[i];
	         id[i]=i;      }
		 
	 }
	 bool connected(int p,int q)
	 {
		 return id[p]==id[q];
	 }
	 void unions(int p,int q){
		 int pid=id[p];
		 int qid=id[q];
		 for(int i=0;i<id.size();i++)
			 if(id[i]==pid) id[i]=qid;
	 }
	
};

int main(){
	int n;
	cin>>n;
	UF u(n);
	
}