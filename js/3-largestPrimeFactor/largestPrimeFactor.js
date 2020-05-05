function primeFactor(num){
    let primeArr = [];
    while(num % 2 === 0){
        primeArr.push(2);
        num = num/2;
    }
    for (let i = 3; i <= num; i+=2){
        while(num % i === 0){
            primeArr.push(i);
            num = num/i;
        }
    }
    return primeArr;
}

console.log(Math.max(...primeFactor(600851475143)));