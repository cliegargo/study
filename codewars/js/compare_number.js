// https://www.codewars.com/kata/591ad38f41b059d5cd000092/train/javascript


function compare(a, b) {
	function check(x) {
		return (x.includes('.') === true) ? parseFloat(x) : BigInt(x);
	}

	let aa = check(a);
	let bb = check(b);

	if(aa > bb) return 'greater';
	else if(aa < bb) return 'less';
	else return 'equal';
}


a = '0000000000000000000000000000000010000000000000000000000000000000000'
b = '0000000000000000000000000000000000000000000000000000000000000000000000000001000000000000000000000000000000001'

/*
a = '.12'
b = '-120'

a = '1000.00'
b = '100'
*/

console.log(compare(a, b));