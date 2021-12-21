const icon_=document.querySelectorAll(".icon span");
    for(let i=0;i<icon_.length;i++){
        icon_[i].addEventListener("click",function(){
            const large_=document.querySelector(".btn_i");
            large_.className=large_.className.replace("btn_i","");
        icon_[i].className=("btn_i");
    });
}
const menu_=document.querySelectorAll(".menu_a li");
    for(let j=0;j<menu_.length;j++){
        menu_[j].addEventListener("click",function(){
            const sellec_menu=document.querySelector(".all");
            sellec_menu.className=sellec_menu.className.replace("all","");
        menu_[j].className=("all");
    });
}
const a=document.querySelector(".down");
a.addEventListener("click",function(){
    const b=document.querySelector(".menu_icon");
    b.classList.toggle("active");
});
const c=document.querySelector(".user");
c.addEventListener("click",function(){
    const d=document.querySelector(".form");
    d.classList.toggle("alert");
});