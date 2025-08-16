#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
using namespace std;


struct Symbol {
    string word;
    string meaning;

};


string toLowerCase(const string& s) {
    string result = s;
    transform(result.begin(), result.end(), result.begin(), ::tolower);
    return result;





}





int main() {
    vector<Symbol> dictionary = {
    {"dog", "Represents loyalty, friendship, but sometimes hidden danger."},
    {"cat", "Independence, intuition, or hidden feminine energy."},
    {"snake", "Transformation, danger, betrayal, or hidden fears."},
    {"bird", "Freedom, spiritual growth, or aspirations."},
    {"horse", "Strength, freedom, and personal drive."},
    {"fish", "Fertility, creativity, or spiritual insights."},
    {"lion", "Courage, authority, or leadership."},
    {"tiger", "Raw power, aggression, or hidden fears."},
    {"bear", "Strength, protection, or inner anger."},
    {"wolf", "Instincts, community, but also hidden threats."},
    {"cow", "Nurturing, motherhood, or sacrifice."},
    {"sheep", "Conformity, innocence, or passivity."},
    {"elephant", "Wisdom, memory, or obstacles."},
    {"frog", "Transformation, cleansing, or renewal."},
    {"spider", "Creativity, patience, or entrapment."},
    {"insect", "Minor annoyances, small issues in life."},
    {"bee", "Community, hard work, or sweet rewards."},
    {"butterfly", "Transformation, beauty, or short-lived joy."},
    {"ant", "Teamwork, patience, and persistence."},
    {"house", "Represents self, family, and inner stability."},
    {"room", "Hidden aspects of yourself or opportunities."},
    {"door", "New opportunities, transitions, or choices ahead."},
    {"window", "Perspective, hope, or possibilities."},
    {"key", "Solutions, secrets, or opportunities."},
    {"stairs", "Progress, transition, or personal growth."},
    {"bridge", "Transition, overcoming obstacles, or connection."},
    {"road", "Life’s path, direction, or personal journey."},
    {"car", "Direction in life, control, or movement toward goals."},
    {"train", "Life’s journey, routine, or being on track."},
    {"plane", "Ambition, new goals, or rising above problems."},
    {"ship", "Journey, exploration, or emotional voyage."},
    {"bicycle", "Balance, independence, or personal effort."},
    {"fire", "Strong emotions, passion, destruction, or renewal."},
    {"water", "Emotions, cleansing, or new beginnings."},
    {"river", "Flow of life, emotions, or destiny."},
    {"sea", "Symbolizes emotions, subconscious, or life’s journey."},
    {"lake", "Inner peace, reflection, or calm emotions."},
    {"rain", "Emotional release, sadness, or cleansing."},
    {"storm", "Inner conflict, chaos, or emotional struggle."},
    {"snow", "Purity, isolation, or suppressed emotions."},
    {"ice", "Coldness, rigidity, or emotional blockages."},
    {"sun", "Happiness, clarity, energy, or enlightenment."},
    {"moon", "Intuition, mystery, feminine energy, or cycles."},
    {"stars", "Hope, guidance, or higher inspiration."},
    {"darkness", "Fear, uncertainty, or the unknown."},
    {"light", "Truth, clarity, or spiritual awakening."},
    {"forest", "Exploration, subconscious mind, or confusion."},
    {"mountain", "Obstacles, challenges, or personal growth."},
    {"valley", "Calmness, relaxation, or vulnerability."},
    {"tree", "Life, growth, grounding, or family roots."},
    {"flower", "Beauty, growth, or new opportunities."},
    {"garden", "Peace, nurturing, or creativity."},
    {"desert", "Loneliness, struggle, or spiritual searching."},
    {"city", "Social life, opportunities, or confusion."},
    {"village", "Simplicity, community, or nostalgia."},
    {"castle", "Ambition, protection, or hidden desires."},
    {"tower", "Isolation, higher perspective, or authority."},
    {"prison", "Feeling trapped, limitations, or guilt."},
    {"bridge", "Connection, transition, or overcoming fear."},
    {"school", "Learning, personal growth, or past experiences."},
    {"exam", "Fear of failure, self-evaluation, or pressure."},
    {"teacher", "Authority, guidance, or lessons in life."},
    {"friend", "Trust, companionship, or aspects of yourself."},
    {"stranger", "Unknown aspects of self or unexpected events."},
    {"family", "Roots, responsibilities, or emotional ties."},
    {"child", "Innocence, potential, or responsibilities."},
    {"baby", "New beginnings, innocence, or responsibilities."},
    {"marriage", "Commitment, union, or transitions."},
    {"wedding", "Partnership, love, or unity."},
    {"death", "Not literal death, but transformation or change."},
    {"coffin", "Closure, endings, or suppressed fears."},
    {"blood", "Life energy, passion, but also pain or sacrifice."},
    {"injury", "Vulnerability, emotional hurt, or weakness."},
    {"naked", "Vulnerability, truth, or exposure."},
    {"clothes", "Self-image, protection, or hiding true self."},
    {"money", "Self-worth, opportunities, or material concerns."},
    {"gold", "Wealth, wisdom, or spiritual value."},
    {"jewel", "Self-worth, uniqueness, or something precious."},
    {"weapon", "Defense, aggression, or personal power."},
    {"knife", "Conflict, betrayal, or sharp decisions."},
    {"gun", "Power, danger, or suppressed anger."},
    {"sword", "Strength, honor, or decisive action."},
    {"fight", "Internal struggle, aggression, or conflict with others."},
    {"chase", "Avoidance, fear, or running from problems."},
    {"falling", "Loss of control, insecurity, or fear of failure."},
    {"flying", "Desire for freedom, escaping limitations, or ambitions."},
    {"crying", "Emotional release, sadness, or vulnerability."},
    {"laughing", "Joy, relief, or masking emotions."},
    {"screaming", "Suppressed emotions, fear, or need for attention."},
    {"singing", "Expression, joy, or creativity."},
    {"dancing", "Freedom, self-expression, or celebration."},
    {"mirror", "Self-reflection, truth, or hidden aspects of self."},
    {"shadow", "Hidden fears, repressed parts of the self."},
    {"angel", "Protection, hope, or spiritual guidance."},
    {"devil", "Temptation, inner conflict, or guilt."},
    {"ghost", "Unresolved past, fear, or memories."},
    {"zombie", "Routine, lack of willpower, or suppressed emotions."},
    {"monster", "Fear, anxiety, or internal struggles."},
    {"god", "Faith, higher power, or destiny."}
    };

    cout << "Dream Parser Started:" << endl;
    cout << "Please enter keyword of your dream" << endl;

    char cont = 'y';
    cin.ignore(); 


    while (cont == 'y' || cont == 'Y') {
        cout << "Please enter your dream: ";
        string dream;
        getline(cin, dream);

        stringstream ss(dream);
        string word;
        bool found = false;


        cout << "!!! Dream Interpretation!!!" << endl;



        while (ss >> word) {
            word = toLowerCase(word);


            for (auto& sym : dictionary) {
                if (word.find(sym.word) != string::npos) {
                    cout << sym.word << "--->" << sym.meaning << endl;
                    found = true;

                }


            }




        }
        if (!found) {
            cout << "Sorry that we dont have this word inside our dictionary however; we will add it as soon as possible !" << endl;


        }

        cout << "Do you want to enter another dream? (y/n): ";
        cin >> cont;
        cin.ignore();

    }

    cout << "Thanks for using DreamParser! Goodbye....";

    return 0;





}
