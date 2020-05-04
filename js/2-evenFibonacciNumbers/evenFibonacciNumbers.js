function fibRang(num){
    let fibArr = [1, 2];
    let i = 0;
    while(fibArr[fibArr.length - 1] < num){
        fibArr.push(fibArr[i]+fibArr[i+1]);
        i++;
    }
    return fibArr;
}

function sumEvenNum(arr = []){
    let sum = 0;
    for (let i = 0; i < arr.length; i++){
        if (arr[i] % 2 ===0 ){sum += arr[i]}
    }
    return sum;
}

console.log(sumEvenNum(fibRang(4000000)));