let newNumber;
let sum = 0;
let oneNumber = 1;
let twoNumber = 2;

let checkEvenNumber = (num) => {if(num % 2 === 0) return  sum = sum + num}

while(oneNumber < 4000000){
    checkEvenNumber(oneNumber);
    newNumber = oneNumber + twoNumber;
    oneNumber = twoNumber;
    twoNumber = newNumber;
}

console.log(sum);
