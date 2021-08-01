////
////  main.cpp
////  数据结构
////
////  Created by Chiiicky Chen on 2021/7/31.
////
//
//#include <stdio.h>
//#include "tree.hpp"
//#include <string>
//using namespace std;
//
//int main(){
//    Tree tree;
//    InitializeTree(&tree);
//    cout<<"Type 'ini' to initialize"<<endl<<"Type 'sch' to search"<<endl;
//    cout<<"Type 'ins' to insert"<<endl<<"Type 'tra' to traverse"<<endl;;
//    string s; cin>>s;
//    int id; bool b;
//    while (s!="end") {
//        if (s=="ini") {
//            InitializeTree(&tree);
//            cout<<"Initialization completed..."<<endl;
//        } else if (s=="sch") {
//            cout<<"Please enter an ID: ";
//            cin>>id;
//            if (Search(tree, id)) {
//                cout<<"This ID exists..."<<endl;
//            } else {
//                cout<<"This ID does not exist..."<<endl;
//            }
//        } else if (s=="ins") {
//            cout<<"Please enter an ID: ";
//            cin>>id;
//            b=Insert(&tree, id);
//            if (b) {
//                cout<<"This ID already exists..."<<endl;
//            } else {
//                cout<<"Insert completed..."<<endl;
//            }
//        } else if (s=="tra") {
//            cout<<"Here are folowing IDs:"<<endl;
//            Traverse(tree);
//            cout<<endl;
//        }
//        cin>>s;
//    }
//
//    return 0;
//}
