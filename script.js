const characters={
    {
        name:'Vanshika Rajpurohit',
        height: '164',
        mass: '54',
        eye_color: 'black',
        gender: 'Female',
    },
    {
        name:'Deepika Rajpurohit',
        height: '170',
        mass: '55',
        eye_color: 'black',
        gender: 'Female',
    },
    {
        name:'Mahesh Rajpurohit',
        height: '171',
        mass: '75',
        eye_color: 'black',
        gender: 'Male',
    },
    {
        name:'Chanda Rajpurohit',
        height: '165',
        mass: '70',
        eye_color: 'black',
        gender: 'Female',
    },
    {
        name:'Lakshay Rajpurohit',
        height: '172',
        mass: '54',
        eye_color: 'black',
        gender: 'Male',
    },
};
//Get an array of all names
const names=character.map(ch=> ch.name)
console.log(names);

//Get an array of objects with just name and height properties
const Properties_of_char=characters.map(ch=>{
    return{ name: ch.name, height: ch.height}
})
console.log(Properties_of_char);