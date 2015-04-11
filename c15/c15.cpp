#include <iostream>

using namespace std;

// Regexp
//
//
bool matchstar(const char c, const char *regexp, const char *text);

bool matchhere(const char *regexp, const char *text)
{
  if (regexp[0] == '^') return false;

  if (regexp[0] == '\0') return true;

  if (regexp[0] == '$') return (*text == '\0');

  if (regexp[1] == '*') return (matchstar(regexp[0], regexp+2, text));

  if ((*text != '\0') && (regexp[0] == '.' || regexp[0] == *text)) 
    return matchhere(regexp+1, text+1);

  return false;
}

bool matchstar(const char c, const char *regexp, const char *text)
{

  do {
    if (matchhere(regexp, text)) return true;
  } while ((*text != '\0') && ((c == *text++) || (c == '.') ));

  return false;
}

bool match(const char *regexp, const char *text)
{

  if (!regexp || (regexp[0] == '\0')) return true;

  if (!text) return false;

  if (regexp[0] == '^') return matchhere(regexp+1, text);	  

  do {
    if (matchhere(regexp, text)) return true; 
  } while (*text++ != '\0');

  return false;
}

int main(int argc, char *argv[], char **envp)
{
  const char *regexp = "^.*$";
  const char *text = "This is a test";

  if (match(regexp, text)) cout << regexp << " matched " << text << endl; 
  else cout << regexp << " did not match " << text << endl;

  return 0;
}
