<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
    <link rel="stylesheet" href="https://cdnjs.cloudflare.com/ajax/libs/font-awesome/6.0.0-beta2/css/all.min.css">
    <link rel="stylesheet" href="form.css">
</head>
<body>
    <div class="stdio">
        <div class="conio">
            <form action="save_data.php"class="form_"method="POST">
                <div class="form_login">
                    <h2>Login Form</h2>
                    <label for="email">Email</label>
                    <input type="text"id="Email_"placeholder="Enter your Email"class="mail"name="textemail">
                    <i class="fas fa-check"></i>
                    <i class="fas fa-exclamation"></i>
                    <small>Error messegn</small>
                </div>
                <div class="form_login">
                    <label for="password">Password</label>
                    <input type="password"id="password_"placeholder="Enter your password"class="show_pw"name="textpassword">
                    <i class="fas fa-check"></i>
                    <i class="fas fa-exclamation"></i>
                    <small>Error messegn</small>
                    <p>Show password</p>
                    <input type="checkbox"class="show_check">
                </div>
                <button type="submit"name="submit">Login</button>
                <a href="project.html">Back</a>
            </form>
            <div class="click_"><button class="add_account">Geate Account</button></div>
        </div>
        <div class="Account">
        <form action=""method="post"class="Geate_">
             <div class="Geate_form">
                 <h2>Geate Account</h2>
                 <label for="first name">First Name</label>
                 <input type="text"id="first_"placeholder="Enter your first name"name="textfirstname">
                 <i class="fas fa-check"></i>
                 <i class="fas fa-exclamation"></i>
                 <small>Error messegn</small>
             </div>
             <div class="Geate_form">
                <label for="last name">Last Name</label>
                <input type="text"id="last_"placeholder="Enter your last name"name="textlastname">
                <i class="fas fa-check"></i>
                <i class="fas fa-exclamation"></i>
                <small>Error messegn</small>
            </div>
            <div class="Geate_form">
                <label for="number phone">Phone Number</label>
                <input type="text"id="phone_"placeholder="Enter your Phone number"name="textphonenumber">
                <i class="fas fa-check"></i>
                <i class="fas fa-exclamation"></i>
                <small>Error messegn</small>
            </div>
            <div class="Geate_form">
                <label for="email">Email</label>
                <input type="text"id="Gmail"placeholder="Enter your Email"name="text_G_email">
                <i class="fas fa-check"></i>
                <i class="fas fa-exclamation"></i>
                <small>Error messegn</small>
            </div>
            <div class="Geate_form">
                <label for="password">Password</label>
                <input type="password"id="pass_"placeholder="Enter your password"class="show_pw2"name="text_G_password">
                <i class="fas fa-check"></i>
                <i class="fas fa-exclamation"></i>
                <small>Error messegn</small>
                <p>Show password</p>
                <input type="checkbox"class="show_check2">
            </div>
            <div class="Geate_form">
                <label for="confirmPassword">Comfirmpasswors</label>
                <input type="password"id="comfirmpassword_"placeholder="Enter your confirmpassword"class="show_cf"name="text_G_comfirmpassword">
                <i class="fas fa-check ch11"></i>
                <i class="fas fa-exclamation ch12"></i>
                <small>Error messegn</small>
                <p>Show password</p>
                <input type="checkbox"class="show_check3">
            </div>
            <button type="submit">Submit</button>
        </form>
        <button type="button" class="back_login">Back</button>
        </div>
    </div>
    <script src="form.js"></script>
</body>
</html>