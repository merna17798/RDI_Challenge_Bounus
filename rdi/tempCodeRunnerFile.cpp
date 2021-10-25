    getline(file, word);
    cout << word;

    if (word.size())
        words.push_back(word);
    word = "\0";