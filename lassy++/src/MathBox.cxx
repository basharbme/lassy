#define HAS_VTK 1

/* The Circle class (All source codes in one file) (CircleAIO.cpp) */
#include <iostream>    // using IO functions
#include <string>      // using string
#include "../include/MathBox.h"
using namespace std;



void MathBox::normalizeVector(double &a, double &b, double &c)
{
	double magn;
	magn = sqrt(pow(a, 2) + pow(b, 2) + pow(c, 2));
	a *= (1 / magn);
	b *= (1 / magn);
	c *= (1 / magn);
}


double MathBox::EuclideanDistance(double *p1, double *p2)
{
	double s  = pow(p1[0] - p2[0], 2) + pow(p1[1] - p2[1], 2) + pow(p1[2] - p2[2], 2); 
	return sqrt(s);
}


double MathBox::CalcMedian(vector<double> scores)
{
	double median;
	size_t size = scores.size();

	sort(scores.begin(), scores.end());

	if (size % 2 == 0)
	{
		median = (scores[size / 2 - 1] + scores[size / 2]) / 2;
	}
	else
	{
		median = scores[size / 2];
	}

	return median;
}


/*
* Calculates Mean from a list of values
*/
double MathBox::CalcMean(vector<double> scores)
{
	double sum = 0; double n = 0;
	for (int i = 0; i < scores.size(); i++)
	{
		sum += scores[i];
		n++;
	}

	return sum / n;
}

/*
* Calculates Mean from a list of values
*/
double MathBox::CalcStd(vector<double> scores, double mean)
{
	double sum = 0; double n = 0;
	for (int i = 0; i < scores.size(); i++)
	{
		sum += (mean-scores[i])*(mean - scores[i]); 
		n++;
	}

	return sqrt(sum / n);
}



