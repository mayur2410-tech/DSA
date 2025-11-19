const granparent = document.getElementById('grandparent');
const parent = document.getElementById('parent');
const child = document.getElementById('child');

grandparent.addEventListener('click', () => {
    console.log('Grandparent capture');
},true);

parent.addEventListener('click', () => {
    console.log('Parent capture');
},true);

child.addEventListener('click', (event) => {
    // event.stopPropagation(); // Prevents the event from bubbling up
    console.log('Child capture');
},true);
grandparent.addEventListener('click', () => {
    console.log('Grandparent bubble');
});

parent.addEventListener('click', () => {
    console.log('Parent bubble');
});

child.addEventListener('click', (event) => {
    // event.stopPropagation(); // Prevents the event from bubbling up
    console.log('Child bubble');
});