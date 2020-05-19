#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
#define MAX 200005
int Array[MAX] , dp[MAX];
int Left[MAX] , Right[MAX];
stack<int> S;
 
int main(){
	int N , i;
	cin >> N;
 
	for( i = 1 ; i <= N ; ++i )
		cin >> Array[i];
 
	Left[1] = 1;
	S.push( 1 );
	int x;
 
	for( i = 2 ; i <= N ; ++i ){
		while( !S.empty() ){
			x = S.top();
			if( Array[x] >= Array[i] ) S.pop();
			else{ 
				Left[i] = x + 1;	
				break;
			}
		}
 
		if( S.empty() ) Left[i] = 1;
		S.push( i );
	}
 
	while( !S.empty() )
		S.pop();
 
	Right[N] = N;
	S.push( N );
 
	for( i = N - 1 ; i >= 1 ; --i ){
		while( !S.empty() ){
			x = S.top();
			if( Array[x] >= Array[i] ) S.pop();
			else{ 
				Right[i] = x - 1;	
				break;
			}
		}
 
		if( S.empty() ) Right[i] = N;
		S.push( i );
	}
 
	for( i = 1 ; i <= N ; ++i ){
		x = Right[i] - Left[i] + 1;
		dp[x] = max( dp[x] , Array[i] );
	}
 
	for( i = N ; i >= 1 ; --i )
		dp[i] = max( dp[i] , dp[i + 1] );
 
	for( i = 1 ; i <= N ; ++i )
		cout << dp[i] << " ";
 
	return 0;
}