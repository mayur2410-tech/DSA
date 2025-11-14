function order(){
   return new Promise((resolve,reject)=>{
    setTimeout(()=>{
        console.log("order completed")
        resolve()
    },5000)
    }) 
}
function ready(){
  return  new Promise((resolve,reject)=>{
    setTimeout(()=>{
        console.log("ready completed")
        resolve()
    },3000)
    }) 
}
function complete(){
  return  new Promise((resolve,reject)=>{
    setTimeout(()=>{
        console.log(" completed")
        resolve()
    },5000)
    }) 
}

order()
.then(()=>ready())
.then(()=>complete())



function order(isStock){
  return  new Promise((resolve,reject)=>{
    setTimeout(()=>{
        if(isStock){
            
        console.log("order completed")
        resolve()
        }else{
            reject("NO Stock Remains")
        }
    },5000)
    }) 
}
function ready(isWorking){
   return new Promise((resolve,reject)=>{
    setTimeout(()=>{
        if(isWorking){
             console.log("ready completed")
        resolve()
        }else{
            reject("Machine is not Working")
        }
       
    },3000)
    }) 
}
function complete(isAvailable){
   return new Promise((resolve,reject)=>{
    setTimeout(()=>{
        if(isAvailable){
        console.log(" completed")
            resolve()
        }else{
            reject("No one is to deliver Food")
        }
    },5000)
    }) 
}

order(true).then(()=>ready(true)).then(()=>complete(false)).catch((err)=>console.log("Error",err))