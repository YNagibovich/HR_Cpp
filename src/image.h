// dummy image 
class CImage 
{
public:
    CImage( int nTotal);
    ~CImage();

    // jpeg only 
    bool load( const char* pName);
    
    // jpeg only 
    bool save( const char* pName);

    // rgba->gray
    bool toGrayscale( int nThreads = 1);

    // Gaussian blur, deep 3
    bool blur( int nThreads = 1);

private:

    // rgba->gray
    bool _toGrayscale( int nOrder);

    // Gaussian blur, deep 3
    bool _blur( int nOrderint);

    unsigned char* getInputOffset( int nOrder);
    unsigned char* getOutputOffset( int nOrder);
    unsigned char* getAuxOffset( int nOrder);
    int getSliceSize() { return m_nHeight / m_nTotalThreads;}

    unsigned char* m_pRawData;
    unsigned char* m_pProcessedData;
    unsigned char* m_pAuxData;;
    int m_nWidth;
    int m_nHeight;
    int m_nTotalThreads;
};

#define DEF_QUALITY 100