#include<iostream>
#include<unordered_map>

using namespace std;

class Solution {
public:
    int calculateTime(string keyboard, string word) {
        int out=0;
        int time_move=0;
        unordered_map<char,int> keyboard_map;
        for(int i=0;i<keyboard.size();i++){
            keyboard_map.insert(make_pair(keyboard[i],i));
        }
        for(int i=0;i<word.size();i++){
            auto it=keyboard_map.find(word[i]);
            if(it!=keyboard_map.end()){
                time_move=keyboard_map[word[i]]-time_move;
                out+=time_move;
            }
            else{
                return 0;
            }
        }
        return out;
    }
};