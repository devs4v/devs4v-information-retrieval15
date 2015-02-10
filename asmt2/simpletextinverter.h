class SimpleTextInverter{
    private:
        string data;
        string parse_file_to_tokens();
        string removeEscapeChars();
        void tokenize();
        void split();
    public:
        SimpleTextInverter();
        void get_file_data(const string, string&);
        // void load_data(string data);
        // void print_data();
        void emit(char *, const string outFile);
        void sort(char *, const string outFile);
        void invert(char *, const string outFile);
        ~SimpleTextInverter();
        
};

void SimpleTextInverter::load_data(string data){
    this.data = data;
}
void SimpleTextInverter::print_data(){
    for(int i=0; i<50; i++){
        cout<<data[i];
    }
    cout<<"\n";
}

void SimpleTextInverter::get_file_data(const string filename, string& fileContents){
    errno = 0;
    ifstream in(filename.c_str(), std::ios::in | std::ios::binary);
    if (in){
        in.seekg(0, ios::end);
        fileContents.resize(in.tellg());
        in.seekg(0, ios::beg);
        in.read(&fileContents[0], fileContents.size());
        in.close();
        return 0;
    }else{
        return -1;
    }
}
map<string, string> SimpleTextInverter::parse_file_to_tokens(const string filename){
    string fileData;
    get_file_data(filename, fileData);
    string sanitized_chars = removeEscapeChars();
    map<string, string> m = tokenize(sanitized_chars, filename);

}

void SimpleTextInverter::removeEscapeChars(){
    string blankie = " ";
    string result;
    // regex no_tag_regex("<.*>");
    regex no_linefeed_tabs("[(\\n)|(\\t)]");
    regex no_special_chars("[(\\/)|(*)|(,)|(.)|(;)|(:)|(!)|(?)|(\\’)|(\\\")|([)|(])|(\\()|(\\))]");

    // result = regex_replace(doc, no_tag_regex, blankie);
    result = regex_replace(result, no_linefeed_tabs, blankie);
    result = regex_replace(result, no_special_chars, blankie);
    return result;
}

void SimpleTextInverter::emit(string directory){
    
    ifstream fin;
    ofstream fout;

    string dir, filepath;
    string data;
    DIR *dp;
    struct dirent *dirp;
    struct stat filestat;
    
    string fileContents;
    map<string, string> mapped_tokens;

    errno = 0;
    dp = opendir( dir.c_str() );
    if(dp == NULL){
        cout << "Error(" << errno << ") opening " << dir << endl;
        return errno;
    }

    while ((dirp = readdir( dp ))){
        filepath = dir + "/" + dirp->d_name;
        if(d)cout<<"\nreading"<<filepath;

        // If the file is a directory (or is in some way invalid) we'll skip it 
        if (stat( filepath.c_str(), &filestat )) continue;
        if (S_ISDIR( filestat.st_mode ))         continue;

        mapped_tokens = map_string_data_to_tokens(filepath);

        /* TODO write map to emit.out */

        free(fileContents);
    }

    closedir( dp );
}