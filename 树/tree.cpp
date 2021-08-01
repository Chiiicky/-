//
//  tree.cpp
//  数据结构
//
//  Created by Chiiicky Chen on 2021/7/31.
//

#include "tree.hpp"
#include <iostream>
using namespace std;

/*
 *    功能：初始化树
 *    入参：树指针
 *    返回值：无
 */
void InitializeTree(Tree *ptree){
    *ptree=NULL;
}

/*
 *    功能：在树中查找element的id值或name值
 *    入参：需要查找的id值或name值 树指针
 *    返回值：指向该节点的指针
 */
//int Search(const Tree *ptree, string name){
//
//}
TreeNode *Search(TreeNode *ptree, int key){
    TreeNode *assistPointer=ptree;
    if (assistPointer==NULL)
        return NULL;
    if (assistPointer->element.id==key) {
        return assistPointer;
    } else if (assistPointer->element.id<key) {
        if (assistPointer->right==NULL) {
            return NULL;
        }
        return Search(assistPointer->right, key);
    }
    if (assistPointer->left==NULL) {
        return NULL;
    }
    return Search(assistPointer->left, key);
}

/*
 *    功能：找到父节点
 *    入参：树指针 id值
 *    返回值：指向父节点的指针
 */
TreeNode *FindParent(TreeNode *ptree, int key){
    TreeNode *assistPointer=ptree;
    //    cout << static_cast<const void *>(assistPointer) << endl;       //此处第一次应该输出根节点的地址
    if(assistPointer->element.id<key){
        if (assistPointer->right!=NULL) {
            return FindParent(assistPointer->right, key);
        } else {
            return assistPointer;
        }
    } else {
        if (assistPointer->left!=NULL) {
            return FindParent(assistPointer->left, key);
        } else {
            return assistPointer;
        }
    }
}

/*
 *    功能：在树中插入id值为i的结点，name值默认为NULL
 *    入参：id值与name值
 *    返回值：若已有id值相同的结点，且name值也相同，返回1，否则，返回0
 */
bool Insert(Tree *ptree, int id){
    TreeNode *assistPointer=*ptree, *temp;
    temp=(TreeNode *)malloc(sizeof(TreeNode));
    temp->element.id=id; temp->left=NULL; temp->right=NULL;
    if (*ptree==NULL) {
        *ptree=temp;
        return 0;
    }
    if (Search(assistPointer, id)) {
        return 1;
    }
    assistPointer=FindParent(assistPointer, id);
    if (assistPointer->element.id<id) {
        assistPointer->right=temp;
    } else {
        assistPointer->left=temp;
    }
    return 0;
}

/*
 *    功能：遍历二叉树，并输出
 *    入参：树 指针
 *    返回值：无
 */
void Traverse(TreeNode *ptree){
    TreeNode *assistPointer=ptree;
    if (assistPointer==NULL){
        cout<<"This tree is empty..."<<endl; return;
    }
    Traverse(assistPointer->left);
    cout<<assistPointer->element.id<<' ';
    Traverse(assistPointer->right);
    
}
