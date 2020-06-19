#include<bits/stdc++.h>
using namespace std;

int main(){
string x;
cin >> x;
int n = x.length();
char ans[n];
for(int i=0;i<n;i++) ans[i] = ' ';
int arr[26] = {0};
for(int i=0;i<n;i++){
	arr[x[i]-'A']++;
}
int o,e;
o=e=0;
int pos = -1;
for(int i=0;i<26;i++){
	if(arr[i]%2 == 0){
		e++;
	}
	else{
		o++;
		pos = i;
	}
}

if(n%2 == 0 && o != 0){
	cout << "NO SOLUTION";
	return 0;
}
else if(n%2 != 0 && o != 1){
	cout << "NO SOLUTION";
	return 0;
}
else if(n%2 == 0 && o == 0){
     int k = 0;
    for(int i=0;i<26;i++){
		for(int j=0;j<arr[i];j+=2){
			ans[k] = (i+65);
			ans[n-1-k] = (i+65);
			k++;
		}
    }
}
else if(n%2 != 0 && o == 1){
	  int k = 0;
	arr[n/2] = (pos+65);
	arr[pos]--;
    for(int i=0;i<26;i++){
		for(int j=0;j<arr[i];j+=2){
			ans[k] =(i+65);
			ans[n-1-k] = (i+65);
			k++;
		}
    }
}

for(int i=0;i<n;i++){
	cout << ans[i];
}

return 0;
}
