let a=document.getElementById("1")
let masterplay=document.getElementById('masterplay')
let audioelement=new Audio('Spider.mp3')
let progressbar=document.getElementById('myprogressbar');
// a.addEventListener('click',fun)
// function fun(){
//     audioelement.play()    
// }
masterplay.addEventListener('click',()=>{
    if(audioelement.paused || audioelement.currentTime<=0){
        audioelement.play();
        masterplay.classList.remove("fa-circle-play");
        masterplay.classList.add('fa-pause');
    }

    else{
        audioelement.pause();
        masterplay.classList.remove('fa-pause');
        masterplay.classList.add("fa-circle-play");
    }})


audioelement.addEventListener('timeupdate',()=>{
    progress=parseInt((audioelement.currentTime/audioelement.duration)*100);

    progressbar.value=progress;
})

progressbar.addEventListener('change',()=>{
    audioelement.currentTime=(progressbar.value*audioelement.duration)/100;
    
})