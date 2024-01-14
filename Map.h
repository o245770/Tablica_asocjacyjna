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
		CV value; 
		CK key; 
		Pair(CK k, CV v) : value(v), key(k){};
		
		friend ostream& operator << (ostream& stream, const Pair& p) 
		{
			stream << p.key<<": "<< p.value;
			
			return stream;
		}
	};
	
	vector<Pair> elements;
public:
	Map() {};
	
	Map (const Map &db)
	{
		for(unsigned int i=0; i<db.elements.size(); i++)
		{
			elements.push_back(db.elements[i]);
		}	
	}
	
	void add(CK k, CV v)	
	{
		elements.push_back(Pair(k, v));
	}
	
	CV* find(CK ky)
	{
		for(unsigned int i=0; i<elements.size(); i++)
		{
			if(elements[i].key == ky) return &elements[i].value;
		}
		
		throw out_of_range("Failed to find the key");
	}
	
	friend ostream& operator << (ostream& stream, const Map& m) 
	{
		for(unsigned int i=0; i<m.elements.size(); i++)
		{
			stream << m.elements[i]<<endl;
		}
		return stream;
	}
};

#endif
