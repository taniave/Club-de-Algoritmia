#include <iostream>
#include <vector>

using namespace std;

typedef long long ll;

ll pot[10] = {1, 10, 100, 1000, 10000, 100000, 1000000, 10000000, 100000000, 1000000000};

bool isPrime(ll number){
		ll i = 5;
		if(number <= 1){
			return false;
		}
		else if(number <= 3){
		return true;
		}
		
		else if(number % 2 == 0 || number % 3 == 0){
			return false;
		}
		
		else{
			while(i*i <= number){
				if(number % i == 0 || number % (i + 2) == 0){
					return false;
				}
				i += 6;
			}
		}
		return true;
}

void buildLeftPrimes(){
	vector <int> leftPrimes[10]; //arreglo de listas ligadas
	ll number;
	leftPrimes[0].push_back(2);
	leftPrimes[0].push_back(3);
	leftPrimes[0].push_back(5);
	leftPrimes[0].push_back(7);
	
	
	for(int i = 1; i<10; i++){//potencias
		cout << leftPrimes[i-1].size() << endl;
		
		for(int j=1; j<10; j++){//numero
			
			for(int k=0; k < leftPrimes[i-1].size(); k++){//numbers
				
				number = (j * pot[i]) + leftPrimes[i - 1][k];
				
				if(isPrime(number)){
					
					leftPrimes[i].push_back(number);
				}
			}
		}
		
	}
	
}

int main() {
	
		buildLeftPrimes();
	return 0;
}

