

// Write your MyBook class here

    //   Class Constructor
    //   
    //   Parameters:
    //   title - The book's title.
    //   author - The book's author.
    //   price - The book's price.
    //
    // Write your constructor here
    
    
    //   Function Name: display
    //   Print the title, author, and price in the specified format.
    //
    // Write your method here
    
    // Write your MyBook class here
class MyBook : Book{
  int price;
  public:
    string title;
    string author;
 MyBook(string title_,string author_,int price_) : Book(title_,author_) ,price(price_){

 }
 virtual void display(){
     cout<<"Title: "<<Book::title<<"\n"<<"Author: "<<Book::author<<"\n"<<"Price: "<<price;
 }



};
// End class

