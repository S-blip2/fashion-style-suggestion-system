#include<iostream>
#include<string>
#include<algorithm>

using namespace std;
 string toLowercase(string str){
 	transform (str.begin(),str.end(),str.begin(),::tolower);
 	return str;
 }
 
string getOutfitSuggestion(string gender,string weather,string occasion){
		    gender=toLowercase(gender);
			weather=toLowercase(weather);
			occasion=toLowercase(occasion);
	if (gender == "female"){
		if (weather == "sunny"){
			if (occasion == "casual")
			return "Cotton Shalwar kameez with lightweight dupatta.";
			if (occasion == "formal")
			return "Elegant chiffon suit with embroidered dupatta.";
			if (occasion == "party")
			return "Fancy lawn dress with light embellishments.";	
		}
		if (weather == "rainy"){
			if (occasion == "casual")
			return "Short kurti with baggy jean and a light dupatta.";
			if (occasion == "formal")
			return "Stylish silk shalwar kameez with waterproof sandals.";
			if (occasion == "party")
			return "Trendy frock with a chiffon dupatta.";
		}
		if (weather == "cold"){
			if (occasion == "casual")
			return "Woolen shawl with warm shalwar kameez and long coat.";
			if (occasion == "formal")
			return "Velvet or embroidered woolen dress with stylish pashmina shawl.";
			if (occasion == "party")
			return "Fancy velvet gown with matching warm accessories.";
		}
		if (weather == "windy"){
			if (occasion == "casual")
			return "Full-sleeve kurti with jeans with a lightweight stole";
			if (occasion == "formal")
			return "Silk or chiffon suit with a matching jacket.";
			if (occasion =="party")
			return "Long maxi with elegant scarf.";
		}
	}
	if (gender == "male"){
		if (weather == "sunny"){
			if (occasion == "casual")
			return "Polo shirt with jeans.";
			if (occasion == "formal")
			return "Formal dress shirt with dress pants.";
			if (occasion == "party")
			return "Stylish shalwar kameez with waistcoat.";
		}
		if (weather == "rainy"){
			if (occasion == "casual")
			return "T-shirt with waterproof jacket and jeans.";
			if (occasion == "formal")
			return "Full-sleeve shirt with raincoat.";
			if (occasion == "party")
			return "Blazer with dress pants.";
        }
        if (weather == "cold"){
			if (occasion == "casual")
			return "Warm woolen sweater with jeans and a scarf.";
			if (occasion == "formal")
			return "Stylish coat over a dress shirt and pants.";
			if (occasion == "party")
			return "Embroidered velvet sherwani with warm inner layers.";
		}
		if (weather == "windy"){
			if (occasion == "casual")
			return "Hoodie with comfortable jeans and sneakers.";
			if (occasion == "formal")
			return "Full-sleeve kurta with a waistcoat.";
			if (occasion == "party")
			return "Formal blazer with a stylish muffler.";
		}
	}
	return "Invalid input.Please try again.";
	}
	
	
	string getWeatherInput(){
		string weather;
		while(true){
			cout<<"\nPlease Select Weather \n1.Sunny \n2.Rainy \n3.cold \n4.windy \n\nWeather : ";
			cin>>weather;
			weather=toLowercase(weather);
			if (weather =="sunny" || weather == "rainy" || weather == "cold" || weather == "windy")
			return weather;
			else
			cout << "Invalid Weather Input. Please try again\n";
		}
	}
	
		string getOccasionInput(){
		string occasion;
		while(true){
			cout<<"\nPlease Select Occasion \n1.casual \n2.Formal \n3.Party \n \nOccasion : ";
			cin>>occasion;
			occasion=toLowercase(occasion);
			if (occasion == "casual" || occasion == "formal" || occasion =="party")
			return occasion;
			else
			cout << "Invalid Occasion Input. Please try again.\n";
		}
	}
	
		string getGenderInput(){
		string gender;
		while(true){
			cout<<"\nPlease enter your Gender (Male/Female) : ";
			cin>>gender;
			gender=toLowercase(gender);
			if (gender =="male" || gender == "female" )
			return gender;
			else
			cout << "Invalid Gender Input. Please try again.\n";
		}
	}



int main(){
	string weather,occasion,gender;
	char choice;
	
	    cout<<"\n\n\t\t\t\t\t\t\t\t**********************************************";
		cout<<"\n\t\t\t\t\t\t\t\t* WELCOME TO FASHION STYLE SUGGESTION SYSTEM *\n";
		cout<<"\t\t\t\t\t\t\t\t**********************************************";
		do{
			gender=getGenderInput();
			weather=getWeatherInput();
			occasion=getOccasionInput();
			
			cout<<"==========================================================================\n";
			cout<<"Suggested Outfits : "<<getOutfitSuggestion(gender,weather,occasion)<<endl;
			cout<<"===========================================================================\n";
			cout<<"Do you want another suggestion? (y/n): ";
			cin>>choice;
		}
        while(choice == 'y' || choice == 'Y' );
    	cout << "Thank You for using the Fashion Style Suggestion System !"<<endl;
	
	
	return 0;

}
