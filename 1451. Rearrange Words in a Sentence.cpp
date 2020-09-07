class Solution {
public:
    string arrangeWords(string text) {
        
    text[0] = tolower(text[0]);
    stringstream ss(text), rs;
    string word;
    map<int, string> m;
    while (ss >> word) m[word.size()] += word + " ";    
        
    //see now all words are broken as individual strings, passed to "words"
    //so when we hit a word of length, ie. word.size() of "i", we assigne that to m[i]
    //add space at end so that when we output all of then have a space at the end
    //beauty: when we hit strings with same length, tehya re assigned to m[i], in the exact order   of what is enountered in teh input
    
    for (const auto& pair: m) rs << pair.second;
        
    for (const auto& pair: m)
        cout << "p=" << pair.first << "  " << pair.second<<endl;
        
    string result = rs.str();
    cout << result << "." <<endl;   //put a dot to see where the line is ending, clearly there is a space at the ending.  
        
    result.pop_back();   // to remove space at end, which we added before 
    result[0] = toupper(result[0]); //first char should be uppercase 
    return result;
    }
};
