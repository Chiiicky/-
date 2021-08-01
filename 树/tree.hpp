//
//  tree.hpp
//  数据结构
//  BST 二叉排序树
//  Created by Chiiicky Chen on 2021/7/31.
//

#ifndef tree_hpp
#define tree_hpp

#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;

//#define MAX_NAME_LENTH 50

typedef struct _ElementType{
    int id;
    //    char name[MAX_NAME_LENTH];
    //    string name;
}ElementType;

typedef struct _TreeNode{
    int index;
    ElementType element;
    struct _TreeNode * left;
    struct _TreeNode * right;
}TreeNode;

typedef TreeNode * Tree;        //指向结点的指针类型，可作为树的指针

/*
 *    功能：初始化树
 *    入参：树指针
 *    返回值：无
 */
void InitializeTree(Tree *ptree);

/*
 *    功能：在树中查找element的id值或name值
 *    入参：需要查找的id值或name值 树指针
 *    返回值：指向该节点的指针
 */
//int Search(const Tree *ptree, string name);
TreeNode *Search(TreeNode *ptree, int id);

/*
 *    功能：找到父节点
 *    入参：树指针 id值
 *    返回值：指向父节点的指针
 */
TreeNode *FindParent(TreeNode *ptree, int key);

/*
 *    功能：在树中插入id值为i的结点，name值默认为NULL
 *    入参：id值与name值
 *    返回值：若已有id值相同的结点，且name值也相同，返回1，否则，返回0
 */
bool Insert(Tree *ptree, int id);

/*
 *    功能：遍历二叉树，并输出
 *    入参：树 指针
 *    返回值：无
 */
void Traverse(TreeNode *ptree);

#endif /* tree_hpp */
