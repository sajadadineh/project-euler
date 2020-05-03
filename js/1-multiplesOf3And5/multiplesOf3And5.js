let i;
let sum = 0;
function multiplesOf3And5(){
    for (i = 1; i < 1000; i++){
    if (i % 3 === 0 || i % 5 === 0){
        sum = sum + i;
        }
    }
    return sum;
}

console.log(multiplesOf3And5());
