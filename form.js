const show1=document.querySelector(".show_check");
show1.addEventListener("click",function(){
    const show_=document.querySelector(".show_pw");
    if(show_.type=='password'){
        show_.type='text';
    }
    else{
        show_.type='password';
    }
});
const show2=document.querySelector(".show_check2");
show2.addEventListener("click",function(){
    const show2_=document.querySelector(".show_pw2");
    if(show2_.type=='password'){
        show2_.type='text';
    }
    else{
        show2_.type='password';
    }
});
const show3=document.querySelector(".show_check3");
show3.addEventListener("click",function(){
    const show3_=document.querySelector(".show_cf");
    if(show3_.type=='password'){
        show3_.type='text';
    }
    else{
        show3_.type='password';
    }
});
const add_Account=document.querySelector(".add_account");
add_Account.addEventListener("click",function(){
    const account=document.querySelector(".Account");
    document.querySelector(".conio").style.display="none";
    account.classList.add("form2");
});
const back=document.querySelector(".back_login");
back.addEventListener("click",function(){
    const login=document.querySelector(".conio");
    document.querySelector(".form2").style.display="none";
    login.style.display="block";
    login.classList.add("conio");
});

const form=document.querySelector(".form_");
const email=document.querySelector(".mail");
const password=document.getElementById("password_");
form.addEventListener("submit",function(e){
    e.preventDefault();
    checkInputs();
});
function checkInputs(){
    if(email.value.trim()===""){
        seterrorfor(email,"can not be blenk");}
    else if(!isEmail(email.value.trim())){
        seterrorfor(email,"Not an email form");
    }
        else{
            setsuccessfor(email);
    }
    if(password.value.trim()===""){
        seterrorfor(password,"can' be blenk");
    }
    else if(password.value.trim().length<8){
        seterrorfor(password,"your password is 8 digits up");
    }
    else{
        setsuccessfor(password);
    }
}
function seterrorfor(input,message){
    const formcontrol=input.parentElement;
    const small=formcontrol.querySelector("small");
    small.innerText=message;
    formcontrol.className="form_login error";
}
function setsuccessfor(input){
    const formcontrol=input.parentElement;
    formcontrol.className="form_login success";
}
const Geate=document.querySelector(".Geate_");
const first=document.getElementById("first_");
const last=document.getElementById("last_");
const phone=document.getElementById("phone_");
const Gmail=document.getElementById("Gmail");
const Gpassword=document.getElementById("pass_");
const fpassword=document.getElementById("comfirmpassword_");
Geate.addEventListener("submit",function(e){
    e.preventDefault();
     formvalidat();
});
function formvalidat(){
    if(first.value.trim()===""){
        Seterror(first,"can not be blenk");
    }
    else{
        Setsuccess(first);
    }
    if(last.value.trim()===""){
        Seterror(last,"can not be blenk");
    }
    else{
        Setsuccess(last);
    }
    if(phone.value.trim()===""){
        Seterror(phone,"can not be blenk");
    }
    else{
        Setsuccess(phone);
    }
    if(Gmail.value.trim()===""){
        Seterror(Gmail,"can not be blenk");
    }
    else if(!isEmail(Gmail.value.trim())){
        Seterror(Gmail,"Not an email form");
    }
    else{
        Setsuccess(Gmail);
    }
    if(Gpassword.value.trim()===""){
        Seterror(Gpassword,"can not be blenk");
    }
    else if(Gpassword.value.trim().length<8){
        Seterror(Gpassword,"your password is 8 digite up");
    }
    else{
        Setsuccess(Gpassword);
    }
    if(fpassword.value.trim()===""){
        Seterror(fpassword,"can not be blenk");
    }
    else if(fpassword.value.trim()!==Gpassword.value.trim()){
        Seterror(fpassword,"wrong comfirmpassword");
    }
    else if(fpassword.value.trim().length<8){
        Seterror(fpassword,"your comfirmpassord is 8 gigite up");
    }
    else{
        Setsuccess(fpassword);
    }
}
function Seterror(input,message){
    const validat=input.parentElement;
    const small=validat.querySelector("small");
    small.innerText=message;
    validat.className="Geate_form error";
}
function Setsuccess(input){
    const validat=input.parentElement;
    validat.className="Geate_form success";
}
function isEmail(email){
    return /^(([^<>()\[\]\\.,;:\s@"]+(\.[^<>()\[\]\\.,;:\s@"]+)*)|(".+"))@((\[[0-9]{1,3}\.[0-9]{1,3}\.[0-9]{1,3}\.[0-9]{1,3}])|(([a-zA-Z\-0-9]+\.)+[a-zA-Z]{2,}))$/.test(email);
  }
  