
#include<iostream>
#include<vector>
#include<map>
#include<string>

using namespace std;



vector<long> countSentences(vector<string>wordSet, vector<string>sentences)

		vector<long>count = new long[sentences.length];

		map<string, list<String>> map = new map<>();
		HashMap<String, List<String>> mapToUse = new HashMap<>();
		for (String word : words) {
			char[] charArr = word.toCharArray();
			Arrays.sort(charArr);
			String sorted = new String(charArr);

			if (map.get(sorted) != null) {
				List<String> list = map.get(sorted);
				list.add(word);
				map.put(sorted, list);
				mapToUse.put(word, list);
			} else {
				List<String> list = new ArrayList<String>();
				list.add(word);
				map.put(sorted, list);
				mapToUse.put(word, list);
			}

		}
		int index = 0;
		for (String sentence : sentences) {
			int c = 1;
			String[] strArr = sentence.trim().split(" ");
			for (String str : strArr) {
				if (mapToUse.get(str) != null) {
					List<String> list = mapToUse.get(str);
					c = c * list.size();
				}
			}
			count[index++] = c;
		}

		for (int i = 0; i < count.length; i++) {
			System.out.println(count[i] + " ");
		}

int main()
{

vector<string>wordSet = {"bats","tabs","in","cat","act"};
vector<string>sentences = {"cat the bats", "in the act", "act tabs in"};

vector<long>value = countSentences(wordSet, sentences);
    return 0;
}