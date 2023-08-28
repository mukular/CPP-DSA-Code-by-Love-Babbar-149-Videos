// some string functions from cplusplus and geeksforgeeks
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string st1 = "Hello mukul garg";
    // st.begin() returns iterator to beginning
    auto it = st1.begin();
    cout<<*it<<endl;
    // st.end() returns iterator to end // means pointing to next of last index
    auto it1 = st1.end();
    cout<<*(--it1)<<endl;
    // st1.length() or st1.size() Returns the length of the string, in terms of bytes.
    int len1 = st1.length();
    int len2 = st1.size();
    cout<<len1<<" "<<len2<<endl;
    // st1.resize() Resizes the string to a length of n characters.
    // Complexity generally up to linear in the new string length.
    cout<<st1<<endl;
    st1.resize(len1+4, '@');
    cout<<st1<<" "<<st1.length()<<endl;
    st1.resize(7);
    cout<<st1<<" "<<st1.length()<<endl;
    // st1.empty() test if string is empty
    cout<<st1.empty()<<endl;
    // st1.clear() erases the contents of the string, which becomes an empty string 
    // Complexity generally constant.
    st1.clear();
    if(st1.empty())
    {
        cout<<"String st1 is empty which has length "<<st1.length();
    }
    else
    {
        cout<<"String st1 is not empty which has length "<<st1.length();
    }
    cout<<endl;
    st1 = "Now the string is fulfilled";
    cout<<st1<<endl;
    // st1[i] or st1.at(i) returns the character at the specified position in the string.
    cout<<st1[0]<<" "<<st1[5]<<endl;
    cout<<st1.at(0)<<" "<<st1.at(st1.length()-2)<<endl;
    // st1.push_back() appends character c to the end of the string, increasing its length by one.
    cout<<st1<<" "<<st1.length()<<endl;
    st1.push_back('r');
    cout<<st1<<" "<<st1.length()<<endl;
    // st1.pop_back() erases the last character of the string, effectively reducing its length by one.
    // Complexity generally constant.
    st1.pop_back();
    st1.pop_back();
    st1.pop_back();
    cout<<st1<<" "<<st1.length()<<endl;
    // += or st1.append() extends the string by appending additional characters at the end of its current value:
    // Complexity generally up to linear in the new string length.
    st1 += " take ";
    string choco = "a break ";
    st1 += choco;
    cout<<st1<<endl;
    st1 += '\n';
    cout<<st1;
    
    string str = "";
    string str1 = "Programming ";
    string str2 = "and gaming is awesome";
    str.append(str1);
    cout<<str<<endl;
    str.append(str2, 11, 2);
    cout<<str<<endl;
    str.append("really cool ", 4);
    cout<<str<<endl;
    str.append(" nice ");
    cout<<str<<endl;
    str.append(str2.begin()+14, str2.end());
    cout<<str<<endl;

    // str.assign() assigns a new value to the string, replacing its current contents.
    string base="The quick brown fox jumps over a lazy dog.";
    str.assign(base);
    cout << str << '\n';
    str.assign(base,10,11);
    cout << str << '\n';     
    str.assign("pangrams are cool",7);
    cout << str << '\n';      
    str.assign("c-string");
    cout << str << '\n';       
    str.assign(10,'*');
    cout << str << '\n';     
    str.assign(base.begin()+16,base.end()-14);
    cout << str << '\n';       

    // str.insert() inserts additional characters into the string right before the character indicated by pos (or p):
    // Complexity generally up to linear in the new string length.
    string tr="to be question";
    string tr2="the ";
    string tr3="or not to be";
    string::iterator iter;
    int i = 1;
    tr.insert(6,tr2);          
    cout<<i++<<".";
    cout<<tr<<endl;
    tr.insert(6,tr3,3,5);     
    cout<<i++<<".";
    cout<<tr<<endl;
    tr.insert(10,"that is cool",6); 
    cout<<i++<<".";
    cout<<tr<<endl;
    tr.insert(5,"my blessing "); 
    cout<<i++<<".";
    cout<<tr<<endl;
    tr.insert(15,6,':');    
    cout<<i++<<".";
    cout<<tr<<endl;
    tr.insert (tr.end(),3,'?');    
    cout<<i++<<".";
    cout<<tr<<endl;
    iter = tr.insert(tr.begin()+5,',');
    cout<<i++<<".";
    cout<<tr<<endl;
    tr.insert (iter+5,tr3.begin(),tr3.begin()+4);
    cout<<i++<<".";
    cout<<tr<<endl;

    // str.replace() replaces the portion of the string that begins at character pos and spans len characters 
    // Complexity generally up to linear in the new string length.

    string mybase="this is a test string.";
    string mystr2="n example";
    string mystr3="sample phrase";
    string mystr4="useful.";

    // Using positions:   
    string mystr=mybase;          
    int j = 1;
    cout<<j++<<".";
    cout<<mystr<<endl;
    mystr.replace(9,5,mystr2);  
    cout<<j++<<".";
    cout<<mystr<<endl;
    mystr.replace(19,6,mystr3,7,6);
    cout<<j++<<".";
    cout<<mystr<<endl;
    mystr.replace(8,10,"just a");
    cout<<j++<<".";
    cout<<mystr<<endl;
    mystr.replace(8,6,"a shorty",5);
    cout<<j++<<".";
    cout<<mystr<<endl;
    mystr.replace(7,4,3,'!');   
    cout<<j++<<".";
    cout<<mystr<<endl;

    // Using iterators: nhi likha kyoki mujhe nhi lagta ki kuch kaam aayega
    // dekhna ho toh cplusplus website se dekh lena

    // str.erase() erases part of the string, reducing its length:
    // Complexity generally up to linear in the new string length.

    string mtr = "This is an example sentence.";
    cout << mtr << '\n';
                                        
    mtr.erase (10,8);                       
    cout << mtr << '\n';
                                    
    mtr.erase (mtr.begin()+9);              
    cout << mtr << '\n';
                
    mtr.erase (mtr.begin()+5, mtr.end()-9); 
    cout << mtr << '\n';
}