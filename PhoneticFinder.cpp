#include <string>
#include <string.h>
#include <exception>
#include "PhoneticFinder.hpp"
#include <iostream>






    std::string toLower(std::string str){
        std::string temp = "";
        for(int i=0;i<str.length();i++){
            temp+=tolower(str[i]);
        }
        return temp;
    }

    int confused_char(char c1,char c2){
        if(c1==c2) return 1;
        if(c1=='v' && c2=='w') return 1; 
        if(c1=='w' && c2=='v') return 1;
        if(c1=='g' && c2=='j') return 1;
        if(c1=='j' && c2=='g') return 1;
        if(c1=='s' && c2=='z') return 1;
        if(c1=='z' && c2=='s') return 1;
        if(c1=='d' && c2=='t') return 1;
        if(c1=='t' && c2=='d') return 1;
        if(c1=='o' && c2=='u') return 1;
        if(c1=='u' && c2=='o') return 1;
        if(c1=='i' && c2=='y') return 1;
        if(c1=='y' && c2=='i') return 1;
        if(c1=='b' && c2=='f') return 1;
        if(c1=='f' && c2=='b') return 1;
        if(c1=='b' && c2=='p') return 1;
        if(c1=='p' && c2=='b') return 1;
        if(c1=='f' && c2=='p') return 1;
        if(c1=='p' && c2=='f') return 1;
        if(c1=='c' && c2=='k') return 1;
        if(c1=='k' && c2=='c') return 1;
        if(c1=='c' && c2=='q') return 1;
        if(c1=='q' && c2=='c') return 1;
        if(c1=='k' && c2=='q') return 1;
        if(c1=='q' && c2=='k') return 1;
        return 0;
    }

    std:: string confused_word(std::string a,std::string b){
        if(a.length()!=b.length()) return "NULL";
        for(int i=0;i<a.length();i++){
            if(!confused_char(a[i],b[i])) return "NULL";
        }
        return a;
    }
    struct Mexception : std::exception {
        const char* what() const throw() {
            const char* ex = "Did not find the word in the text";
            return ex;
            }
    };
    
    
    
    namespace phonetic {
     

    std:: string find(std::string text,std::string word) {
       if(text.length()==0 || word.length()==0) Mexception();
       std:: string lower_text = toLower(text);
       std:: string lower_word = toLower(word);
       std:: string ans="";
        
        int i=0;
        
        while(i<lower_text.length()) {
            
            if(confused_char(lower_text[i],lower_word[0])){
                std::string tempLower="";
                std::string temp="";
                while(text[i]!=' '){
                    if(text[i]=='\0') break;
                    tempLower+=lower_text[i];
                    temp+=text[i];
                    i++;
                }
                //FBP
                //fbp <-> bfp
                
                std:: string s = confused_word(tempLower,lower_word);
                if(s != "NULL") ans = temp;
                
                
                
            }
            if(text[i]=='\0') break;
            i++;
        }
        if(ans=="") throw Mexception();
       
        return ans;
    }

    

}