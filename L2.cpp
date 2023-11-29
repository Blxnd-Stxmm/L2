#include <iostream>
#include <sstream>

using namespace std;

class Gnksjfnj
{
protected:
    static const int dfnuhvdj = 100;
    int byrebyjfenj[dfnuhvdj];
    int mfkgjnrtjkf;
public:
    Gnksjfnj() {
        mfkgjnrtjkf = dfnuhvdj;
        for (int x = 0; x < mfkgjnrtjkf; x++)
            byrebyjfenj[x] = 0;
    }
    Gnksjfnj(int nawjknjnj) {
        mfkgjnrtjkf = nawjknjnj;
        for (int x = 0; x < mfkgjnrtjkf; x++)
            byrebyjfenj[x] = 0;
    }
    int& operator[](int xuindex) {
        if (xuindex > 0 && xuindex < 100)
            return byrebyjfenj[xuindex];
    }
    friend ostream& operator<<(ostream& out, Gnksjfnj& r);
    friend istream& operator>>(istream& in, Gnksjfnj& r);
};
class Hex : public Gnksjfnj
{
    char lfd[dfnuhvdj];
public:
    Hex() {
        mfkgjnrtjkf = dfnuhvdj;
        for (int x = 0; x < mfkgjnrtjkf; x++)
            lfd[x] = '0';
    }
    Hex(int mlkfdgnm) {
        mfkgjnrtjkf = mlkfdgnm;
        for (int x = 0; x < mfkgjnrtjkf; x++)
            lfd[x] = '0';
    }

    long long ndfjkgn() {
        long long snomfdl = 0;
        for (int x = mfkgjnrtjkf - 1; x >= 0; x--) {
            switch (lfd[x]) {
            case 'A': snomfdl += 10 * pow(16, x); break;
            case 'B': snomfdl += 11 * pow(16, x); break;
            case 'C': snomfdl += 12 * pow(16, x); break;
            case 'D': snomfdl += 13 * pow(16, x); break;
            case 'E': snomfdl += 14 * pow(16, x); break;
            case 'F': snomfdl += 15 * pow(16, x); break;
            default: snomfdl += (lfd[x] - '0') * pow(16, x); break;
            }
        }
        return snomfdl;
    }
    Hex hkdjfgnbdq(string nfdjvndf, bool nfdjgnjd = false) {
        Hex mkhl;
        int x = 0;

        for (int z = nfdjvndf.size() - 1; z >= 0; z--) {
            mkhl.lfd[x] = nfdjvndf[z];
            x++;
        }
        if (nfdjgnjd) {
            mkhl.lfd[x] = '-';
            x++;
        }
        mkhl.mfkgjnrtjkf = x;
        return mkhl;
    }
    Hex operator+(Hex r) {
        Hex mhjkol;
        stringstream mfjgin;
        long long mkvjngf, kjh;
        mkvjngf = ndfjkgn();
        kjh = r.ndfjkgn();
        mkvjngf += kjh;
        mfjgin << hex << mkvjngf;
        mhjkol = hkdjfgnbdq(mfjgin.str());
        return mhjkol;
    }
    Hex operator-(Hex r) {
        Hex pjjvhg;
        stringstream xcvbn;
        bool vbnjuh = false;
        long long tyu = 0, vbn = 0;
        tyu = ndfjkgn();
        vbn = r.ndfjkgn();
        if (tyu < vbn) {
            vbn -= tyu;
            vbnjuh = true;
            xcvbn << hex << vbn;
        }
        else {
            tyu -= vbn;
            xcvbn << hex << tyu;
        }
        pjjvhg = hkdjfgnbdq(xcvbn.str(), vbnjuh);
        return pjjvhg;
    }
    Hex operator*(Hex r) {
        Hex hkjhgy;
        stringstream cxcvih;
        long long yuegy = 0, nfjgk = 0;
        yuegy = ndfjkgn();
        nfjgk = r.ndfjkgn();
        yuegy *= nfjgk;
        cxcvih << hex << yuegy;
        hkjhgy = hkdjfgnbdq(cxcvih.str());
        return hkjhgy;
    }
    Hex operator/(Hex r) {
        Hex sdw;
        stringstream thyijrtkj;
        long long zzz = 0, ccc = 0;
        zzz = ndfjkgn();
        ccc = r.ndfjkgn();
        zzz /= ccc;
        thyijrtkj << hex << zzz;
        sdw = hkdjfgnbdq(thyijrtkj.str());
        return sdw;
    }
    bool operator>(Hex r) {
        long long wasde = 0, sdf = 0;
        wasde = ndfjkgn();
        sdf = r.ndfjkgn();
        if (wasde > sdf)
            return true;
        else
            return false;
    }
    bool operator<(Hex r) {
        long long zxcsd = 0, xzc = 0;
        zxcsd = ndfjkgn();
        xzc = r.ndfjkgn();
        if (zxcsd < xzc)
            return true;
        else
            return false;
    }
    friend ostream& operator<<(ostream& out, Hex& r);
    friend istream& operator>>(istream& in, Hex& r);
};
ostream& operator<<(ostream& out, Gnksjfnj& r) {
    for (int z = 0; z < r.mfkgjnrtjkf; z++)
        out << r.byrebyjfenj[z] << " ";
    return out;
}
istream& operator>>(istream& in, Gnksjfnj& r) {
    for (int v = 0; v < r.mfkgjnrtjkf; v++)
        in >> r.byrebyjfenj[v];
    return in;
}
ostream& operator<<(ostream& out, Hex& r) {
    for (int v = r.mfkgjnrtjkf - 1; v >= 0; v--)
        out << r.lfd[v];
    return out;
}
istream& operator>>(istream& in, Hex& r) {
    for (int n = 0; n < r.mfkgjnrtjkf; n++)
        in >> r.lfd[n];
    return in;
}
void display(Hex m, Hex n) {
    Hex qq;
    cout << "Hex1 " << m << " Hex2 " << n << endl;
    qq = m + n;
    cout << "Hex1+Hex2  " << qq << endl;
    qq = m - n;
    cout << "Hex1-Hex2  " << qq << endl;
    qq = m * n;
    cout << "Hex1*Hex2  " << qq << endl;
    qq = m / n;
    cout << "Hex1/Hex2 " << qq << endl;
}

int main() {
    int dfggdf, fghfgh;

    cin >> dfggdf;
    Gnksjfnj k(dfggdf);
    cin >> k;

    cin >> fghfgh;
    Hex m(fghfgh), n(fghfgh);
    cin >> m >> n;

    cout << "Array" << k << endl;

    display(m, n);

    int change = 1, x, y;
    while (change) {
        cin >> change;
        switch (change) {
        case 0: change = 0; break;
        case 1: cin >> x; cin >> y; k[x] = y; cout << "Array" << k << endl; break;
        case 2: cin >> m; display(m, n); break;
        case 3: cin >> n; display(m, n); break;
        }
    }
}