#include "validation.hpp"
#include <algorithm>
#include <string>

std::string getErrorMessage(const ErrorCode& error){
    switch(error){
        case ErrorCode::Ok:
        return "Ok";
        
        case ErrorCode::PasswordNeedsAtLeastNineCharacters:
        return "Password needs at least nine characters";

        case ErrorCode::PasswordNeedsAtLeastOneNumber:
        return "Password needs at least one number";

        case ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter:
        return "Password needs at least one special character";

        case ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter:
        return "Password needs at least one upper case letter";

        case ErrorCode::PasswordsDoesNotMatch:
        return "Passwords does not match";
        
        default:
        return "Unknown error";
    
    }
    
    
}

bool doesPasswordsMatch(const std::string& password1,const std::string& password2){
    return password1==password2;
}

ErrorCode checkPasswordRules(const std::string& password){
    if (password.length() < 9){
        return ErrorCode::PasswordNeedsAtLeastNineCharacters;
    }
    
    else if(std::any_of(password.begin(),password.end(), ::isdigit)){
        return ErrorCode::PasswordNeedsAtLeastOneNumber;
    }

    else if(std::any_of(password.begin(),password.end(), ::isalnum)){
        return ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter;
    }

    else if(std::any_of(password.begin(),password.end(), ::isupper)){
        return ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter;
    }

    else{
        return ErrorCode::Ok;
    }
}

ErrorCode checkPassword(const std::string& password1, const std::string& password2){
    if (!doesPasswordsMatch(password1,password2)){
        return ErrorCode::PasswordsDoesNotMatch;
    }

    else{
        return checkPasswordRules(password1);
    }
}