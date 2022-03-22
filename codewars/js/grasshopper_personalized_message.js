// https://www.codewars.com/kata/5772da22b89313a4d50012f7/train/javascript


function greet(name, owner) {
    if(name == owner) {
        return "Hello boss"
    } else {
        return "Hello guest"
    }
}

console.log(greet('clint', 'clint'))