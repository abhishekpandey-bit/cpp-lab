#include<iostream>
#include<vector>
//typedef std::vector<std::pair<std::string,int>> pairlist_t;
 
//typedef std::string text_t;
using text_t = std::string;
using number_t = int;

int main(){
    //pairlist_t pairlist;

//type def - reserved keyword used to create an additional name(alias) for another data type.
//              new identifier for an existing datatype
//             helps with readiblity and reduces steps
//              replaced with using keyword better with templates
     text_t firstname = "bro";
     std::cout<<firstname<<'\n';  
     number_t age = 19;
     std::cout<<age;



  
return 0;

}