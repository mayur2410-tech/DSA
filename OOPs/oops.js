// how to make varable private in js before es6
// we use factory function and it taking access of varable using concept of closure
function BankAccount(amount) {
    let balance = amount

    return {
        checkBalance: function() {
          return balance
        },
        deposit: function() {
           
        },
        withdraw: function() {

        }
    }
}

const user1 = BankAccount(1000)
console.log(user1.checkBalance()) // undefined

// means in this we have make the balance varable private and we can access it only by the method provided in the return object. how it is working?
// In JavaScript, when you define a function, it creates a new scope. Variables defined within that function are not accessible from outside the function. This is known as closure.

// In the example you provided, the `balance` variable is defined within the `BankAccount` function. This means that it is not accessible from outside the function. However,
//  the methods `checkBalance`, `deposit`, and `withdraw` are also defined within the same function and have access to the `balance` variable because they are closures.= 0; // private variable
