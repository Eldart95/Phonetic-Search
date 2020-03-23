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

TEST_CASE("Test_2_ replacement of lower-case and upper-case") {
    string text = "Pink floyd";
    CHECK(find(text, "pink") == string("Pink"));
    CHECK(find(text, "PinK") == string("Pink"));
    CHECK(find(text, "PInk") == string("Pink"));
    CHECK(find(text, "PINK") == string("Pink"));
    CHECK(find(text, "FLOYD") == string("floyd"));
    CHECK(find(text, "floyd") == string("floyd"));
    CHECK(find(text, "floyD") == string("floyd"));
}

TEST_CASE("Test_3_ replacement of lower-case and upper-case") {
    string text = "Camel King Crimson QUEEN LED ZEPPLIN linKIN PARK RHCP";
    CHECK(find(text, "camel") == string("Camel"));
    CHECK(find(text, "caMEL") == string("Camel"));
    CHECK(find(text, "crimson") == string("Crimson"));
    CHECK(find(text, "CRImson") == string("Crimson"));
    CHECK(find(text, "led") == string("LED"));
    CHECK(find(text, "linkin") == string("linKIN"));
    CHECK(find(text, "rhCp") == string("RHCP"));
    CHECK(find(text, "RhCp") == string("RHCP"));
    CHECK(find(text, "rHCp") == string("RHCP"));
}

TEST_CASE("Test_4_ replacement of lower-case and upper-case") {
    string text = "ONCE upon a time in HollyWood and Django UNCHAIND by Quentin Tarantino";
    CHECK(find(text, "once") == string("ONCE"));
    CHECK(find(text, "Once") == string("ONCE"));
    CHECK(find(text, "hollywood") == string("HollyWood"));
    CHECK(find(text, "hollyWOOD") == string("HollyWood"));
    CHECK(find(text, "django") == string("Django"));
    CHECK(find(text, "DJANGO") == string("Django"));
    CHECK(find(text, "quentin") == string("Quentin"));
    CHECK(find(text, "Quentin") == string("Quentin"));
    CHECK(find(text, "qUenTin") == string("Quentin"));
    CHECK(find(text, "quenTIN") == string("Quentin"));
    CHECK(find(text, "quentIn") == string("Quentin"));
    CHECK(find(text, "QUENTIN") == string("Quentin"));
    CHECK(find(text, "quenTIN") == string("Quentin"));
    CHECK(find(text, "quentIN") == string("Quentin"));
    CHECK(find(text, "QUenTIN") == string("Quentin"));
}

TEST_CASE("Test replacement of v and w"){
    string text = "xxx weaver yyy";
    CHECK(find(text,"weaver") == string("weaver"));
    CHECK(find(text,"veawer") == string("weaver"));
    CHECK(find(text,"veaver") == string("weaver"));
    CHECK(find(text,"weawer") == string("weaver"));
}

TEST_CASE("Test_2_ replacement of v and w"){
    string text = "xxx viva la vida yyy";
    CHECK(find(text,"viva") == string("viva"));
    CHECK(find(text,"wida") == string("vida"));
    CHECK(find(text,"wiwa") == string("viva"));
    CHECK(find(text,"wida") == string("vida"));
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
    CHECK(find(text,"jeoy") == string("jeoy"));
    CHECK(find(text,"geoy") == string("jeoy"));
    CHECK(find(text,"jarjamel") == string("gargamel"));
    CHECK(find(text,"garjamel") == string("gargamel"));
    CHECK(find(text,"jargamel") == string("gargamel"));
}

TEST_CASE("Test replacement of c,k and q"){
    string text = "xxx quit yyy";
    CHECK(find(text,"cuit") == string("quit"));
    CHECK(find(text,"kuit") == string("quit"));

}
TEST_CASE("Test_2_ replacement of c,k and q"){
    string text = "xxx can yyy";
    CHECK(find(text,"can") == string("can"));
    CHECK(find(text,"kan") == string("can"));
    CHECK(find(text,"qan") == string("can"));

}
TEST_CASE("Test_3_ replacement of c,k and q"){
    string text = "xxx king yyy";

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

TEST_CASE("Test_2_ replacement of s and z"){
    string text = "sasami open";
    CHECK(find(text,"sasami") == string ("sasami"));
    CHECK(find(text,"zazami") == string ("sasami"));
    CHECK(find(text,"zasami") == string ("sasami"));
    CHECK(find(text,"sazami") == string ("sasami"));
}

TEST_CASE("Test replacemnt of d and t"){
    string text = "to xoxo";
    CHECK(find(text,"do") == string("to"));
    CHECK(find(text,"to") == string("to"));  
}

TEST_CASE("Test_2_ replacemnt of d and t"){
    string text = "i  dream zzz";
    CHECK(find(text,"tream") == string("dream"));
    CHECK(find(text,"dream") == string("dream"));
}

TEST_CASE("Test_3_ replacemnt of d and t"){
    string text = "dont";
    CHECK(find(text,"dont") == string("dont"));
    CHECK(find(text,"tond") == string("dont"));
    CHECK(find(text,"tont") == string("dont"));
    CHECK(find(text,"tont") == string("dont"));
}

TEST_CASE("Test replacement of o and u"){
    string text = "oh boy, how are you";
    CHECK(find(text,"yuu") == string("you"));
    CHECK(find(text,"yoo") == string("you"));
    CHECK(find(text,"you") == string("you"));
    CHECK(find(text,"yuo") == string("you"));
    CHECK(find(text,"how") == string("how"));
    CHECK(find(text,"huw") == string("how"));
    CHECK(find(text,"oh") == string("oh"));
    CHECK(find(text,"uh") == string("oh"));
}

TEST_CASE("Test_2_ replacement of o and u"){
    string text = "boy xxx zzz yyy";
    CHECK(find(text,"boy") == string("boy"));
    CHECK(find(text,"buy") == string("boy"));
}

TEST_CASE("Test replacement of y and i"){
    string text = "why where";
    CHECK(find(text,"why")== string("why"));
    CHECK(find(text,"whi")== string("why"));
     
}
TEST_CASE("Test_2_ replacement of y and i"){
    string text = "yonderland";
    CHECK(find(text,"yonderland")== string("yonderland"));
    CHECK(find(text,"ionderland")== string("yonderland"));
     
}

TEST_CASE("Test_3_ replacement of y and i"){
    string text = "xxxxxxxxxxx zypher song zzzzzz";
    CHECK(find(text,"zypher")== string("zypher"));
    CHECK(find(text,"zipher")== string("zypher"));
     
}




//

/* Add more test cases here */
