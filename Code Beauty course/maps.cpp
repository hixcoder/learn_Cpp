/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maps.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboumahd <hboumahd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 11:39:08 by hboumahd          #+#    #+#             */
/*   Updated: 2022/12/11 12:00:34 by hboumahd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <map>
#include <unordered_map>
#include <string>

using namespace std;

// all keys have to be unique
// values don't have to be unique

int main()
{
    // ordered map
    map<string, string>    myDictionary;
    myDictionary.insert(pair<string, string>("strawberry", "friza"));
    myDictionary.insert(pair<string, string>("banana", "lbanan"));
    myDictionary.insert(pair<string, string>("orange", "tchin, limon, lmandarin"));
    myDictionary.insert(pair<string, string>("apple", "tofa7aton"));

    // how to change the value of an element
    myDictionary["banana"] = "lbanan dial agadir...";
    
    // how to get the size of the map
    cout << "the size : " << myDictionary.size() << endl << endl;
    
    // how to clear all the elements from the map
    myDictionary.clear();

    // how to use loops with map
    for(auto pair:myDictionary)
        cout << pair.first << " - " << pair.second << endl;

    cout << endl;
    // unordered map
    unordered_map<string, string>    myDictionary2;
    myDictionary2.insert(pair<string, string>("strawberry", "friza"));
    myDictionary2.insert(pair<string, string>("banana", "lbanan"));
    myDictionary2.insert(pair<string, string>("orange", "tchin, limon, lmandarin"));
    myDictionary2.insert(pair<string, string>("apple", "tofa7aton"));

     for(auto pair:myDictionary2)
        cout << pair.first << " - " << pair.second << endl;
}