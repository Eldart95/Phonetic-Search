/**
 * An example of how to write unit tests.
 * Use this as a basis to build a more complete Test.cpp file.
 * 
 * IMPORTANT: Please write more tests - the tests here are only for example and are not complete.
 * 
 * Date: 2020-02
 */

#include "doctest.h"
#include "PhoneticFinder.hpp"
using namespace phonetic;

#include <string>
using namespace std;



TEST_CASE("Test replacement of p and b") {
    string text = "xxx happy yyy";
    CHECK(find(text, "happy") == string("happy"));
    CHECK(find(text, "habby") == string("happy"));
    CHECK(find(text, "hapby") == string("happy"));
    CHECK(find(text, "habpy") == string("happy"));
}

TEST_CASE("Test replacement of lower-case and upper-case") {
    string text = "Happi xxx yyy";
    CHECK(find(text, "happi") == string("Happi"));
    CHECK(find(text, "Happi") == string("Happi"));
    CHECK(find(text, "HAPPI") == string("Happi"));
    CHECK(find(text, "HaPpI") == string("Happi"));
    CHECK(find(text, "hApPi") == string("Happi"));
    CHECK(find(text, "haPpi") == string("Happi"));
    CHECK(find(text, "HaPPI") == string("Happi"));
}

TEST_CASE("Test replacement of v and w"){
    string text = "xxx waever yyy";
    CHECK(find(text,"weaver") == string("waever"));
    CHECK(find(text,"veawer") == string("waever"));
    CHECK(find(text,"veaver") == string("waever"));
    CHECK(find(text,"weawer") == string("waever"));
}

TEST_CASE("Test replacement of b,f and p"){
    string text = "xxx bro yyy for zzz prince";
    CHECK(find(text,"bro") == string("bro"));
    CHECK(find(text,"fro") == string("bro"));
    CHECK(find(text,"pro") == string("bro"));
    CHECK(find(text,"prince") == string("prince"));
    CHECK(find(text,"brince") == string("prince"));
    CHECK(find(text,"frince") == string("prince"));
    CHECK(find(text,"for") == string("for"));
    CHECK(find(text,"bor") == string("for"));
    CHECK(find(text,"por") == string("for"));
}

TEST_CASE("Test replacement of g and j"){
    string text = "xxx jeoy yyy gargamel";
    CHECK(find(text,"joey") == string("jeoy"));
    CHECK(find(text,"goey") == string("jeoy"));
    CHECK(find(text,"jarjamel") == string("gargamel"));
    CHECK(find(text,"garjamel") == string("gargamel"));
    CHECK(find(text,"jargamel") == string("gargamel"));
}

TEST_CASE("Test replacement of c,k and q"){
    string text = "hello, can you quit, king";
    CHECK(find(text,"cuit") == string("quit"));
    CHECK(find(text,"kuit") == string("quit"));
    CHECK(find(text,"can") == string("can"));
    CHECK(find(text,"kan") == string("can"));
    CHECK(find(text,"qan") == string("can"));
    CHECK(find(text,"king") == string("king"));
    CHECK(find(text,"qing") == string("king"));

}

TEST_CASE("Test replacement of s and z"){
    string text = "zhalom friends";
    CHECK(find(text,"shalom") == string ("zhalom"));
    CHECK(find(text,"friends") == string ("friends"));
    CHECK(find(text,"friendz") == string ("friends"));
    CHECK(find(text,"zhalom") == string ("zhalom"));
}

TEST_CASE("Test replacemnt of d and t"){
    string text = "i have been to dreamland";
    CHECK(find(text,"tream") == string("dream"));
    CHECK(find(text,"do") == string("to"));
    CHECK(find(text,"dream") == string("dream"));
    CHECK(find(text,"to") == string("to"));  
}

TEST_CASE("Test replacement of o and u"){
    string text = "oh boy, how are you";
    CHECK(find(text,"yuu") == string("you"));
    CHECK(find(text,"yoo") == string("you"));
    CHECK(find(text,"you") == string("you"));
    CHECK(find(text,"yuo") == string("you"));
    CHECK(find(text,"boy") == string("boy"));
    CHECK(find(text,"buy") == string("boy"));
    CHECK(find(text,"how") == string("how"));
    CHECK(find(text,"huw") == string("how"));
    CHECK(find(text,"oh") == string("oh"));
    CHECK(find(text,"uh") == string("oh"));
}

TEST_CASE("Test replacement of y and w"){
    string text = "why where";
    CHECK(find(text,"where")== string("where"));
    CHECK(find(text,"yhere")== string("yhere"));
    CHECK(find(text,"why")== string("why"));
    CHECK(find(text,"yhy")== string("who"));
     
}




//

/* Add more test cases here */
