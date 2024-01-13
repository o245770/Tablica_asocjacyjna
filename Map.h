#ifndef __MAP_H__
#define __MAP_H__

#include <iostream>
#include <vector>

using namespace std;

template <class CK, class CV>

class Map
{
private:
	class Pair
	{	
	public:
		CV value; //empl
		CK key;  //id
		Pair(CK k, CV v) : value(v), key(k){};
		
		friend ostream& operator << (ostream& stream, const Pair& p) 
		{
			stream << p.key<<": "<< p.value;
			
			return stream;
		}
	};
	
	vector<Pair> elements;
public:
};

#endif

