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
			
		for (int j=0; (j < i) && (i>0) ; j++)			
			if (balls[i] == balls[j])
				i--;
				
		cout << balls[i] << endl;
		}
			
	delete [] balls;
	
	}
