nclude <bits/stdc++.h>
using namespace std;

void capitalize(char* arr,int i){
	//ascii value of each lower case letter-ascii value 
	//	//of each uppercase letter=32
	//		//i is the length of line
	//			unordered_set<int> table;
	//				table.insert(0); //index of first letter of line
	//					table.insert(i-1);//index of last letter of line
	//						
	//							for(int j=1;j<i;j++){
	//									if(arr[j]==' '){
	//												// last letter of word is before 
	//															//space & first letter of word is after space
	//																		//check index already present in hash table or not
	//																					if(table.find(j-1)==table.end())
	//																									table.insert(j-1); //if not insert index
	//																												//check index already present in hash table or not
	//																															if(table.find(j+1)==table.end())			
	//																																			table.insert(j+1); //if not insert index
	//																																					}
	//																																						}
	//																																							//capitalize
	//																																								for(auto it=table.begin();it!=table.end();it++)
	//																																										arr[*it]-=32;
	//																																											printf("converted input line is: ");
	//																																												//printing 
	//																																													for(int j=0;j<i;j++)
	//																																															printf("%c",arr[j]);
	//																																																printf("\n");
	//																																																}
	//
	//																																																int main(){
	//																																																	//store the input line
	//																																																		char arr[100];
	//																																																			char c;
	//																																																				int i=0;
	//
	//																																																					printf("input the line.....\n");
	//																																																						scanf("%c",&c);
	//																																																							while(c!='\n'){
	//																																																									arr[i++]=c;
	//																																																											scanf("%c",&c);
	//																																																												}
	//																																																													capitalize(arr,i);
	//																																																														
	//																																																															return 0;
	//																																																															}
	//
