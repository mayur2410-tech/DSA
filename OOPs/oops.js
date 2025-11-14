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

// class Animal{
//     #isAlive;
//     constructor(name, species){
//         this.name = name;
//         this.species = species;
//         this.#isAlive = true;
//     };
//     eat(food){
//         return `${this.name} is eating ${food}.`;
//     }
//     sleep(hours){
//         return `${this.name} is sleeping for ${hours} hours.`;
//     }
//     makeSound(){
//         return `${this.name} makes a sound.`;
//     }
//     getInfo(){
//         return `Name: ${this.name}, Species: ${this.species}, Alive: ${this.#isAlive}`;
//     };
// };

// class Dog extends Animal{
//     #loyalityLevel;
//     constructor(name,breed){
//         super(name,"German Shephard");                   //super is used to call parent class constructor
//         this.breed = breed;
//         this.#loyalityLevel = 10;
//     }
//     makeSound(){
//         return `${this.name} barks. Woof Woof!`;
//     }

//     wagTail(){
//         return `${this.name} is wagging its tail!`;
//     }
//     getInfo(){
//         return `${super.getInfo()}, Breed: ${this.breed}`    // super is used to call parent class method and access parent class properties and new properties
//     }
// }


// const dog1 = new Dog("JeevanDog");
// console.log(dog1.eat("meat"));
// console.log(dog1.makeSound());


// class Person{
//     name;
//     age;
//     email;
//     constructor(name,age,email){
//         this.name = name;
//         this.age =age;
//         this.email=email
//     }

//     getPersonInfo(){
//         return `Name: ${this.name}, Age: ${this.age}, Email: ${this.email}`;
//     }

//     getIntroduce(){
//         return `Hello, my name is ${this.name}, I'm ${this.age} years old. You can reach me at ${this.email}.`;
//     }
// }

// class Employee extends Person{
//     employeeId;
//     department;
//     #salary;
//      constructor(name,age,email,employeeId,department){
//         super(name,age,email);
//         this.employeeId = employeeId;
//         this.department = department;
//         this.#salary = salary;
//      }

//      setSalary(newSalary){
//         if(newSalary > 0){
//             this.#salary = newSalary;
//         }else{
//             console.log("Invalid salary amount.");
//         }
//      }

//      getSalary(){
//         return this.#salary;
//      }

//      work(){
//         return `${this.name} is working in the ${this.department} department.`;
//      }

//      getEmployeeInfo(){
//         return `${super.getPersonInfo()}, Employee ID: ${this.employeeId}, Department: ${this.department}`;
//      }
//      introduce(){
//         return `${super.getIntroduce()} working in the ${this.department} department`;
//      }
// }


// polymorphism


// class Calculator{
//     add(...numbers){
//         if(numbers.length === 0){
//             return "enter at least one number to add";
//         }
//         if(numbers.length === 1 && typeof numbers[0] === "number"){
//             return numbers[0];
//         }
//         if(numbers.length === 2){
//             return numbers[0] + numbers[1];
//         }
//         return numbers.reduce((sum, num) => sum + num, 0);
//     }
// }

// const calc = new Calculator();
// console.log(calc.add(6.5, 3.9,7)); // Output: 10

// class DebitCard{
//     pay(){
//         console.log("paid by debit card")
//     }
// }

// class CreditCard{
//     pay(){
//         console.log("paid by credit card")
//     }   
// }

// class UPI{
//     pay(){
//         console.log("paid by UPI")
//     }   
// }
// function payNow(paymentMethod){
//     paymentMethod.pay();
// }

// const debit = new DebitCard();
// const credit = new CreditCard();
// const upi = new UPI();

// payNow(debit);
// // payNow(credit);
// // payNow(upi);


class Media {
    #title;
    #artist;
    #duration;
    #filePath;
    #playCount;
    #lastPlayed;
    #isPlaying;
    #currentPosition;
    constructor(title,artist,duration,filePath) {
        this.#title = title;
        this.#artist = artist;
        this.#duration = duration;
        this.#filePath = filePath;
        this.#playCount = 0;
        this.#lastPlayed = null;
        this.#isPlaying = false;
        this.#currentPosition = 0;
}

getTitle(){
    return this.#title;
}
getArtist(){
        return this.#artist;
}
getDuration(){
        return this.#duration;
}
getFilePath(){
        return this.#filePath;
}
getPlayCount(){
        return this.#playCount; 
}
getLastPlayed(){
        return this.#lastPlayed;    
}
isPlaying(){
        return this.#isPlaying;    
}

setCurrentPlaying(bool){
    this.#isPlaying = bool;
}
getCurrentPosition(){
        return this.#currentPosition;
}
setCurrentPosition(position){
        if(position >=0 && position <= this.#duration){
            this.#currentPosition = position;
        }
}

updatePlayStatics(){
    // this.#lastPlayed = new Date.now();
    this.#playCount++;
}

 play() {
        throw new Error('play() must be implemented by subclass');
    }
    
    pause() {
        throw new Error('pause() must be implemented by subclass');
    }
    
    stop() {
        throw new Error('stop() must be implemented by subclass');
    }
    
    getMediaInfo() {
        throw new Error('getMediaInfo() must be implemented by subclass');
    }

    getFormattedDuaration(){
        const minutes = Math.floor(this.#duration / 60);
        const seconds = this.#duration % 60;
        return `${minutes}m : ${seconds.toString().padStart(2, '0')}s`;
    }

    getProgress() {
        if (this.#duration === 0) return 0;
        return (this.#currentPosition / this.#duration) * 100;
    }


}

class AudioFile extends Media {
    #format;
    #bitrate;
    #volume;
    constructor(title, artist, duration, filePath, format, bitrate) {
        super(title, artist, duration, filePath);
        this.#format = format;
        this.#bitrate = bitrate; // default bitrate
        this.#volume = 50; // default volume
}
    play() {
        this.setCurrentPlaying(true);
        this.updatePlayStatics();
        this.setCurrentPosition(0);
        return `Playing audio: ${this.getTitle()} by ${this.getArtist()}`
        
        
    }
    pause(){
        this.setCurrentPlaying(false)
        return `Audio: ${this.getTitle()} paused at ${this.getCurrentPosition()}s`
    }
    stop(){
        this.setCurrentPosition(0);
        this.setCurrentPlaying(false);
        return `Audio: ${this.getTitle()} stopped.`;
    }
    getMediaInfo() {
        return {
            title: this.getTitle(),
            artist: this.getArtist(),
            type: 'Audio',
            format: this.#format,
            bitrate: `${this.#bitrate}kbps`,
            duration: this.getFormattedDuaration(),
            playCount: this.getPlayCount(),
            lastPlayed: this.getLastPlayed()
        };
    }
    setVolume(level){
        this.#volume = Math.max(0, Math.min(100, level));
        return `Volume set to ${this.#volume}`;
    }
}

const music = new AudioFile("Man meri Jan","Arjit Singh",240,"/path/to/song1.mp3","mp3",320);
console.log(music.play());
    console.log(music.pause());
    console.log(music.setVolume(8));
    
    console.log(music.getMediaInfo());

// console.log(music.stop());