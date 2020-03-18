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
    string text = "xxx weaver yyy";
    CHECK(find(text,"weaver") == string("weaver"));
    CHECK(find(text,"veawer") == string("weaver"));
    CHECK(find(text,"veaver") == string("weaver"));
    CHECK(find(text,"weawer") == string("weaver"));
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


/* Add more test cases here */
