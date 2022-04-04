// https://www.codewars.com/kata/5694cb0ec554589633000036/train/javascript


const factorial = n => {
	if(n <= 1) {
		return 1;
	} else {
		return factorial(n - 1) * n;
	}
};

console.log(factorial(12));