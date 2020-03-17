
int printMenu(string menu)
{
    int choice;

    cout << menu << endl;
    
    cout << "Enter choice: ";
    cin >> choice;
    
    return choice;
}

int validateChoice(int choice, string menu)
{
    
    int c = choice;
    while(c != 1 && c!= 2 && c!= 3 && c!= 4 && c!= 5)
    {
        cout << menu << endl;
        cout << "Enter valid choice (1-5): ";
        cin >> c;
    }
    
    return c;
}
