#include "filereader.h"


//store row in vector
vector<string>Filereader::fileToline(fstream& textFile){
    string line;    
    vector<string> lines;

    if(textFile.is_open()){
        while(getline(textFile, line)){               
            lines.push_back(line);
        }
        textFile.close();
    }else{
        cout<<"file not found";
    }    
    return lines;
    
}

//split into columns (question, answer, solution), store in 2d Vector
vector<vector<string>>Filereader::lineTovect2d(vector<string>lines){
    size_t n;
    vector<vector<string>>qA;

    for(int i = 0; i < lines.size(); i++){
        qA.resize(lines.size());
        string delimiter = ",";
        string token;
        n = count(lines[i].begin(), lines[i].end(), ',');
        for(int j = 0; j < (n+1); j++){
            qA[i].resize(n+1);
            token= lines[i].substr(0,lines[i].find(delimiter)); 
            qA[i][j] = token;
            token = lines[i].erase(0,lines[i].find(delimiter) + delimiter.length());            
        }          
    }
    return qA;
}
