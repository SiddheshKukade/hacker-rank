
/*
 * Complete the 'compareTriplets' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts following parameters:
 *  1. INTEGER_ARRAY a
 *  2. INTEGER_ARRAY b
 */

vector<int> compareTriplets(vector<int> a, vector<int> b) {
    vector<int> ans ;
    int size = a.size();
    int alice=0, bob = 0;
    for(int i =0; i<size; i++){
        if(a[i] > b[i]){
            alice++;
        }else if (b[i] > a[i]){
            bob++;
        }
    }
    return {alice, bob};
}
