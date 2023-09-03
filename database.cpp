
#include <iostream>
#include <string>
#include <iomanip>

// Define a structure to represent a member
struct Member {
    std::string name;
    int id;
    // Add more fields as needed
};

const int MaxMembers = 10; // Maximum number of members

// Function to add a member to the database
void AddMember(Member database[], int& numMembers) {//using pointer to struct
    if (numMembers < MaxMembers) {
        Member newMember;
        std::cout << "Enter name: ";
        std::cin.ignore();  // Clear the newline character from the buffer
        std::getline(std::cin, newMember.name);
        std::cout << "Enter ID: ";
        std::cin >> newMember.id;
        // Add more fields as needed
        database[numMembers] = newMember;
        numMembers++;
        std::cout << "Member added successfully." << std::endl;
    } 
    else {
        std::cout << "Database is full. Cannot add more members." << std::endl;
    }
}

// Function to delete a member by ID
void DeleteMember(Member database[], int& numMembers, int id) {
    for (int i = 0; i < numMembers; i++) {
        if (database[i].id == id) {
            // Shift elements to remove the member
            for (int j = i; j < numMembers - 1; j++) {
                database[j] = database[j + 1];
            }
            numMembers--;
            std::cout << "Member with ID " << id << " deleted successfully." << std::endl;
            return;
        }
    }
    std::cout << "Member with ID " << id << " not found." << std::endl;
}

// Function to print all members
void PrintAllMembers(const Member database[], int numMembers) {
    if(numMembers==0)
    {
        std::cout<<"There is no member inserted in database"<<std::endl;
    }
    else{
           std::cout << "Members in the database:" << std::endl;
           for (int i = 0; i < numMembers; i++) {
           std::cout << "Name: " << database[i].name << ", ID: " << database[i].id << std::endl;
            // Print more fields as needed
           }
    }
   
}
// function to search in database
void Member_search(Member database[], int& numMembers, std::string& name)
{
    bool flag=false;
    if(numMembers==0)
    {
        std::cout<<"There is no member inserted in database"<<std::endl;
    }
    else{
        for (int i = 0; i < numMembers; i++) {
        if (database[i].name == name) {
            flag=true;
            std::cout<<database[i].name<<" is found and ID : "<<database[i].id<<std::endl;
            break;
        }
        }
        if(!flag)
        {
            std::cout << "No matching member found." << std::endl;
        }
    }
}

// Function to delete all members
void DeleteAllMembers(int& numMembers) {
    numMembers = 0;
    std::cout << "All members deleted." << std::endl;
}

int main() {
    Member database[MaxMembers];
    int numMembers = 0;
    int choice;
    while (true) {
        std::cout << "Database Options:" << std::endl;
        std::cout << "1. Add Member" << std::endl;
        std::cout << "2. Delete Member" << std::endl;
        std::cout << "3. Print All Members" << std::endl;
        std::cout << "4. Delete All Members" << std::endl;
        std::cout << "5. Search Member" << std::endl;
        std::cout << "6. Close" << std::endl;
        std::cout << "Enter your choice: ";
        std::cin >> choice;
        
        
        switch (choice) {
            case 1:
                AddMember(database, numMembers);
                break;
            case 2:{
                int idToDelete;
            
                std::cout << "Enter the ID of the member to delete: ";
                std::cin >> idToDelete;
                DeleteMember(database, numMembers, idToDelete);
                break;
            }
            case 3:
                PrintAllMembers(database, numMembers);
                break;
            case 4:
                DeleteAllMembers(numMembers);
                break;
            case 5:{
                std::string name_Tosearch;
                std::cout<<"pleaze enter name you want : ";
                std::cin.ignore();  // Clear the newline character from the buffer
                std::getline(std::cin, name_Tosearch);
                Member_search(database,numMembers,name_Tosearch);
                break;
            }
            case 6:
                std::cout << "Closing the program." << std::endl;
                return 0;
            default:
                std::cout << "Invalid choice. Please enter a valid option." << std::endl;
        }
        std::cout<<std::setw(4)<<"**********************"<<std::setw(4)<<std::endl;
    }
   
    return 0;
}


