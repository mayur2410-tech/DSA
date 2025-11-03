// how to make varable private in js before es6
// we use factory function and it taking access of varable using concept of closure
// means in this we have make the balance varable private and we can access it only by the method provided in the return object. how it is working?
// In JavaScript, when you define a function, it creates a new scope. Variables defined within that function are not accessible from outside the function. This is known as closure.

// In the example you provided, the `balance` variable is defined within the `BankAccount` function. This means that it is not accessible from outside the function. However,
//  the methods `checkBalance`, `deposit`, and `withdraw` are also defined within the same function and have access to the `balance` variable because they are closures.= 0; // private variable

// function BankAccount(amount) {
//     let balance = amount
    
//     function validateAmount(amountToValidate) {
//         return amountToValidate > 0 && typeof amountToValidate === 'number'
//     }


//     return {
//         checkBalance: function() {
//           return balance
//         },
//         deposit: function(depositAmount) {
//           if(validateAmount(depositAmount)) {
//             balance = balance + depositAmount
//           }else{
//             console.log("Plz enter valid  amount")
//           }
          
//         },
//         withdraw: function(withdrawAmount) {
//              if(validateAmount(withdrawAmount)) {
//                 balance = balance - withdrawAmount
//              }else{
//             console.log("Plz enter valid  amount")
//           }
//         },
        
//     }
// }

// const user1 = BankAccount(1000)
// // console.log(user1.checkBalance()) 
// user1.deposit(3000)
// user1.withdraw(4100)
// console.log(user1.checkBalance())



// // after es6 we can use class and # to make varable private in js
// class BankAccountClass {
//     #balance; // private variable   
//     constructor(amount) {
//         this.#balance = amount
//     }
//     validateAmount(amountToValidate) {
//         return amountToValidate > 0 && typeof amountToValidate === 'number'
//     }
//     checkBalance() {
//         return this.#balance
//     }
//     deposit(depositAmount) {
//         if(this.validateAmount(depositAmount)) {
//             this.#balance = this.#balance + depositAmount
//           }else{
//             console.log("Plz enter valid  amount")
//           }
//     }
//     withdraw(withdrawAmount) {
//         if(this.validateAmount(withdrawAmount)) {
//             this.#balance = this.#balance - withdrawAmount
//          }
//             else{
//             console.log("Plz enter valid  amount")
//             }
//     }
// }


// class UserProfile{
//     #email;
//     #password;
//     #loginAttempts;
//     #flag

//      username;

//     constructor(username,email,password){   //it is used to add varable to the using this keyword 
//         this.username = username;
//         this.#email = email;
//         this.#password = this.#hasedPassword(password);
//         this.#loginAttempts = 0;
//         this.#flag = false;
//     }

//    #hasedPassword(password){
    
//        return `hashed pass is ${password}@@@`
       
//    }
//    getEmail(){
//     return this.#email;
//    }

//    updatePassword(newPassword,oldPassword){
//     if(this.#password === this.#hasedPassword(oldPassword)){
//         this.#password = this.#hasedPassword(newPassword);
//        return "pass upadate successfully"
//     }else{
//         return "Incorrect password";
//     }
//    }

//    login(user,password){
//     if(this.#loginAttempts >= 5){
//         return "account locked for 24 hours";
//     }

//     if(user === this.username || user === this.#email){
//         if(this.#hasedPassword(password) === this.#password){
//             this.#flag = true;
//             return "login successfull";
//         }else{
//              this.#loginAttempts++; 
//             return "incorrect password";
//         }
//         }else{
//             return "user not exist";
//         }

//     }

//     logout(){
//         if(this.#flag === true){
//             this.#loginAttempts = 0;
//             return "logout successfull";
//         }else{
//             return "user not logged in";
//         }
//     }
// }
// const u1 = new UserProfile("commandomw","m@gmail.com","pass@123");
// // console.log(u1.getEmail());
// console.log(u1.updatePassword("newpass@123","pass@123"));
// console.log(u1.logout())



// Inheritance

class Animal{
    #isAlive;
    constructor(name, species){
        this.name = name;
        this.species = species;
        this.#isAlive = true;
    };
    eat(food){
        return `${this.name} is eating ${food}.`;
    }
    sleep(hours){
        return `${this.name} is sleeping for ${hours} hours.`;
    }
    makeSound(){
        return `${this.name} makes a sound.`;
    }
    getInfo(){
        return `Name: ${this.name}, Species: ${this.species}, Alive: ${this.#isAlive}`;
    };
};

class Dog extends Animal{
    #loyalityLevel;
    constructor(name,breed){
        super(name,"German Shephard");                   //super is used to call parent class constructor
        this.breed = breed;
        this.#loyalityLevel = 10;
    }
    makeSound(){
        return `${this.name} barks. Woof Woof!`;
    }

    wagTail(){
        return `${this.name} is wagging its tail!`;
    }
    getInfo(){
        return `${super.getInfo()}, Breed: ${this.breed}`    // super is used to call parent class method and access parent class properties and new properties
    }
}


const dog1 = new Dog("JeevanDog");
console.log(dog1.eat("meat"));
console.log(dog1.makeSound());
