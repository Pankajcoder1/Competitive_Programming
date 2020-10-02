/*
	written by Pankaj Kumar.
	country:-INDIA
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll ;
typedef set<pair<int,int>> spi;
typedef set<pair<ll,ll>> spl;
typedef vector<pair<int,int>> vpi;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<bool> vb;
typedef vector<char> vc;
typedef vector<pair<ll,ll>> vpl;
typedef vector<string> vs;
typedef map<int,int>mi;
typedef map<ll,ll> ml;
typedef set<string> ss;
typedef set<char>sc;
typedef set<int> si;
typedef set<ll> sl;
#define pan cin.tie(0);cout.tie(0);ios_base::sync_with_stdio(0);
// define values.
#define mod 1000000007
#define phi 1.618
/* Bit-Stuff */
#define get_set_bits(a) (__builtin_popcount(a))
#define get_set_bitsll(a) ( __builtin_popcountll(a))
#define get_trail_zero(a) (__builtin_ctz(a))
#define get_lead_zero(a) (__builtin_clz(a))
#define get_parity(a) (__builtin_parity(a))
/*  Abbrevations  */
#define ff first
#define ss second
#define mp make_pair
#define line cout<<endl;
#define pb push_back
#define Endl "\n"
// loops
#define loop(i,start,end) for(ll i=ll(start);i<ll(end);i++)
#define loop0(num) for(ll i=0;i<ll(num);i++)
// Some print
#define no cout<<"NO"<<endl;
#define yes cout<<"YES"<<endl;
#define cc ll test;cin>>test;while(test--)
// function

ll power(ll x,ll y)
{
	ll res=1;
	while(y>0)
	{
		if(y%2==1)res*=x;
		y/=2; x*=x;
	}
	return res;
}
/* ascii value 
A=65,Z=90,a=97,z=122
*/
/*  -----------------------------------------------------------------------------------*/
// I took help from someone code.
struct tree
{
	struct tree *right;
	struct tree *left;
	ll pos;
	ll key;
};

struct tree *createnode(ll key,ll pos)
{
	struct tree *newnode;
	newnode=(struct tree*)malloc(sizeof(struct tree));
	newnode->right=NULL;
	newnode->left=NULL;
	newnode->pos=pos;
	newnode->key=key;
	return newnode;
}
struct tree* insert(struct tree* root,ll key,ll pos)
{
	if(root==NULL)
	{
		cout<<pos<<endl;
		return createnode(key,pos);
	}
	else if(root->key>key)
		root->left=insert(root->left,key,2*pos);
	else
		root->right=insert(root->right,key,2*pos+1);
	return root;
}

struct tree *deletenode(struct tree* root,ll key)
{
	if(root)
	{
		if(key<root->key)
			root->left=deletenode(root->left,key);
		else if(key>root->key)
			root->right=deletenode(root->right,key);
		else
		{
			// key found in tree
			if(root->left==NULL)
			{
				struct tree *temp=root->right;
				free(root);
				return temp;
			}
			else if(root->right==NULL)
			{
				struct tree *temp=root->left;
				free(root);
				return temp;
			}
			else
			{
				struct tree *temp=root->right;
				while(temp->left!=NULL)
					temp=temp->left;
				root->key=temp->key;
				root->right=deletenode(root->right,root->key);
			}
		}
	}
	return root;
}

void position(struct tree *root,ll key)
{
	if(root)
	{
		if(root->key==key)
		{
			cout<<root->pos<<endl;
			return ;
		}
		position(root->left,key);
		position(root->right,key);
	}
}
int main()
{
	pan;
	char c;
	ll key;
	struct tree *root=NULL;
	cc
	{
		cin>>c>>key;
		if(c=='i')
		{
			root=insert(root,key,1);
		}
		else
		{
			position(root,key);
			root=deletenode(root,key);
		}
	}
	
}