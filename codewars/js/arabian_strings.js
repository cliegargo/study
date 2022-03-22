// https://www.codewars.com/kata/525821ce8e7b0d240b002615/train/javascript


function camelize(str) {
    str = str.replace(/[.,\/#!$%\^&\*;:{}=\-_`~()\'>\?]/g, ' ');

    let arr = [];
    let temp = '';

    for(let i = 0; i < str.length; ++i) {
        if(str[i] != ' ') {
            temp += str[i];
        } else {
            arr.push(temp);
            temp = '';
        }
    }
    arr.push(temp);

    let camelized = '';

    for(let i = 0; i < arr.length; ++i) {
        camelized += arr[i].charAt(0).toUpperCase() + arr[i].substring(1).toLocaleLowerCase();
    }

    return camelized;
}


let str = "example name";

console.log(camelize(str));