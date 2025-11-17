let str="snake_case";
let result=""
for(let i =0; i <str.length;i++){
    if(str[i]=='_'){
      result = result + str[i+1].toUpperCase()
      i++
    }else{
        result+=str[i]
    }
}
console.log(result)

