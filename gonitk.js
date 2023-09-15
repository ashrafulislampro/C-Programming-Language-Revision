// prthme akta "n" number nilam oi number ar man jt ttber "m" number nibo.
// m hte hbe 10-99 prjanto, print karte hbe "10" theke "m" prjanto separeted number tbe 11, 22, 33, 44, 55, 66, 77, 88, 99 hte parbe nah.


// Computer Programming 1st Part:Page-67

const arr = [];

const inputNum = +prompt("Enter a random number : ");

while(arr.length < inputNum){
    const num = +prompt("Enter Second Time a random number : "); // 10-99
    arr.push(num);
}

for(let i = 0; i < arr.length; i++){
    const element = arr[i];
    
    for(let j = 10; j <= element; j++){
        
        if(j % 11 !== 0){
            console.log(j);
        }
    }
    
}

console.log("inputNum", typeof inputNum, inputNum, arr);