// print like a wave in 2d array

for(int col=0;col<mcols;col++){
int vector<int> ans;
if(col&1){
for(int row=nrows-1;row>=0;row--){
    ans.push_back(arr[row][col];}}
    else{
    for(int row=0;row<nrows;row++){
    ans.push_back[row][col];}
    }
    
}
return ans;
