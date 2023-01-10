#include<iostream>

#include<math.h>

using namespace std;

int main (){
	int n = 3;
	float x[10],y[10],xy[10],xx[10],yy[10];
	float sumx = 0,sumy = 0, sum = 0, sumxy = 0;
	float sumxx = 0, sumyy = 0, sumx2 = 0, sumy2 = 0;
	float r,rd;
	for (int i = 1; i<=n; i++) {
		cout << "masukkan data x ke " << i << " : "; cin >> x[i];
		cout << "masukkan data y ke " << i << " : "; cin >> y[i];
		sumx += x[i];
		sumy += y[i];
		xy[i] = x[i] * y[i];
		sumxy += xy[i];
		xx[i] = x[i] * x[i];
		yy[i] = y[i] * y[i];
		sumxx += xx[i];
		sumyy += yy[i];
	
	}
	
	cout << "" << endl;
	cout << "" << endl;
	cout << "sigma x : " << sumx << endl;
	cout << "sigma y : " << sumy << endl;
	cout << "sigma xy : " << sumxy << endl;
	cout << "sigma x kuadrat : " << sumxx << endl;
	cout << "sigma y kuadrat : " << sumyy << endl;
	sumx2 = sumx * sumx;
	sumy2 = sumy * sumy; 
	cout << "sigma x yang dikuadratkan : " << sumx2 << endl;
	cout << "signa y yang dikuadratkan : " << sumy2 << endl;
	
	r = (n * sumxy -sumx * sumy) / sqrt((n * sumxx - sumx * sumx) * (n * sumyy - sumy * sumy)); 
	cout << "nilai korelasi pearson(r)	 : " << r << endl;
	rd  = r * r * 100 / 100;
	cout << "nilai koefisien determinasi : " << rd << endl;
	
	
}
