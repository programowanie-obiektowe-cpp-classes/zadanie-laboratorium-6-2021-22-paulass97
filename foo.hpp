#pragma once

#include "Human.hpp"

#include <algorithm>
#include <list>
#include <vector>
#include <numeric>

using namespace std;

vector< char > foo(list< Human >& people)
{
    vector< char > ret_v(people.size());

    for_each(people.begin(), people.end(), [](Human& i) {i.birthday(); });
    transform(people.begin(), people.end(), ret_v.rbegin(), [](Human& it) 
    {
      if (it.isMonster())
       {
    return ('n');
}
else
{
     return ('y');}
    });
  return ret_v;
}
