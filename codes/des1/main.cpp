#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i,ch,lp;
    char cipher[50],plain[50];
    char key[50];
        cout<<"\n1.Data Encrypt\n2.Data Decrypt\n3.Exit\n";
        cout<<"Enter your choice: ";
        cin>>ch;
        switch(ch){
            case 1:cout<<"\nData Encryption";
                    cout<<"\nEnter the plain text";
                    fflush(stdin);
                    gets(plain);
                    cout<<"\nEnter the encryption key :";
                    gets(key);
                    lp=strlen(key);
                    for(int i=0;plain[i]!='\0';i++){
                        cipher[i]=plain[i]^lp;

                    }
                    cipher[i]='\0';
                    cout<<"\nEncrypted data is :";
                    puts(cipher);
                    break;
            case 2:cout<<"\nData decryption";
                    for(int i=0;cipher[i]!='\0';i++){
                        plain[i]=cipher[i]^lp;

                    }
                    cout<<"\nDecrypted data is :";
                    puts(plain);
                    break;
            case 3:exit(0);
        }

    }
