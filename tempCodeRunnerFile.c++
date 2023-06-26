cout << "Stack\n";
    for (int j = 0; j < size; j++)
    {
        cout << stack[j] << " ";
    }
    cout << "\n Cene\n";
    for (int j = 0; j < size; j++)
    {
        cout << edges[j] << " ";
    }
    cout << "\nfali mi jos T\n";
    for (int i = 0; i < size; i++)
    {

        cvor *temp = ways->niz[i];
        cout << i << "=";
        while (temp != nullptr)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }