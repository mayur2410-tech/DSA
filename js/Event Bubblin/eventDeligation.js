const color = document.getElementById('color-list');
const btn = document.getElementById('btn');

color.addEventListener('click',(e)=>{
    if(e.target.tagName === 'LI'){
        document.body.style.backgroundColor = e.target.innerText
    console.log(e.target.innerText);
    }
})
// i want to change the text of butoon on click

// function changeBtnText(){
//     btn.innerText = "Mauyekbjhkd  ks wnksnvns nsovbvbviavsbuv"
// }