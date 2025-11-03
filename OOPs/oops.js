// how to make varable private in js before es6
// we use factory function and it taking access of varable using concept of closure
// means in this we have make the balance varable private and we can access it only by the method provided in the return object. how it is working?
// In JavaScript, when you define a function, it creates a new scope. Variables defined within that function are not accessible from outside the function. This is known as closure.

// In the example you provided, the `balance` variable is defined within the `BankAccount` function. This means that it is not accessible from outside the function. However,
//  the methods `checkBalance`, `deposit`, and `withdraw` are also defined within the same function and have access to the `balance` variable because they are closures.= 0; // private variable

function BankAccount(amount) {
    let balance = amount
    
    function validateAmount(amountToValidate) {
        return amountToValidate > 0 && typeof amountToValidate === 'number'
    }


    return {
        checkBalance: function() {
          return balance
        },
        deposit: function(depositAmount) {
          if(validateAmount(depositAmount)) {
            balance = balance + depositAmount
          }else{
            console.log("Plz enter valid  amount")
          }
          
        },
        withdraw: function(withdrawAmount) {
             if(validateAmount(withdrawAmount)) {
                balance = balance - withdrawAmount
             }else{
            console.log("Plz enter valid  amount")
          }
        },
        
    }
}

const user1 = BankAccount(1000)
// console.log(user1.checkBalance()) 
user1.deposit(3000)
user1.withdraw(4100)
console.log(user1.checkBalance())



// after es6 we can use class and # to make varable private in js
class BankAccountClass {
    #balance; // private variable   
    constructor(amount) {
        this.#balance = amount
    }
    validateAmount(amountToValidate) {
        return amountToValidate > 0 && typeof amountToValidate === 'number'
    }
    checkBalance() {
        return this.#balance
    }
    deposit(depositAmount) {
        if(this.validateAmount(depositAmount)) {
            this.#balance = this.#balance + depositAmount
          }else{
            console.log("Plz enter valid  amount")
          }
    }
    withdraw(withdrawAmount) {
        if(this.validateAmount(withdrawAmount)) {
            this.#balance = this.#balance - withdrawAmount
         }
            else{
            console.log("Plz enter valid  amount")
            }
    }
}
