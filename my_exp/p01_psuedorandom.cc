//psuedo random sequence gen
#include <iostream>
using namespace std;
void lottery(int, int);

int main(){
	lottery(49,6);
	return 0;
}

void lottery(int maxnum, int trails){
	if (trails > maxnum)
	return ;
	srand(time(NULL));
	
	int *balls = new int[trails];
	for (int i=0; i<trails; i++){
		balls[i] = rand()%maxnum; 
		cout << balls[i] << endl;
		if ( i==0)
				continue;
		
		for (int j=0; j < i ; j++)			
			if (balls[i] == balls[j])
				i--;
		}
	delete [] balls;
	
	}
