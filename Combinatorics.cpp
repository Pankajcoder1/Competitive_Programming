struct Mint
{
    int val;
 
    Mint(long long v = 0)
    {
        if (v < 0)
            v = v % MOD + MOD;
        if (v >= MOD)
            v %= MOD;
        val = v;
    }
 
    static int mod_inv(int a, int m = MOD)
    {
        int g = m, r = a, x = 0, y = 1;
        while (r != 0) {
            int q = g / r;
            g %= r; swap(g, r);
            x -= q * y; swap(x, y);
        } 
        return x < 0 ? x + m : x;
    } 
    explicit operator int() const
    {
        return val;
    }
    Mint& operator+=(const Mint &other)
    {
        val += other.val;
        if (val >= MOD) val -= MOD;
        return *this;
    }
    Mint& operator-=(const Mint &other)
    {
        val -= other.val;
        if (val < 0) val += MOD;
        return *this;
    }
    static unsigned fast_mod(uint64_t x, unsigned m = MOD)
    {
           #if !defined(_WIN32) || defined(_WIN64)
                return x % m;
           #endif
           unsigned x_high = x >> 32, x_low = (unsigned) x;
           unsigned quot, rem;
           asm("divl %4\n"
            : "=a" (quot), "=d" (rem)
            : "d" (x_high), "a" (x_low), "r" (m));
           return rem;
    }
    Mint& operator*=(const Mint &other)
    {
        val = fast_mod((uint64_t) val * other.val);
        return *this;
    }
    Mint& operator/=(const Mint &other)
    {
        return *this *= other.inv();
    }
    friend Mint operator+(const Mint &a, const Mint &b) { return Mint(a) += b; }
    friend Mint operator-(const Mint &a, const Mint &b) { return Mint(a) -= b; }
    friend Mint operator*(const Mint &a, const Mint &b) { return Mint(a) *= b; }
    friend Mint operator/(const Mint &a, const Mint &b) { return Mint(a) /= b; }
    Mint& operator++()
    {
        val = val == MOD - 1 ? 0 : val + 1;
        return *this;
    }
    Mint& operator--()
    {
        val = val == 0 ? MOD - 1 : val - 1;
        return *this;
    }
    Mint operator++(int32_t) { Mint before = *this; ++*this; return before; }
    Mint operator--(int32_t) { Mint before = *this; --*this; return before; }
    Mint operator-() const
    {
        return val == 0 ? 0 : MOD - val;
    }
    bool operator==(const Mint &other) const { return val == other.val; }
    bool operator!=(const Mint &other) const { return val != other.val; }
    Mint inv() const
    {
        return mod_inv(val);
    }
    Mint power(long long p) const
    {
        assert(p >= 0);
        Mint a = *this, result = 1;
        while (p > 0) {
            if (p & 1)
                result *= a;
 
            a *= a;
            p >>= 1;
        }
        return result;
    }
    friend ostream& operator << (ostream &stream, const Mint &m)
    {
        return stream << m.val;
    }
    friend istream& operator >> (istream &stream, Mint &m)
    {
        return stream>>m.val;   
    }
};

Mint fact[MAX], finv[MAX], invs[MAX];
void initfact()
{
    fact[0]=1;

    for(int i = 1;i < MAX;i++)
    {
        fact[i] = fact[i - 1] * i;
    }

    finv[MAX-1] = fact[MAX-1].inv();
    
    for(int i = MAX-2;i >= 0;i--)
    {
        finv[i] = finv[i + 1] * (i + 1);
    }

    for(int i = MAX - 1;i >= 1;i--)
    {
        invs[i] = finv[i] * fact[i - 1];
    }
}

Mint choose(int n, int k)
{
    return fact[n] * finv[n - k] * finv[k];
}

Mint binom(int a,int b)
{
    return fact[a + b] * finv[a] * finv[b];
}

Mint catalan(int n)
{
    return binom(n, n) - (n - 1 >= 0 ? binom(n - 1,n + 1):0);
}